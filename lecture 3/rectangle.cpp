#include <iostream>
#include <vector>
#include <string>

struct Student {
    std::string student_id {};
    std::vector<int> grades {};
};

float compute_gpa(Student const & s){

}

float print_student(Student const & s){
    std::cout << "Student (" << s.student_id << "):";
    std::cout << "Grades are ";
    float sum {0};
    for (auto grade: s.grades){
        std::cout << grade << " ";
        sum += grade;
    }
    std::cout << std:: endl;
    return sum/s.grades.size();
}

int main(){
    Student A {};
    A.student_id = "V099999";
    A.grades.push_back(84);
    A.grades.push_back(100);
    Student B {"V00123456", {90,50,60}};
    auto f = print_student(A);
    print_student(B);
    std::cout << f;

}