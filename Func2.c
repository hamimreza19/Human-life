#include<stdio.h>

int main()
{
    int result = sum(5,6);
    printf("The Sum is : %d\n",result);
    result = sum(15,5);
    printf("The Sum is : %d\n",result);
    result = sub(15,5);
    printf("The Subtraction is : %d\n",result);
    result = mul(15,6);
    printf("The Multiplication is : %d\n",result);
    result = div(15,6);
    printf("The Division is : %d\n",result);
    result = mod(15,6);
    printf("The Modulus is : %d\n",result);
    int num;
    printf("Enter an integer number : ");
    scanf("%d",&num);
    result = square(num);
    printf("Square is : %d\n",result);

}
int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int mod(int a,int b)
{
    return a%b;
}
int square(int a)
{
    return a*a;
}
