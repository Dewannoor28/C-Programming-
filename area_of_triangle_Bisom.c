
#include<stdio.h>
int main()
{

    int a,b,c;
    float area,s;

    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f",area);



}
