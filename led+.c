#include <REGX52.H>
#include <INTRINS.H>
void Delay(unsigned int xms)		//@11.0592MHz
{
	unsigned char data i, j;
	_nop_();
	i = 2;
	j = 199;
	do
    {
		while (--j);
	} while (--i);
	xms--;
}
void main()
{
	while(1)
{
	if(P3_4==0)
	{
		Delay(20);//���°�ť��������
		while(P3_4==0);//�ж��Ƿ��ڰ���ť
		Delay(20);//���°�ť��������
		P1++;
		P1=~P1;//ȡ��
	}
}	
}