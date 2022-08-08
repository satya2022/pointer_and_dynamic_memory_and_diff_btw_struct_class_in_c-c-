/*
Array of Structures in C
An array of structres in C
can be defined as the collection of multiple structures variables where each variable contains information about different entities. The array of structures in C
are used to store information about multiple entities of different data types. The array of structures is also known as the collection of structures.
*/
#include <stdio.h>
#include <string.h>
struct student{
int roolno;
char name[20];
};
void main(){
    struct student st[5];
    for(int i=0; i<5;i++){
        printf("enter student%d roolno and name\n",i);
        scanf("%d%s",&st[i].roolno,st[i].name);
    }
    for(int i=0; i<5;i++){
        printf("\n");
        printf("printing student%d roolno and name\n",i);
        printf("\n");
        printf("%d%s",st[i].roolno,st[i].name);
    }
}