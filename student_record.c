#include<stdio.h>
int main()
{
    int rollno,marks;
    char name[50];
     
    printf("Enter student name:");
    scanf("%s",name);

    printf("enter roll number:");
    scanf("%d", &rollno);

    printf("Enter Marks:");
    scanf("%d", &marks);

    printf("\n--- Student Details---\n");
    printf("Name: %s\n",name);
    printf("Roll no: %d\n",rollno);
    printf("Marks: %d\n",marks);

    return 0;
}