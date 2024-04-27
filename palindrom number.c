#include<stdio.h>
int main()
{
    int n,r,sum=0,t;
    printf("Enter The Number :");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("sum=%d\n",sum);

    if(sum==t)
    {
        printf("%d is a palindrome ",t);

    }
    else{
        printf("%d is not a palindrome",t);
    }

    return 0;
}

