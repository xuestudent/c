#include <REGX52.H>

void UART_Init()
{
	SCON=0x40;
	PCON &= 0x7F;
	
	TMOD &= 0x0F;			//���ö�ʱ��ģʽ
	TMOD |= 0x20;			//���ö�ʱ��ģʽ
  TL1 = 0xFA;			//���ö�ʱ��ʼֵ
	TH1 = 0xFA;			//���ö�ʱ����ֵ
	ET1 = 0;			//��ֹ��ʱ���ж�
	TR1 = 1;			//��ʱ��1��ʼ��ʱ
}


void USART_SendByte(unsigned char Byte)//USART�����ַ�
{
	SBUF=Byte;//������д��SBUF�Ĵ���
	while(TI==0);//ֱ�����Ϳ�������־λ��1��TIΪ1��ʾ�����ݣ�
	TI=0;//TI��־λ����1֮�������0
}