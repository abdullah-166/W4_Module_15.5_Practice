#include<stdio.h>
int main()
{
    int n;
    int i;
    scanf("%d",&n);
     for(i=1;i<=n;i++)
    {
        printf("%d",i);
        if(i==n)
        {
            break;
        }
        printf(" ");
    }
    return 0;
}