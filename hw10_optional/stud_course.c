#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define STR_SIZE 30
#define STUDENT_NUMBER 200

struct student
{
    char surname[STR_SIZE];
    char name[STR_SIZE];
    uint8_t age;
};

void add_student(struct student course[], int number, char surname[], char name[], uint8_t age)
{
    strcpy(course[number].surname, surname);
    strcpy(course[number].name, name);
    course[number].age = age;
}

int add_course(struct student course[])
{
    int count = 0;
    add_student(course, count++, "Ivanov", "Ivan", 19);
    add_student(course, count++, "Petrov", "Ivan", 20);
    add_student(course, count++, "Petrov", "Ivan", 20);
    add_student(course, count++, "Petrov", "Ivan", 20);
    add_student(course, count++, "Ivanov", "Petr", 40);
    return count;
}

int main(void)
{
    struct student course[STUDENT_NUMBER]; // ghbyn
    int number = add_course(course);
    printf("%d\n", number);
    return 0;
}