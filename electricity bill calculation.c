#include<stdio.h>
int main ()

{
    float u,s=0,c;
    scanf("%f",&u);
    if(u>=0 && u<=200)

    {
        a=u*0.50;
        printf("%f\n",charge);
    }
else if (u>=201 && u<=400)
{

    s=100+((u-200)*0.65);
    printf("%f\n",c);
}

else if(u>=401 && u<=600)
{

    s=230+((u-400)*0.80);
    printf("%f\n",c);
}
 else if (u>=601)
{
    s=390+((u-600)*1.00);
    printf("%f\n",c);
}

return 0;
}
