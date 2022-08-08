/*
Why use structure?
In C, there are cases where we need to store multiple attributes of an entity. It is not necessary that an entity has all the information of one type only. It can have different attributes of different data types. For example, an entity Student may have its name (string), roll number (int), marks (float). To store such type of information regarding an entity student, we have the following approaches:

1)Construct individual arrays for storing names, roll numbers, and marks.
2)Use a special data structure to store the collection of different data types.
*/
// Let's look at the first approach in detail. with array
#include <stdio.h>
  // hare i am not using structure
void main()
{
    char name[3][10], dummy;
    int i, id[2];//array name is id like( int marks[5];//declaration of array )
    float marks[3];//array name is marks
    for (i = 0; i < 3; i++)
    {
        printf("enter student name ,id and marks =%d\n", i + 1);
        scanf("%s %d %f", &name[i], &id[i], &marks[i]);
        scanf("%c", &dummy);// enter will be stored into dummy character at each iteration (if i am not using that then my firstr name will not printing but after that all will be printed everything)
    }
    printf("printing student detail=\n");
    for ( i = 0; i < 3; i++)
    {
      printf("%s %d %f", name[i], id[i], marks[i]);
      printf("\n");
    }
    
}
