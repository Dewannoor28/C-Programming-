#include <stdio.h>
int main()
{
    int a=1;
    int b=2;
    int *const ptr=&a;
    //ptr=&a;
    //ptr=b;
    printf("Value of ptr is :%d ",*ptr);
    return 0;
}
