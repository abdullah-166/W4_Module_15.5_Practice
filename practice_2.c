#include<stdio.h>
#include<string.h>
void my_len(char m[],int p)
{
    int c=0;
    printf("%s\n",m);
    int i;
    for(i=0;i<p-1;i++)
    {
        c++;
    }
    printf("%d",c);
}
int main()
{
    int n;
    scanf("%d",&n);
    char name[n];
    scanf("%s",name);
    my_len(name,n);
}