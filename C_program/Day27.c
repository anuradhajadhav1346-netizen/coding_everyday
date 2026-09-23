#include<stdio.h>
struct student 
{
    int roll;
    char name[20];
    float per;
};
void acceptstudent(struct student s[],int size);
void printstudent(struct student s[],int size);

int main()
{
    int n;
    printf("How many stdent's info you wnat to enter : ");
    scanf("%d",&n);
    struct student s[n];
    acceptstudent(s,n);
    printstudent(s,n);
    return 0;
}

void acceptstudent(struct student s[],int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("\n Enter details of student %d : \n",i+1);
        printf("Enter Roll Number:");
        scanf("%d",&s[i].roll);
        printf("Enter name :\n");
        scanf("%s",&s[i],name);
        printf("Enter percentage :");
        scanf("%f",&s[i]..per);
    }
}

void printstudent(struct student s[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("Student roll number: %d\n",s[i].roll);
        printf("Student name : %s\n",s[i].name);
        printf("Stuudent percentage : %.2f\n",s[i],per);
    }
}