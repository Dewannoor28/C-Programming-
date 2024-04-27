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

    for(i=0;i<n;i++);
    {
       printf("%d", fibo(i)) ;
    }

    return 0;


}

