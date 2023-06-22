#include "stm32f10x.h"                  // Device header


uint8_t RData;
void serial_init(void)
{
	//��ʱ��
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1,ENABLE);//�򿪴���ʱ��
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);//������ʱ��
	//��������
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;//��������
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);	
	

	
	USART_InitTypeDef USART_Init_structure;
	USART_Init_structure.USART_BaudRate=9600;//������
	USART_Init_structure.USART_HardwareFlowControl=USART_HardwareFlowControl_None;//����������
	USART_Init_structure.USART_Mode=USART_Mode_Tx | USART_Mode_Rx;//ģʽ
	USART_Init_structure.USART_Parity=USART_Parity_No;//У��λ
	USART_Init_structure.USART_StopBits=USART_StopBits_1;//ֹͣλ
	USART_Init_structure.USART_WordLength=USART_WordLength_8b;//����λ
  USART_Init(USART1,&USART_Init_structure);
	
	USART_ITConfig(USART1,USART_IT_RXNE,ENABLE);
	
	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	
	NVIC_InitTypeDef NVIC_Init_structure;
	NVIC_Init_structure.NVIC_IRQChannel=USART1_IRQn;
	NVIC_Init_structure.NVIC_IRQChannelCmd=ENABLE;
	NVIC_Init_structure.NVIC_IRQChannelPreemptionPriority=1;//��ռ���ȼ�
	NVIC_Init_structure.NVIC_IRQChannelSubPriority=1;//��Ӧ���ȼ�
	NVIC_Init(&NVIC_Init_structure);
	
	
	USART_Cmd(USART1,ENABLE);
}
void Serial_Send_Byte(uint8_t Byte)
{
	USART_SendData(USART1,Byte);
  while(USART_GetFlagStatus(USART1,USART_FLAG_TXE)==RESET);//������־λ��set
	
}
 
void USART1_IRQHandler(void)//�����ж�
{
	 if(USART_GetFlagStatus(USART1,USART_FLAG_RXNE) == SET )
		{
   
			RData=USART_ReceiveData(USART1);
			USART_ClearITPendingBit(USART1,USART_FLAG_RXNE);
		}
	
}
