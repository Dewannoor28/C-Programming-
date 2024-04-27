#include<stdio.h>
int main ()


{
    int m,n;
    //bitwise
     scanf(" %d %d", &m, &n);
     printf(" and = %d\n",m & n);
     printf(" xor = %d\n",m ^ n);
     printf(" or = %d\n",m | n);
     printf(" left shift = %d\n",m << n);
     printf(" right shift = %d\n",m >> n);
     //relational
    if (m > n)
        printf(" m=%d is greater than n=%d \n");
    if (m >= n)
        printf(" m=%d is greater than  equal  n=%d \n");
    if (m < n)
        printf(" m=%d is less than n=%d \n");
    if (m <= n)
        printf(" m=%d is less than equal n=%d \n");
        //logical
   /* if (m > n && n == 0 )
        printf(" m=%d is greater than n=%d \n");
    if (m < n && n == 0 )
        printf(" m=%d is greater than n=%d \n");
    if (m > n || n == 0 )
        printf(" m=%d is greater than n=%d \n");
    if (m < n || n == 0 )
        printf(" m=%d is greater than n=%d \n");
    if (m > n ^^ n == 0 )
        printf(" m=%d is greater than n=%d \n");
    if (m < n ^^ n == 0 )
        printf(" m=%d is greater than n=%d \n");*/

   //conditonal expression
    ( m > n ) ? (printf(" %d is greater than %d ", m, n)) : (printf(" %d is not  greater than %d", m, n ));
return 0;
}
