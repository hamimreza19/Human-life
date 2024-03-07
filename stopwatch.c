#include<stdio.h>

int main()
{
  int h,m,s;
  int d=1;
  printf("Enter clock : ");
  scanf("%d %d %d",&h,&m,&s);
  if(h>12 || m>60 || s>60) {
    printf("Invalid time");
    exit(0);
  }
   while(1){
        s++;
    if(s>59){
        m++;
        s=0;
    }
    if(m>59){
        h++;
        m=0;
    }
    if(h>12){
        h=1;
    }
    printf("\n Clock : ");
   printf("\n %02d:%02d:%02d",h,m,s);
   Sleep(d);
   system("cls");
   }

   return 0;

}
