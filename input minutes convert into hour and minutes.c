#include<stdio.h>
int main ()

{
    int h,m,tm,th;
    int mAnh = 60;


    printf("Enter minutes");
    scanf("%d",&m);

    tm = m +(h*mAnh);

    printf("Minutes Are : %d",tm);
    printf("Hours Are : %d",th);



    return 0;


}
