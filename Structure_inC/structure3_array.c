/*
Why use an array of structures?
Consider a case, where we need to store the data of 5 students. We can store it by using the structure as given below.
*/
#include <stdio.h>
struct Student{
int id;
float salary;
char name[100];
};
void main(){
    struct Student s1,s2,s3;
    int dummy;
    printf("enter student id,salary,name\n"); 
    scanf("%d %f %s",&s1.id,&s1.salary,s1.name);// how we taking  the string? scanf("%s",s);  same thing hare
    // scanf("%c",&dummy);
    printf("\n");

    printf("enter student id,salary,name 2");
    scanf("%d %f %s",&s2.id,&s2.salary,s2.name);
    scanf("%c",&dummy);
    printf("\n");

    printf("enter student id,salary,name 3");
    scanf("%d %f %s",&s3.id,&s3.salary,s3.name);
    scanf("%c",&dummy);

printf("\n");
printf("printing all id and salary and name");
    printf("\n");
 printf("%d %f %s",s1.id,s1.salary,s1.name);
    printf("\n");
 printf("%d %f %s",s2.id,s2.salary,s2.name);
    printf("\n");
 printf("%d %f %s",s3.id,s3.salary,s3.name);

}