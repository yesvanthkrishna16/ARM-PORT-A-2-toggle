#include<stm32f10x.h>
void delay_ms(unit16_t t); //initilizing a function
void delay_ms(unit16_t t)//delay function for 72 MHz ARM  controller 
{
  volatile unsigned long l=0;
  for(uint16_t i=0;i<=t;i++)
    {
      for(l=0;l<6000;l++)
        {
        }
    }
}
int main()
{
  RCC->APB2ENR |=0xFC; //ENABLE THE CLOCK FOR THE GPIO PINS
  GPIOA->CRL = 0x44444344; //PA0 TO PA7 AS input and PA2 as ouput
  while(1)
    {
       GPIOA-> ODR^=(1<<2);//toggle PORT A2
      delay_ms(1000);//dely for 100ms
    }
}
