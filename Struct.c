#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[100];
    char major[100];
    int age ;
    double gpa;


};

int main(){
   
    struct Student Student1;
    strcpy(Student1.name, "Jhon");
    strcpy(Student1.major, "Sport");
    Student1.age = 23;
    Student1.gpa = 3.0;

    struct Student Student2;
    strcpy (Student2.name , "Mike");
    strcpy (Student2.major, "Art");
    Student2.age = 23;
    Student2.gpa = 3.5;

    printf("Student1 Information : %s %s %d %lf \n", Student1.name, Student1.major, Student1.age, Student1.gpa);
    printf("Student2 Information : %s %s %d %lf", Student2.name, Student2.major, Student2.age, Student2.gpa);

    return 0;
}