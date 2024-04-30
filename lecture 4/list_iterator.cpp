#include <iostream>
#include <list>
#include <stdexcept>


std::list<int> list_sum_elementwise( std::list<int> const & L1, std::list<int> const &  L2){
    if (L1.size() != L2.size()){
        throw std::invalid_argument {"Mismatched sizes"};
    }
    std::list<int> result {};
    auto iter1 = L1.begin();
    auto iter2 = L2.begin();
    while( iter1 != L1.end()){
        result.push_back( *iter1 + *iter2 );
        iter1++;
        iter2++;
    } 
    return result;
}


int main() {
    std::list<int> A {10, 20, 30};ll
    std::list<int> B {10, 20, 30};
    auto result = list_sum_elementwise(A, B);
    for (auto it = result.begin(); it != result.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}