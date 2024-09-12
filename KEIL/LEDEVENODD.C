#include<REGX51.H>
void main(void)
{
    unsigned int i; 
    P1 = 0x05;      

    while(1)        
    {
        P1 = 0x05;  
        for(i = 1; i < 40000; i++); 

        P1 = 0x0A;  
        for(i = 1; i < 40000; i++); 
    }
}
