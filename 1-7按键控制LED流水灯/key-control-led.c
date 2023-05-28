#include <REGX52.H>
#include "Delay.h"
#include "key.h"
#include "Timer0.h"
#include <INTRINS.H>



//void Timer0_Inite()//���ö�ʱ����  �����������
//{//16Ϊ������
////	TMOD=0X01;//0000 0001  ����TMOD�Ĵ���
//	TMOD&=0xF0;//��tmod�ĵ���λ���㣬����λ���ֲ���  ��λ��
//	TMOD|=0x01;//��tmod�����λ��һ������λ���ֲ���  ��λ��
//	TF0=0;//�ж������־λ
//	TR0=1;//��ʱ��T0ʹ��
//	TH0=64535/256;//�������Ĵ���8��Ϊһλ�����Դ�����Ҫ�ֿ�    �߰�λ
//	TL0=64535%256+1;//��Ŀ����ȡ��浽�Ͱ�λ  65536�Ż����
//	ET0=1;//�����жϵļĴ���
//	EA=1;//�����жϵļĴ���
//	PT0=0;//�������ȼ��Ĵ���
//}
//void Timer0_Init(void)		//1����@12.000MHz
//{
//	TMOD &= 0xF0;			//���ö�ʱ��ģʽ
//	TMOD |= 0x01;			//���ö�ʱ��ģʽ
//	TL0 = 0x18;				//���ö�ʱ��ʼֵ
//	TH0 = 0xFC;				//���ö�ʱ��ʼֵ
//	TF0 = 0;				//���TF0��־
//	TR0 = 1;				//��ʱ��0��ʼ��ʱ

//	ET0=1;//�����жϵļĴ���
//	EA=1;//�����жϵļĴ���
//	PT0=0;//�������ȼ��Ĵ���
//}
unsigned char keynumber,ledmode;
void main()
{
	P1=0xFE;
	Timer0_Init();
	while(1)
	{
		keynumber=key();
		if(keynumber)
		{
			if(keynumber==1)
			{
				ledmode++;
				if(ledmode>=2)
				{
					ledmode=0;
				}
			}
		}
	}
}

unsigned int T0count;
            //����
void Timer0_Routine()  interrupt 1//�ж�֮��ֱ�������ó���
{
	TL0 = 0x18;				//���ö�ʱ��ʼֵ
	TH0 = 0xFC;				
//	TH0=64535/256;//��ʱ��֮�󸳳�ʼֵ
//	TL0=64535%256;//��ʱ��֮�󸳳�ʼֵ
	T0count++;
	if(T0count>=500)//һ��֮�����ƣ�һ��֮�����
	{
		T0count=0;//
	 if(ledmode==0)
		 P1=_crol_(P1,1);
	 if(ledmode==1)
		 P1=_cror_(P1,1);
		
	}
	
	
}