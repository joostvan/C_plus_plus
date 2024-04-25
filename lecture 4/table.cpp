#include <iostream>
#include <vector>
int main(){
    std::vector< std::vector<int> > T{
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };

    for (auto& row: T){
        for (auto v: row){
            std::cout << v << " ";
        }
        std::cout << std::endl;
    }
    for (unsigned int i {0}; i < T.size(); i++){
        // loop through each row i at column j
        for(unsigned int j {0}; j <T.at(i).size();j++){
            std::cout << T.at(i).at(j)<< " ";
        }
        std::cout << std::endl;
    }
}
