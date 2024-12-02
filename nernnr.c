#include<stdio.h>

struct student {
    char name[50];
    int roll;
    int age;
    char email[50];
    float marks[5];
    float per;
}s[10];

int main() {

    struct student ;
    int sum = 0;

    for(int x=0;x<=5;x++){

    printf("\n\nEnter details for student %d :\n",x+1);

    printf("Name: ");
    scanf("%s", s[x].name);

    printf("Roll number: ");
    scanf("%d", &s[x].roll);

    printf("Age: ");
    scanf("%d", &s[x].age);

    printf("Email: ");
    scanf("%s",s[x].email);

    printf("Enter 5 marks for the student:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &s[x].marks[i]);
        sum += s[x].marks[i];
    }

    s[x].per = sum / 5;

    printf("\n\tStudent %d Details:\n",x+1);
    printf("Name: %s\n", s[x].name);
    printf("Roll number: %d\n", s[x].roll);
    printf("Age: %d\n", s[x].age);
    printf("Email: %s\n", s[x].email);


    printf("Marks: ");
    for (int i = 0; i < 5; i++) {
    }


    printf("\nTotal Marks: %d\n", sum);
    printf("Percentage: %.2f%%\n", s[x].per);
    }

    return 0;
}

