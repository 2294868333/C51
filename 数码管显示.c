#include <reg51.h>
#include <intrins.h>
#define uchar unsigned char
#define uint unsigned int
uint i,j,t;
uchar code  table[] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90,0x88,0x83,0xc6,0xa1,0x86,0x8e};
sbit duan = P2^6;
sbit wei = P2^7;
void delay(t)
{
	while(t != 0)
	{
		for( i = 100 ; i>0 ; i--)
			for( j = 1150 ; j>0 ; j--);
	}
}


void main()
{
	  	duan = 1;
		P0 = 0x06;	  // 0000 0110			
		duan = 0;

		wei = 1;
		P0 = 0xfe;	  // 1111 1110
		wei = 0;

	    while(1);
}
