#include<stdio.h>
#include<math.h>
void main()
{
    int n,sum=0,x=5,i;
    printf("Enter any number");
    scanf("%d",&n);
    if(n%2==0)

            {
                printf("%d is  even",n);

            }
    else
                {
                    //printf("%d is not even",n);
                     for(i=1; i<=n; i=i+2)

    {
        sum = sum+pow(x,i);
    }
    printf("%d",sum);

                }

    //printf("%d",sum);

}
