#include<stdio.h>

int fibo(int n)
   {
      if(n==0 || n==1)
      return n;
      else
        return fibo(n-1)+fibo(n-2);
      //return fibo(n)+fibo(n-1);

   }

int main()

{
    int i, n, t1=0, t2=1, sum;
    printf("Enter the number of  n ");
    scanf("%d", n);
    printf("%d", fibo(n));
    /*printf("%d %d", t1, t2);
    for(i=2;i,n;i++);
    {
        sum = t1+ t2;
        printf("%d", sum);
        t1 = t2;
        t2 = sum;*/

    }

    return 0;


}
