#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the size of column");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
         for(j=1; j<=n; j++)


       {
            if(i==j)

       {
            printf("* ");
        }

        else
            printf("0 ");
       }


      printf("\n");
    }

    return 0;

}
