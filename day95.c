#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student s[], int n)
{
    int i, max = 0;

    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    return s[max];
}

int main()
{
    struct Student s[3], top;
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    top = findTopStudent(s, 3);

    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}