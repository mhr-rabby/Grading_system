#include<stdio.h>

int main()
{
    char course1[20], course2[20], course3[20], course4[20], course5[20];
    float s1, s2, s3, s4, s5, per;

    printf("Enter the name of 5 subjects:\n");
    scanf("%s %s %s %s %s", course1, course2, course3, course4, course5);

    printf("Enter marks for %s, %s, %s, %s, %s:\n", course1, course2, course3, course4, course5);
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    per = (s1 + s2 + s3 + s4 + s5) / 5.0;

    if (per >= 80 && per <= 100)
    {
        printf("Grade A+\n");
    }
    else if (per >= 75 && per <= 79)
    {
        printf("Grade A\n");
    }
    else if (per >= 70 && per <= 74)
    {
        printf("Grade A-\n");
    }
    else if (per >= 65 && per <= 69)
    {
        printf("Grade B+\n");
    }
    else if (per >= 60 && per <= 64)
    {
        printf("Grade B\n");
    }
    else if (per >= 55 && per <= 59)
    {
        printf("Grade B-\n");
    }
    else if (per >= 50 && per <= 54)
    {
        printf("Grade C+\n");
    }
    else if (per >= 45 && per <= 49)
    {
        printf("Grade C\n");
    }
    else if (per >= 40 && per <= 44)
    {
        printf("Grade D\n");
    }
    else if (per >= 0 && per <= 39)
    {
        printf("Grade F\n");
    }
    else
    {
        printf("Invalid marks entered!\n");
    }

    return 0;
}
