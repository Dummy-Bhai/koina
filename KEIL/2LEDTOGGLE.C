#include<REGX51.H>

void main(void)
{
  unsigned int i;
  P1=0x01;
  P2=0x01;
  while(1)
  {
	  P1=0x00;
	  P2=0x01;
	  for(i=1;i<=4000;i++);
	  P1=0x01;
	  P2=0x00;
	  for(i=1;i<=4000;i++);
  }

}
