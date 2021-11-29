#include<stdio.h>
struct STUDENT
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    int i;
    struct STUDENT s[5];

    for(i=0;i<5;i++)
    {
        printf("Enter your name rollno and marks\n");
        scanf("%s%d%f",&s[i].name,&s[i].roll_no,&s[i].marks);
    }
    for(i=0;i<5;i++)
    {
        printf("name %s \n rollno %d \n  marks %f \n",s[i].name,s[i].roll_no,s[i].marks);
    }

    return 0;
}