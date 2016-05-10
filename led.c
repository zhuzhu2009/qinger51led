#include "stc15fxxxx.h"
#include "intrins.h"

void Delay500ms();		//@11.0592MHz

int main()
{
	P6M1 &=(~0x0C);
	P6M0 |= (0x0C);
	P62 = 1;
	P63 = 0;
  while(1)
  {
    P62 = ~P62;
    P63 = ~P63;
		Delay500ms();
	}
	return 0;
}
void Delay500ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 22;
	j = 3;
	k = 227;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}
