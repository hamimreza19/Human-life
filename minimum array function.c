#include<stdio.h>

int  minimum(int x[])
{
   int i;
   int min = x[0];
  for(i=0;i<5;i++){
    if(min>x[i]){
        min = x[i];
    }
  }
  return min;
}

int main()
{
  int num[]={-46,24,43,-45,67};
int minimumValue = minimum(num);
printf("minimumValue = %d ",minimumValue);
}

