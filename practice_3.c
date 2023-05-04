#include<stdio.h>
void count_odd(int B[], int m)
{
    int i,c=0;
    for(i=0;i<m;i++)
    {
        if(B[i] %2 != 0)
        {
            c++;
        }
    }
    printf("%d",c);
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
    count_odd(A,n);
}