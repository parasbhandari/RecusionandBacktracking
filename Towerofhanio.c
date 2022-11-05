#include<stdio.h>
void TOH(int n,int s, int a, int d)
{
    if(n>=1)
    {
        TOH(n-1,s,d,a);
        printf("\n move disk from %d to %d",s,d);
        TOH(n-1,a,s,d);
    }
}
int main()
{
   TOH(3,1,2,3);
}
