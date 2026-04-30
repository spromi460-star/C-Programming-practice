//C program to print numbers in Ascending order
#include<stdio.h>
void PrintAscending(int n)
{
    if(n==0)
        return ;
    PrintAscending(n-1);
    printf("%d\n",n);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Numbers from 1 to %d:\n",n);
    PrintAscending(n);
    return 0;
}
