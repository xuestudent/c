#include <REGX52.H>//51ͷ�ļ�
#include <INTRINS.H>
#define uchar unsigned char//�궨��
#define uint unsigned int
sbit WE = P2_7;	//��������
sbit DU = P2_6;	

void delay(uint z)  //��ʱ����
{
	unsigned int x,y;
	for(x = z;x>0;x--)
		for(y=144;y>0;y--);
}


uchar code WEI [] = //λ����
{
0xfe,0xfd,0xfb,0xf7,
0xef,0xdf,0xbf,0x7f
};

uchar code DUAN [] =//������
{
0x3f,0x06,0x5b,0x4f,
0x66,0x6d,0x7d,0x07,
0x7f,0x6f,0x77,0x7c,
0x39,0x5e,0x79,0x71
};

										
void nixie(unsigned char a,b)//����ܺ���
{
	
	  P0 = 0xff; //�ڽ���λѡ��ʱ���ȹر�������ʾ����ֹ��λѡʱ��P0�ڻ�����ԭ�������� ����Ӱ��
		WE = 1;  //��λ������
		P0=WEI[a-1];//ָ���ĸ������	
		WE = 0;  //�ر�λ������
	  DU = 1;  //�򿪶�������
		P0 = table[b];//��ʾ�Ǹ����� 
		delay(1); //��ʱ
	
}
void main()
{
	nixie(1,1);
	nixie(2,2);
	nixie(3,3);
	nixie(4,4);
	nixie(5,5);
	nixie(6,6);
}