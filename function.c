#include<stdio.h>
void matrix(int n);
int main()
{
    int n;
    printf("Enter the size of column");
    scanf("%d",&n);
   matrix(n);
    return 0;
}
void matrix(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
         for(j=1; j<=n; j++)
       {
            if((i=j)||((i+j)=(n+1)))
       {
            printf("* ");
        }

        else
            printf(" ");
       }

      printf("\n");
    }
}
