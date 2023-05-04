#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int d = a;
    int e = b;
    int f = c;
    if (a > b) 
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) 
    {
        int temp = a;
       a  = b;
        b = temp;
    }
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n\n\n",f);
    return 0;
}
