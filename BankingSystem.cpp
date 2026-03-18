#include <iostream>
#include <stdlib.h>
#include <ctime>

typedef std::string string;

namespace Bank {
    string EmailAddress;
    char MoneySign = '$';
    double Balance = 0;

    void Init(); void HomePage(); void Deposit(); void Withdraw();
    void Init() {
        EmailAddress.clear();
        while (EmailAddress.empty()) {
            std::cout << "Enter your name: ";
            std::cin >> EmailAddress;
            if (EmailAddress.empty()) {
                std::cout << "You didn't even enter your name!";
                continue;
            }
        }
        EmailAddress.append("@gmail.com");
        Balance = (rand() % 1000) + 1;
        return;
    }

    void HomePage() {
        std::cout << "Hello " << EmailAddress << "!" << std::endl;
        std::cout << "Current Balance: " << Balance << MoneySign << std::endl;
        while (true) {
            int Input;
            std::cout << "Enter actions [1]: Deposit [2]: Withdraw [3]: Exit" << std::endl;
            std::cout << "Input: ";
            std::cin >> Input;
            if (Input == 1) {
                Deposit();
            } else if (Input == 2) {
                Withdraw();
            } else if (Input == 3) {
                std::cout << "Thank you for using our newest banking system!" << std::endl;
                std::exit(0);
            } else {
                std::cout << "Please enter input between [1]: Deposit [2]: Withdraw [3]: Exit" << std::endl;
                std::cout << "---------------------------------------------------------------" << std::endl;
                continue;
            }
        }
    }
    void Deposit() {
        double Amount = 0;
        do {        
            std::cout << "Enter the deposit amount [+]: ";
            std::cin >> Amount;
            std::cout << "\n";
        } while (Amount < 0);
        while (Amount > 100) {
            std::cout << "You can't deposit more then 100!" << MoneySign << std::endl;
            std::cout << "Enter the deposit amount [+]: ";
            std::cin >> Amount;
            std::cout << "\n";
        }
        std::cout << "Successfully deposit " << Amount << MoneySign << std::endl;
        Balance += Amount;
        return;
    }
    void Withdraw() {
        double Amount = 0;
        do {        
            std::cout << "Enter the withdraw amount [+]: ";
            std::cin >> Amount;
            std::cout << "\n";
        } while (Amount < 0);
        while (Amount > Balance) {
            std::cout << "You can't withdraw more then 100!" << MoneySign << std::endl;
            std::cout << "Enter the withdraw amount [+]: ";
            std::cin >> Amount;
            std::cout << "\n";
        }
        std::cout << "Successfully withdraw " << Amount << MoneySign << std::endl;
        Balance -= Amount;
        return;
    }
}

int main() {
    srand(time(nullptr));
    Bank::Init();
    Bank::HomePage();
    return 0;
}

