#include <iostream>
#include "Student.h"
#include "compare.h"

using namespace std;

int main()
{
    Student boboc,senior;
    char name[20];
    float grade_math, grade_english, grade_history;
    cin >> name;
    cin.get();
    cin >> grade_math >> grade_english >> grade_history;

    boboc.set_name(name);
    boboc.set_math_grade(grade_math);
    boboc.set_english_grade(grade_english);
    boboc.set_history_grade(grade_history);
    cout << boboc.get_name() << ' ';
    cout << boboc.get_math_grade()<<' ';
    cout << boboc.get_english_grade() <<' ';
    cout << boboc.get_history_grade()<<' ';
    cout << boboc.get_average_grade()<<'\n';

    cin >> name;
    cin >> grade_math >> grade_english >> grade_history;

    senior.set_name(name);
    senior.set_math_grade(grade_math);
    senior.set_english_grade(grade_english);
    senior.set_history_grade(grade_history);
    cout << senior.get_name() << ' ';
    cout << senior.get_math_grade() << ' ';
    cout << senior.get_english_grade() << ' ';
    cout << senior.get_history_grade() << ' ';
    cout << senior.get_average_grade() << '\n';

    cout << compare_name(boboc, senior)<<" ";
    cout << compare_math_grade(boboc, senior) <<' ';
    cout << compare_english_grade(boboc, senior) << " ";
    cout << compare_history_grade(boboc, senior) << " ";
    cout << compare_average_grade(boboc, senior) << "\n";

}

//jack
//5.3 6.4 8 
//jack 5.3 6.4 8 6.56667 
//john 
//9.9 2.1 7.55 
//john 9.9 2.1 7.55 6.51667 
//- 1 - 1 1 1 1