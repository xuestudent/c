#include "stm32f10x.h"                  // Device header


void PWM_Init(void)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2,ENABLE);//APB1�ⲿʱ�ӿ�����Tim2
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);//����APB2��������

	
	/*RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);������ӳ��
	GPIO_PinRemapConfig(GPIO_PartialRemap1_TIM2,ENABLE);������ӳ������  PA0-PA15
	GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable,ENABLE);pa15ԭ���ǵ��Զ˿���Ҫ��PinRemapConfig����һ��*/
	
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP ;//��������ģʽ   ʹ�� �������� Ƭ��������Կ�������
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;//��������
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;//����Ƶ��
	GPIO_Init(GPIOA, &GPIO_InitStructure);//��ʼ��

	
	TIM_InternalClockConfig(TIM2);//�ڲ�ʱ��Ƶ��
	
	TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStructure;//����ʱ����Ԫ�ṹ��
	TIM_TimeBaseInitStructure.TIM_ClockDivision=TIM_CKD_DIV1;//һ��Ƶ   ʱ�ӷ�Ƶ
	TIM_TimeBaseInitStructure.TIM_CounterMode=TIM_CounterMode_Up ;//������ģʽ   ���ϼ���
	TIM_TimeBaseInitStructure.TIM_Period=100-1;//ARR�Զ���װ��    һ���ȵ���1���� 10000����һ��
	TIM_TimeBaseInitStructure.TIM_Prescaler=720-1;//pscԤ��Ƶ����ֵ    ����ֵ��0-65535
	TIM_TimeBaseInitStructure.TIM_RepetitionCounter=0;//�ظ���������ֵ���߼�����������
	TIM_TimeBaseInit(TIM2,&TIM_TimeBaseInitStructure);//��ʼ��ʱ����Ԫ
	
	TIM_OCInitTypeDef  TIM_OCInitstructure;//����ȽϽṹ��
	TIM_OCStructInit(&TIM_OCInitstructure);//���ṹ�帳��ʼֵ
	TIM_OCInitstructure.TIM_OCMode=TIM_OCMode_PWM1;//����Ƚ�ģʽѡ��
	TIM_OCInitstructure.TIM_OCPolarity=TIM_OCPolarity_High;//��������Ƚϵļ��� ѡ��ߵ�ƽ
  TIM_OCInitstructure.TIM_OutputState=TIM_OutputState_Enable;//�������ʹ��  ʹ��
	TIM_OCInitstructure.TIM_Pulse=0;//����CCR
	
	TIM_OC1Init(TIM2,&TIM_OCInitstructure);//��ʼ������Ƚ�
	
	TIM_Cmd(TIM2,ENABLE);//������ʱ��
	
	
}
	void PWM_setCompare(uint16_t Compare)
	{
		
		TIM_SetCompare1(TIM2,Compare);
		
	}
	

