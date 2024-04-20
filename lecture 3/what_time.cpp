#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

struct TimeOfDay{
    unsigned int hour {0};
    unsigned int minute {0};
};

void print_time( TimeOfDay the_time){
    std::cout << the_time.hour << ":" << the_time.minute;
}

/* parse_time(input)
Given A string attempt to pour the contents into an hour and minute and return a time of day object containing the result.
A string attempt to pour the contents into an hour and minute and return a time of day object containing the result.

Exception should be thrown in the following cases cases must be checked in the order below
If the string does not contain two numerical field, separated by colon e.g. 1006, not six or 10, throw std::domain_error (NOT std::invalid_argument)

If the hour is not in the range, 0 to 23 or the minute is not in the range 0-59 STD:: out of range

*/

int main(){
    std::string input_string;
    std::cout << "What time is it?";
    std::getline(std::cin, input_string);
    std::cout << "You entered "<< input_string << std:endl;
    // Task handle error cases
    TimeOfday T {parse_time(input_string)};
    std::cout << "The time is ";
    print_time(T);
    std::cout << std::endl;
    return 0;
}