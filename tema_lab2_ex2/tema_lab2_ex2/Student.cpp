#include "Student.h"
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>

void Student::Init() {
    this->name[0] = '\0';
    this->grade_english   = 1;
    this->grade_math   = 1;
    this->grade_history   = 1;
    this->average_grade   = 0;
}

void Student::set_name(const char *name) {
    strcpy(this->name, name);
}

const char* Student::get_name() const {
    return this->name;
}

void Student::set_math_grade(float grade) {
    if (grade>=1&&grade<=10)
        this->grade_math = grade;
}

float Student::get_math_grade() {
    return this->grade_math;
}

void Student::set_english_grade(float grade) {
    if (grade >= 1 && grade <= 10)
        this->grade_english = grade;
}

float Student::get_english_grade() const {
    return this->grade_english;
}

void Student::set_history_grade(float grade) {
    if (grade >= 1 && grade <= 10)
        this->grade_history = grade;
}

float Student::get_history_grade() const {
    return this->grade_history;
}

float Student::get_average_grade() const {
    return (grade_english+grade_history+grade_math)/3;
}
