#include <REGX51.H>
void main(void)
{
unsigned int numbers[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6d,0x7D,0x07,0x7F,0x67};
unsigned int i,k;
P2=0x00;
while(1)
{
for(i=0;i<=9;i++)
{
P2=numbers[i];
for(k=1;k<40000;k++);
}
}
}
