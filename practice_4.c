#include<stdio.h>
void change(int *B, int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        if(i == m-1)
        {
            B[i] = 100;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    change(A,n);
   for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
   
}