#include<stdio.h>
int digit(int n)
{
   static int counter=0;
    if(n>0){

        counter=counter+1;
        return digit(n/10);
}

    else
        return counter;
}
int main()
{
    int n,count;
    printf("Enter a number: ");
    scanf("%d",&n);
    count=digit(n);
    printf("The number of digits %d",count);

}
