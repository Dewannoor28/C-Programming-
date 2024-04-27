#include<stdio.h>
double main ()
{
    char s[11] = "javatpoint";
    int i = 0,count = 0;
    for(; ; i++)
   {
       if(s[i]==NULL)
        break;


        if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
        {
            count ++;
        }
   }
    printf("The number of vowels %d",count);
    return 0;
}
