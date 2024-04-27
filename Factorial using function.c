#include <stdio.h>
int fact(int n)
{
  int fact=1,i;
  for(i=1;i<=n;i++)
  {
      fact=fact*i;

  }
  //printf("factorial : %d = %d\n", n, fact);
  return fact;
}

int main()
{

    int n,f;
    scanf("%d",&n);
    f=fact(n);
    printf("factorial : %d = %d\n", n, f);

   // printf("Hello World");

    return 0;
}
