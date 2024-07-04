#include<reg51.H>

void Delay(void);

void main(void)
{
	while(1)
		{
			P1 = 0xFF; // Make all bits of P1 high
			Delay();
			P1 = 0x00; // Make all bits of P1 low
			Delay();
		}
}

void Delay(void)
{
	int j;
	int i;
	for(i=0; i< 1000; i++)
	{
	}
	for(j=0; j< 1000; j++)
	{
	}
}
// /////// or
#include<reg51.h>
void Delay(unsigned int time);
void main(void)
	{
		while(1) 
		{
			P2 = P1;
			Delay(1000);
		}
	}
void Delay(unsigned int time)
	{
		unsigned int i,j;
		for(i=0; i<time; i++)
		{
			for(j=0; j<23; j++)
			{
			}
		}
	}