#include <stdio.h>

int main()
{
   int i, num,count=0;

   scanf("%d",&num);

   for(i=2;i<num;i++)
   {
   if(num%i==0)
        {
             count++;
             break;
        }
   }
    if (count==0)
   printf("%d is prime number\n",num);
   else
   printf("%d is  not prime number\n", num);


    return 0;
}
