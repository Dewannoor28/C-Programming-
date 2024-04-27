#include<stdio.h>
#include<conio.h>
#include<window.h>
#include<stdlib.h>
#include<string.h>

COORD coord=(0,0);

void gotoxy(int x, int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(SID_OUTPUT_HANDLE),cord);
}
int main()
{
    FILE *fp, *ft;
    char another, choice;

    struct emp
    {
        char name [40];
        int age;
        float salery;
    };
    struct empe;

    char empname [40];
    long int resize;
}
{
    fp=fopen("EMP.DAT","rb+");
    if(fp ==NULL)
    {
        printf("Connot open file");
        exit(1);
    }
}

resize=sizeof(e);

while (1)

{

    system("cls");
    gotoxy (30, 10);
    printf("1. Add record");
    gotoxy (30, 12);
    Record");
    printf("2. List Records");
    gotoxy(30, 14);
    printf("3. Modify Records");
    gotoxy (30,16);
    printf("4. Delete Records");
    gotoxy (30,18);
    printf("5. Exit");
    gotoxy (30, 20);
    printf("Your Choice: ");
    fflush(stdin);
    choice = getche();

}
switch(choice)
{
case '1':
    system("cls");
    fseek (fp, 0, SEEK_END);
    another = 'y';
    while (another =='y')
    {
        printf("\nEnter name: ");
        scanf("%s",e.name);
        printf("\nEnter age: ");
        scanf("%d", &e.age);
        printf("\nEnter basic salary: scanf("%f", &e.bs);

               fwrite(&e, recsize, 1, fp);

               printf("\nAdd another record(y/n) ");
               fflush(stdin);
               another getche();
    }
