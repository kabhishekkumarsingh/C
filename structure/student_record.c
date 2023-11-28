
#include <stdio.h>
struct student{
    char name[50];
    int roll_No;
    int class;
    
};

int main()
{
    struct student s1;
printf("Enter student name:");
gets(s1.name);
printf("Enter roll No:");
scanf("%d",&s1.roll_No);
printf("Enter class:");
scanf("%d",&s1.class);

printf("Name = %s",s1.name);
printf("\nroll No = %d",s1.roll_No);
printf("\nClass = %d",s1.class);
    return 0;
}
