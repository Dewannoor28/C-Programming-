#include <stdio.h>

int main()
{
    int r,s,d,n,x;
    scanf("%d %d",&r,&s);
    d= r | s;
    n= r & s;
    x= r ^ s;

    printf(" or =%d\n and=%d\n xor=%d\n",d, n, x );
    d= r >> s ;
    n = r << s ;
    printf(" right shift =%d\n left shift=%d\n",d,n);
    ( r > s ) ?  printf(" %d is greater than %d ", r, s) : printf(" %d is greater than %d", s, r );
    return 0;
}
