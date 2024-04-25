#include <iostream>
#include <vector>
#include <stdexcept>

using std::vector;
float average_grades( vector<int> const & grades){
    if (grades.size() == 0){
        throw std::invalid_argument {"can't compute the average of zero things"};
    } 
    float sum {0};
    for (unsigned int i {0}; i < grades.size(); i++){
        if (grades.at(i)<0 || grades.at(i) > 100){
            throw std::out_of_range {"OUT OF RANGE"};
        }
        sum += grades.at(i);
    }
    return sum/grades.size();
}
int main(){
    vector<int> grades1 {90,30,30};
    vector<int> grades2 {};
    vector<int> grades3 {90,30,-20};
    auto av{average_grades(grades2)};
    std::cout << "Average: " << av << std::endl;
    return 0;
}

