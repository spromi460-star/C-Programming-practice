//Function Subsraction
#include<stdio.h>
int substract(int a, int b)
{
    return a-b;
}
int main()
{
    int a,b, result;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    result=substract(a,b);
    printf("Substraction=%d\n",result);
    return 0;
}
