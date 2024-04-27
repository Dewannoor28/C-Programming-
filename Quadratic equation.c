#include<stdio.h>
#include<math.h>

int main()

{
    float a,b,c;
    float r1,r2;
    float p1,p2;

    printf("Enter the value a,b,c\n");
    scanf("%f %f %f",&a,&b,&c);


    p1 = sqrt(b*b-4*a*c);
    p2 = 2*a;


    r1 = (-b+p1) / p2;
    r2 = (-b-p1) / p2;
    printf("r1 =0.2%f,r2 =0.2%f", r1,r2);
    return 0;





}
