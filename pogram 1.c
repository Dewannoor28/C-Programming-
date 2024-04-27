#include<stdio.h>
int value=20; //global variable which is declared at the start of the block
//void function1() // void er por main kno likhi??
void main()
{


     int x=10;//local variable  which is declared inside the function or at the first block
     static int y=10;//static variable which is declared  between multiple functions
     x=x+1;
     y=y+1;
     scanf("%d,%d",&x,&y);
     printf("%d,%d",x,y);
}



// is global variable is local varaable ???
// diffrent between local and static variable is local variable input the same variiable and
//static variable input periodic sequience
