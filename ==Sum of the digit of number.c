#include<stdio.h>
int sum(int n)
{

    if(n==0)
        return (0);
    else
        return(n%10 + sum(n/10) );
}
int main()
{
    int n,count;
    printf("Enter a number: ");
    scanf("%d",&n);
    count=sum(n);
 printf("The number of digits %d",count);

}
