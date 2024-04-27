#include <stdio.h>

int main()
{
   int i,j,k,l;

   for(i=0;i<100;i+=2);
   {
       for(j=0;j<i;j++);
       {

           for(k=0;k<j;k++);
           {

               for(l=0;l<k;l++);

               {
                   printf("*\n");

               }
               break;
               printf(" \n");
           }

           printf("\n");
       }

       printf("Noor\n");
   }
 printf("*\n");
    return 0;
}
