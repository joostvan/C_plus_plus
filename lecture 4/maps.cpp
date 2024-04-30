#include <iostream>
#include <map>
#include <string>
#include <stdexcept>

int main(){
    std::map< std::string, std::string > student_names{};
    std::map< std::string, int > exam_grades {};
    student_names["V01"] = "Al A1";
    student_names["V02"] = "Al A2";
    student_names["V03"] = "Al A3";
    student_names["V04"] = "Al A4";

    exam_grades["V01"] = 1;
    exam_grades["V02"] = 2;
    exam_grades["V03"] = 3;
    exam_grades["V04"] = 4;

    std::cout << student_names["V01"] << "received";
    std::cout << exam_grades["V01"] << std::endl;
    // loop
    for( auto P: student_names){
        std::cout << P.first << " " << P.second << std::endl;
    }
    std::cout << std::endl;
    for( auto [id, name]: student_names){
        std::cout << id << " " << name << std::endl;
    }
    std::cout << std::endl;
    for( auto [id, name]: student_names){
        std::cout << id << " " << name << " " << exam_grades.at(id) << std::endl;
    }
    std::cout << std::endl;
    return 0;
}