#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CLASS_SIZE 100
int main(void) {
    Student grade[CLASS_SIZE];
    Student zhangsan = { 18, male, "zhangsan", 1};
    Student lisi = { 18, male, "lisi", 2};
    Student wangwu = { 18, male, "wangwu", 3};
    Student zhaoliu = { 18, male, "zhaoliu", 4};
    grade[0] = zhangsan;
    grade[1] = lisi;
    grade[2] = wangwu;
    grade[3] = zhaoliu;

    for (int i = 1; i <= 4; i++)
        if (grade[i].num == 2) {
            printf("2号=%d\n", grade[i].num);
        }

    return 0;
}
Student *createStudent(int age, enum gender sex, char *name, int num) {
    Student *rlt = (Student *)malloc(sizeof(Student));
    strcpy(rlt->name, name);
    rlt->age = age;
    rlt->sex = sex;
    rlt->num = num;
    return rlt;
}
void displayStudent(Student *stu) {
    printf("学号: %d,姓名: %s,年龄:%d,性别: %s\n", stu->num, stu->name, stu->age, stu->sex == female ? "女" : "男");
}
Student *search(Student *studentPArr[], int num) {
    for (int j = 1; studentPArr[j] != NULL; j++) {
        if (studentPArr[j]->num == num) {
            printf("%s\n", studentPArr[j]->name);
        }

    }

    return NULL;

}
void deleteStudentByNum(Student *stu[], Student *student) {
    for (int i = 1; stu[i] != NULL; i++) {
        if (stu[i]->num == student->num) {
        }

        stu[i] = stu[i + 1];
        printf("学号: %d,姓名: %s,年龄:%d,性别: %s\n", stu[i]->num, stu[i]->name, stu[i]->age, stu[i]->sex == female ? "女" : "男");
    }
}