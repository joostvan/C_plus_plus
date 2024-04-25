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


TimeOfDay parse_time(std::string input){
    std::string before_colon {};
    std::string after_colon {};
    bool found_colon{false};
    for (auto c: input){
        if (c==':'){
            found_colon = true;
        } else if (found_colon){
            after_colon += c;
        } else {
            before_colon += c;
        }
    }
    std::cout << "BC: " << before_colon << std::endl;
    std::cout << "AC: " << after_colon << std::endl;

    if (!found_colon){
        throw std::domain_error{"Invalid time or no colon!"};
    } 
    int hour {}, minute {};
    try {
        hour = std::stoi(before_colon);
        minute = std::stoi(after_colon);
        } catch (std::invalid_argument& e){
            throw std::domain_error {"invalid time"};
        }
    if (hour < 0 || hour > 23 || minute < 0 || minute > 59){
        throw std::out_of_range{"Invalid time"};
    }

    TimeOfDay result {6, 10};
    result.hour = hour;
    result.minute = minute;

    TimeOfDay result {(unsigned int)hour, (unsigned int)minute};
    return result;

}

int main(){
    std::string input_string;
    std::cout << "What time is it?";
    std::getline(std::cin, input_string);
    std::cout << "You entered "<< input_string << std::endl;
    // Task handle error cases
    TimeOfDay T {parse_time(input_string)};
    //std::cout << "The time is ";
    print_time(T);
    std::cout << std::endl;
    return 0;
} 