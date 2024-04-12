#include <iostream>
#include <string>

int main(){
    //Task 0: create two strings s1 and s2 eac with some initial text

    std::string s1 {"Hello"};
    std::string s2 {"World"};
    // Task 1: print out the value of s1
    std::cout << s1 << std::endl;
    // Task 2: create an empty string S3:
    std::string s3 {};
    // empty string above
    // 
    std::cout << s1.at(1) << std::endl;
    std::cout << "Length of S1: " << s1.length() << std::endl;
    s3 = s1; 
    for (char c: s3){
        std::cout << "Character: " << c << std::endl;
    }

} 