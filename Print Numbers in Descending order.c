//C program to print numbers in Descending order
#include<stdio.h>
void PrintDescending(int n)
{
    if(n==0)
        return ;
    printf("%d\n\t\t\t",n);
    PrintDescending(n-1);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Numbers from 1 to %d:\t",n);
    PrintDescending(n);
    return 0;
}
