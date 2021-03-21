#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
void delay(unsigned char ms)
{         
  unsigned char i;    
  while(ms--)   
  {      
    for(i=0;i<250;i++);  
  } }
int main()
{
  int start = clock();
  unsigned char test = '1';
  delay(test);
  int end = clock();
  printf("%f",end - start);


  return 0;
}
