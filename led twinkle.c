#include <REGX52.H>
#include <INTRINS.H>//intrinsic���ڵ�
void Delay500ms()		//����Ϊ11.0592MHz�ĺ�������ʱ500ms
{
	unsigned char data i, j, k;

	_nop_();
	i = 4;
	j = 129;
	k = 119;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{
	P2=0xFE;
	Delay500ms();
	P2=0xFF;
	Delay500ms();	
}
