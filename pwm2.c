#include <REGX52.H>
#include "Timer0.h"
#include "key.h"
#include "nixielight.h"

sbit LED=P2^0;


unsigned char KeyNum,Speed;
unsigned char counter,compare;
void main()
{
	Timer0_Init();
    while(1)
      {
					KeyNum=key();
		if(KeyNum==1)
		{
			Speed++;
			Speed%=4;//1-4
			if(Speed==0){compare=5;}	//���ñȽ�ֵ���ı�PWMռ�ձ�
			if(Speed==1){compare=10;}
			if(Speed==2){compare=20;}
			if(Speed==3){compare=30;}
		}
			
	
    }
			nixie(1,Speed);
}


void Timer0_Routine()  interrupt 1//�ж�֮��ֱ�������ó���
{

	TL0 = 0x18;				//���ö�ʱ��ʼֵ
	TH0 = 0xFC;	
  counter++;
	counter%=100;	//Counter�ӵ�100����
	if(counter<compare)//ռ�ձ�
	{
		LED=1;
	}
	else
	{
		LED=0;
	}
}

