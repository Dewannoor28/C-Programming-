int main()
{
    int r,s,d,n,x;
    scanf("%d %d",&r,&s);
    d= r | s;
    n= r & s;
    x= r ^ s;
    printf("or =%d\n and=%d\n xor=%d\n",d, n, x );
    return 0;
}
