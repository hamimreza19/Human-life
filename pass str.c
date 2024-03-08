#include<stdio.h>
void display(char s1[])
{
    int i;
    while(s1[i]!='\0'){
        printf("%c\n",s1[i]);
        i++;
    }
}

int main()
{
 char string [] ="HamimBatman";
 display(string);

}
