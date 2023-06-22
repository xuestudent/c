#include "stm32f10x.h"                  // Device header
#include "Delay.h"

uint16_t count;
void Exti_init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO,ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;//��������
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	
	//����EXTI
	GPIO_EXTILineConfig(GPIO_PortSourceGPIOB,GPIO_PinSource14);//APB2���ߵ�14����
	
	EXTI_InitTypeDef EXTI_Init_structure;
	EXTI_Init_structure.EXTI_Line=EXTI_Line14;//�ж���
	EXTI_Init_structure.EXTI_LineCmd=ENABLE;//���ж���
	EXTI_Init_structure.EXTI_Mode=EXTI_Mode_Interrupt;//һ�����жϣ�һ�����¼�
	EXTI_Init_structure.EXTI_Trigger=EXTI_Trigger_Rising;//�ߵ�ƽ����
	EXTI_Init(&EXTI_Init_structure);
	
	//����NVIC
	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//�жϷ���  ��λ��ռ��λ��Ӧ
	
	NVIC_InitTypeDef NVIC_Init_structure;
	NVIC_Init_structure.NVIC_IRQChannel=EXTI15_10_IRQn;
	NVIC_Init_structure.NVIC_IRQChannelCmd=ENABLE;
	NVIC_Init_structure.NVIC_IRQChannelPreemptionPriority=1;//��ռ���ȼ�
	NVIC_Init_structure.NVIC_IRQChannelSubPriority=1;//��Ӧ���ȼ�
	NVIC_Init(&NVIC_Init_structure);
	
}
uint16_t Get_count(void)
{
	return count;
}


void EXTI15_10_IRQHandler(void)//�жϺ���
{
	if(EXTI_GetITStatus(EXTI_Line14) == SET)//��ȡexti14�ı�־λ�Ƿ�Ϊ1
	{
		count++;
		EXTI_ClearITPendingBit(EXTI_Line14);//ʹ����֮�������־λ
	}
	
	
}
