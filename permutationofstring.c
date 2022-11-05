//program to print all permutaion of a string
#include<stdio.h>
#include<string.h>
void swap(char *x, char *y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void permutation(char *s, int i, int n)
{
    static int count;
    int j;
if(i==n)
{
count++;
printf("(%d)%s",count,s);
}
else
{
    for(j=i;j<=n;j++)
    {
        swap((s+i),(s+j));
        permutation(s,i+1,n);
        swap((s+i),(s+j));
    }
}
}
int main()
{
    char s[10];
    printf("Enter the string");
    gets(s);
    permutation(s,0,strlen(s)-1);
    return 0;
}
