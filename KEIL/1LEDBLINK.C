#include<REGX51.H>
void main(void)
{
	unsigned int i;
	P1=0X00;
	while(1)
	{
		P1=0X01;
		for(i=1;i<40000;i++);
		P1=0X00;
		for(i=1;i<40000;i++);
	}
}