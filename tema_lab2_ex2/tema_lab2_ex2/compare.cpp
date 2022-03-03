#include "Student.h"
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "compare.h"

int compare_name(Student student1, Student student2) {
    if (strcmp(student1.get_name(), student2.get_name()) > 0)
        return 1;
    else if (strcmp(student1.get_name(), student2.get_name()) < 0)
        return -1;
    return 0;
}

int compare_math_grade(Student student1, Student student2) {
    if (student1.get_math_grade() > student2.get_math_grade())
        return 1;
    else if (student1.get_math_grade() < student2.get_math_grade())
        return -1;
    return 0;
}

int compare_english_grade(Student student1, Student student2) {
    if (student1.get_english_grade() > student2.get_english_grade())
        return 1;
    else if (student1.get_english_grade() < student2.get_english_grade())
        return -1;
    return 0;
}

int compare_history_grade(Student student1, Student student2) {
    if (student1.get_history_grade() > student2.get_history_grade())
        return 1;
    else if (student1.get_history_grade() < student2.get_history_grade())
        return -1;
    return 0;
}

int compare_average_grade(Student student1, Student student2) {
    if (student1.get_average_grade() > student2.get_average_grade())
        return 1;
    else if (student1.get_average_grade() < student2.get_average_grade())
        return -1;
    return 0;
}
