
#include <stdio.h>
int main()
{
    int x=89;  // variable declaration.
    double i=78.0; //variable initialization.
    float j=6.78; //variable initialization.
    printf("\nsize of the variable x is %d", sizeof(x));  // Displaying the size of ?x? variable.
    printf("\nsize of the integer data type is %d",sizeof(int)); //Displaying the size of integer data type.
    printf("\nsize of the character data type is %d",sizeof(char)); //Displaying the size of character data type.  //Displaying the size of floating data type.
    printf("\nsize of the double data type is %d",sizeof(double));
    printf("\nsize of the floating data type is %d",sizeof(float));
    printf("\nsize of (x+j) expression is : %d",sizeof(x+j)); //Displaying the size of the expression (i+j).
    printf("\nsize of (i+j) expression is : %d",sizeof(i+j));
return 0;
}
