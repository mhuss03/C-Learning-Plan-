#include <stdio.h>
#include <string.h>

int main() {

    struct Student {
        // char name[10];
        int roll_num;
        int grade;
    };

    // struct Student s1 = {"Joe", 1, 90};

    // struct Student s2;

    // strcpy(s2.name, "test");

    // s2.roll_num = 2;
    // s2.grade = 80;

    struct Student myarray[2];

    for(int i = 0; i < 2; i++) {
        myarray[i].roll_num = i;
        myarray[i].grade = i+10;         
    }

    int total = 0;

    for(int i = 0; i < 2; i++) {
        total += myarray[i].grade;
    }
    printf("%f\n", (float) total/2);
    return 0;
}