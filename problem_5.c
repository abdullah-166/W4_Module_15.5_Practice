#include<stdio.h>
void swap_it(int *c, int *d)
{
   //printf("%d %d\n",*c,*d);
   int t=0;
   t=*c;
   *c=*d;
   *d=t;
   int *f=*c;
   int *g=*d;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before Swapping:\n");
    printf("A = %d\nB = %d\n",a,b);
    swap_it(&a,&b);
    printf("After Swapping:\n");
    printf("A = %d\nB = %d\n",a,b);
}