#include<stdio.h>
int main()

{
    int i, n, t1, t2, sum;
    printf("Enter the number of  n ");
    scanf("%d", n);
    printf("%d %d", t1, t2);
    for(i=2;i<n;i++);
    {
        sum = t1+ t2;
        printf("%d", sum);
        t1 = t2;
        t2 = sum;

    }

    return 0;


}
