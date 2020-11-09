#include<reg51.h>
#include<intrins.h>
#define uchar unsigned char
#define uint unsigned int
uint i , j , t;
uchar k;
void delay(uint t)	//定义 t 秒延时函数
{	
	 	while(t != 0)
		{
			for(i = 100 ; i>0 ; i--)
				for(j = 1150 ; j>0 ; j--);
				t--;
		}
}

void main()
{
	k = 0xfe;//1111 1110
	while(1)
	{
		uchar temp;
		temp = _crol_(k , 1);		//  temp = 1111 1101  /----- temp = 1111 1011
		P1 = temp;					// P1 = 0xfd	    -		  P1 = 0x
		k = temp;					// k = 0xfd	  ----/
		delay(1);
	}
}