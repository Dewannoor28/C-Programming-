#include <stdio.h>
//int a;
void noor(int a, int id){
    printf(" \n");
    if(id==28)
    printf("Noor: ");
    else if(id==12)
    printf("SUmaiya: ");
    else
    printf("Sraboni: ");
    //scanf("%d", &a);
    int i,temp=0;
    for(i=2;i<a;i++)
    {

        if (a%i!=0)
        temp++;
       //printf("Prime number");

        else
        {
            printf("not prime number");
            temp=0;
            break;
        }


    }

if(temp!=0)
printf("Prime number");
}
void main(){

    noor(28, 28);
    noor(11, 11);
    noor(12, 12);

}
