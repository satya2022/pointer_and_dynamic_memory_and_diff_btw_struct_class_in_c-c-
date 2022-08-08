#include <stdio.h>
#include <stdlib.h>
struct employee{
  int id;
  char name[100];
  float salary;
};
void main(){

struct employee *temp;
int i;
temp=(struct employee *)malloc(sizeof(struct employee));
printf("enter id,enter name,enter salary");
scanf("%d %s %f", &temp->id,&temp->name, &temp->salary);
printf("id=%d name=%s salary=%f",temp->id,temp->name,temp->salary);
}