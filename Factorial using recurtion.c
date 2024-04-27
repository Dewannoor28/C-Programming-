#include <stdio.h>
int fact(int n)
{
  if(n==0)
  return 1;
  else if(n==1)
  return 1;
  else
  return n*fact(n-1);

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
