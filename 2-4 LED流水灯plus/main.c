#include <REGX52.H>
#include <INTRINS.H>

void Delay(unsigned int xms)	//@11.0592MHz
{
	unsigned char data i, j;

	while (xms)
	{
		_nop_();
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
}

void main()
{
	while (1)
	{
		P2 = 0xFE;
		Delay(500);
		P2 = 0xFD;
		Delay(500);
		P2 = 0xFB;
		Delay(500);
		P2 = 0xF7;
        Delay(500);
		P2 = 0xEF;
		Delay(500);
		P2 = 0xDF;
		Delay(500);
		P2 = 0xBF;
		Delay(500);
		P2 = 0x7F;
		Delay(500);
	}
}