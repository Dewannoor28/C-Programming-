#include<stdio.h>

int minimun(int a, int b)
{
    int temp;
    if (a>b)
{
    temp=a;
}
     else
     {
         temp=b;
     }

        return temp;
}


int main()


{
    int a,b,c;
    int t1,t2;

    scanf("%d%d%d",&a,&b,&c);
    t1=minimun(a,b);
    t2=minimun(t1,c);

    printf("%d\n");


    return 0;




}


