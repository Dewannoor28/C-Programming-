#include<stdio.h>
int main()

{

    int n,sum,start,diff,end;
    scanf("%d%d%d",&start,&diff,&end);

    for(n=start,sum=0;n<=end;n=n+diff)
{
     sum=sum+n;
}

    printf("%d\n",sum);
    return 0;
}
