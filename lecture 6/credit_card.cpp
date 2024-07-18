#include <iostream>
#include <stdexcept>
#include <string>


class credit_card
{
    private:
        /* data */
        double unpaid_balance {};
        double credit_limit {};

    public:
        credit_card(): unpaid_balance{0}, credit_limit{1000} {

        }
        credit_card( double initial_credit_limit):
        unpaid_balance{0}, credit_limit{initial_credit_limit}{
            if (credit_limit < 0){
                throw std::invalid_argument{"Credit limit cannot be negative."};
            }
        }
        double get_unpaid_balance(){
            return unpaid_balance;
                }
        double get_credit_limit(){
            return credit_limit;
        }
        double get_remaining_credit(){
            auto remaining = get_credit_limit() - get_unpaid_balance();
            if (remaining < 0) {
                return 0;
            }
            return remaining;
        }
        void charge( double amount) {
            if (amount < 0){
                throw std::invalid_argument {"Cannot spend a negative amount"};
            } if (amount > get_remaining_credit()){
                throw std::invalid_argument{"Insufficient funds"};
            }
            unpaid_balance += amount;
        }
        void repay (double amount){
            if (amount < 0){
                throw std::invalid_argument{"Cannot repay a negative amount"};

            }
            unpaid_balance -= amount;
        }
        double print_card_details(c) const {
            std::cout << "Unpaid balance: " << c.unpaid_balance << std::endl;
            return unpaid_balance;
        }
};

int main(){
    credit_card C1 {1000};
    credit_card C2 {5000};
    C1.charge(6);
    C1.charge(10);
    C1.charge(17);
    C2.charge(187);
    C2.repay(116);
    std::cout << "Printing C1:" << std::endl;
    print_card_details(C1);
    std::cout << "Printing C2: " << std::endl;
    print_card_details(C2);
    return 0;
}