#include<reg52.H>

sbit LED = P2^0;

void Delay(void);

void main(void)
{
	while(1)
		{
			LED = 0;
			Delay();
			LED = 1;
			Delay();
		}	
}		

void Delay(void)
{
	int j;
	int i;
	for(i=0; i<10; i++)
	{
		for(j=0; j<10000; j++)
		{
		}
	}
}
// //////////////////
#include<reg51.h>
void delay(unsigned int time)
{
	unsigned int i,j;
	for(i=0;i<time;i++)
	{
		for(j=0;j<23;j++)
		{
		}
	}
	
}
int main(void){
	
	P2=0xAA;
	delay(1000);
	P2=0x55;
	delay(1000);
	
	
}