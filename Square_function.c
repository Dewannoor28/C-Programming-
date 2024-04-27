#include<stdio.h>

int square(int x)

{
    int y;
    y=x*x;
    return y;
}

int main()
{
    int a, sq;
    scanf("%d",&a);
    sq=square(a);

    printf("%d\n",sq);


    return 0;

}
