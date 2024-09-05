
#include <stdio.h>


struct basicsOfStrcture
{
    char name[20];
    int rollno;
    int marks[4];
};

int main(void)
{

    int i ;
    struct basicsOfStrcture student[3];
    for(i = 0; i < 3; i++)
    {
        printf("\n enter the details of the student : %d\n  ",i+1);
        printf("Enter the name of student : ");
        scanf("%s",student[i].name);
        printf("enter the roll no : ");
        scanf("%d",&student[i].rollno);
    }
    for(i = 0; i < 3; i++)
    {
        printf("\n the details of the student : %d\n  ",i+1);
        printf(" name of student : %s ",student[i].name);
   
    }
    return 0;
}



