#include<stdio.h>
int swap(int *a,int *b)
{
    int r;
    //int a=100,b=200;
    r=*a;
    *a=*b;*b=r;
    printf("In the function ,The value of a & b after swaping %d %d\n",*a,*b);
}
int main()
{
int a=100,b=200;
printf("The value of a & b before swaping %d %d\n",a,b);
swap(&a,&b);
printf("The value of a & b after swaping %d %d",a,b);
return 0;
}
