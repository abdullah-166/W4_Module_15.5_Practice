#include<stdio.h>
int abs(int p)
{
    int q;
    if(p<0)
    {
        q = -(p);
    }
    else
    {
        q = p;
    }
    return q;
}
int main()
{
    int n;
    scanf("%d",&n);
    int r = abs(n);
    printf("%d",r);
    return 0;
}