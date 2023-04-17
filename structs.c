#include <stdio.h>
#include <string.h>

/*
typedef is used to give aliases
eg. typedef int Student=> we are giving int the alias of Student therefore we can do this:
Student age = 50;
*/
typedef struct{
    char name[50];
    char id[10];
    int age;
    int grades[5];
} Student;

typedef struct {
    int x;
    int y;
}  Point;

struct point{
    int i;
    int j;
};

void print_student(Student student);

int main(void)
{
    Student kevin;

    kevin.age = 20;
    strcpy(kevin.name ,"Kevin");
    strcpy(kevin.id,"07027053");
    kevin.grades[0] = 20;
    kevin.grades[1] = 38;
    kevin.grades[2] = 50;
    kevin.grades[3] = 40;
    kevin.grades[4] = 58;

    print_student(kevin);
    printf("\n");

    Point p1 = {5, 10};
    printf("p1.x: %d, p1.y: %d\n", p1.x, p1.y);
    Point p2 = {.x = 15, .y = 20};
    printf("p2.x: %d, p2.y: %d\n", p2.x, p2.y);
    /*struct point points = {5,10};

    for (int i = 0; i < 10; i++){
        points[i].x = i;
        points[i].y = 10 - 1;
    }*/

    struct point my_point = {3,7};
    struct point *p = &my_point;
    /* WAYS TO CHANGE THE VALUE OF Y IN my_point
    my_point.y = 98;
    (*p).y = 98;
    p->y=98;
    */
    return(0);
}

// passing structs to functions

void print_student(Student student){

    printf("%s\n", student.name);
    printf("%s\n", student.id);
    printf("%d\n", student.age);
    for(int i = 0; i < 5; i++){
        printf("%d, ",student.grades[i]);
    }
}