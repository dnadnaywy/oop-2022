#pragma once
class Student 
{
    char name[20];
    float grade_math, grade_english, grade_history,average_grade;

  public:
    void Init();
    void set_name(const char* name);
    const char* get_name() const;
    void set_math_grade(float grade);
    float get_math_grade();
    void set_english_grade(float grade);
    float get_english_grade() const;
    void set_history_grade(float grade);
    float get_history_grade() const;
    float get_average_grade() const;

    
};
