#include<stdio.h>
int fib(int n)
{
    if(n==1 || n==2)
    return 1;
    else if(n<1)
    return 0;
    else return fib(n-1)+fib(n-2);
}
int main()
{
    int n,i;
    printf("\n Enter the number upto you want to print fib.. series");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d\t",fib(i));
    return 0;
}
