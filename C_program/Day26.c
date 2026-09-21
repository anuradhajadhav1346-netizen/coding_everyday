#include<stdio.h>
struct student{
    int roll;
    char name[50];
    float per;
};
int main()
{
    struct student s1;
    printf("Enter student information : \n");
    printf("Enter roll number : \n");
    scanf("%d",&s1.roll);
    printf("Enter student name : \n");
    scanf("%s",&s1.name);
    printf("Enter student persentage :\n");
    scanf("%f",&s1.per);
    printf("Student info. added successfully..\n");
    printf("Student info. as \n");
    printf("Student roll number : %d\n",s1.roll);
    printf("Student name : %s\n",s1.name);
    printf("Student percentage : %f\n",s1.per);
}