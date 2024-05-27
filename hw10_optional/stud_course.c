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

void print_course(struct student course[], int number)
{
    for (int i = 0; i < number; i++)
    {
        printf("%s\t%s\t%d\n",
               course[i].surname,
               course[i].name,
               course[i].age);
    }
}

int eldest(struct student course[], int number)
{
    int max = course[number].age;
    for (int i = 0; i < number; i++)
    {
        if(max < course[i].age)
            max = course[i].age;
    }
    return max;
}

int num_people_given_name(struct student *course, int number, char *name)
{
    int count = 0;
    for (int i = 0; i < number; i++)
    {
        if(!strcmp(course[i].name, name))
            count++;
    }
    return count;
}

int main(void)
{
    struct student course[STUDENT_NUMBER]; // ghbyn
    int number = add_course(course);
    printf("%d\n", number);
    print_course(course, number);
    printf("Eldest student is %d\n", eldest(course, number));
    char *name = "Ivan";
    printf("Name %s number = %d\n", name, num_people_given_name(course, number, name));
    return 0;
}