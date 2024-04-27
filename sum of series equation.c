#include<stdio.h>
int main ()

{
    float p,x;
    printf("Enter the power of e\n");
    scanf("%f",&p);
    int acc=4;
    float ans = 1;
    float temp=1;
    int i;
    for(i=1;i<=acc;i++)
    {
        temp = (temp*x)/i;
        ans= ans+temp;
    }
printf("%f",ans);

}
