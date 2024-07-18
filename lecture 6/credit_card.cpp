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
        // const in front means returns const; const at the back means this function won't update the variable
        double get_unpaid_balance() const {
            return unpaid_balance;
                }
        double get_credit_limit() const{
            return credit_limit;
        }
        double get_remaining_credit() const{
            // member function gets to decide how to return the value
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
};
// member function may modify object
void print_card_details( credit_card const & C) {
    std::cout << "Unpaid balance: " << C.get_unpaid_balance() << std::endl;
    std::cout << "Remaining credit = $ " << C.get_remaining_credit() << std::endl;
}
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