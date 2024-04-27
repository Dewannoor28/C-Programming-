int main()
{


   int i, num1,num2,count=0;

   scanf("%d %d",&num1,&num2);

   for(i=2;i<num1;i++)
   {
   if(num1%i==0)
        {
             count++;
             break;
        }
   }
    if (count==0)
   printf("%d is prime number\n",num1);
   else
   printf("%d is  not prime number\n", num1);







     for(i=2;i<num2;i++)
   {
   if(num2%i==0)
        {
             count++;
             break;
        }
   }
    if (count==0)
   printf("%d is prime number\n",num2);
   else
   printf("%d is  not prime number\n", num2);

    return 0;


}
