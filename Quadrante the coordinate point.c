#include<stdio.h>
int main ()

{
    float  x,y;

    {
        printf("Enter The coordinate point :");
        scanf("%f%f",&x,&y);

        if(x==0 && y==0)
        {
            printf("The coordinate point  lies 0n the origin.\n",x,y);
        }
        else if(y==0 && x>0)
        {
            printf("The coordinate point lies on the positive x axis\n",x,y);
        }
        else if(x==0 && y>0)
        {
            printf("The coordinate point lies on the positive y axis\n",x,y);
        }
        else if(y==0 && x<0)
        {
            printf("The coordinate point lies on the negative x axis.\n",x,y);
        }


        else if(x==0 && y<0)
        {
            printf("The coordinate point lies on the negative y axis.\n",x,y);
        }

        else if(x >0 && y>0)

        {
            printf("The coordinate point lies on the First Quadrant.\n",x,y);
        }

        else if(x <0 && y>0)

        {
            printf("The coordinate point lies on the Second Quadrant.\n",x,y);
        }


        else if(x <0 && y<0)

        {
            printf("The coordinate point lies on the Third Quadrant.\n",x,y);
        }


         else if(x >0 && y<0)

        {
            printf("The coordinate point lies on the Fourth Quadrant.\n",x,y);
        }


    }

    return 0;
}

