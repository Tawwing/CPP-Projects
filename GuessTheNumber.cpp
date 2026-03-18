#include <iostream>
#include <ctime>
#include <stdlib.h>

namespace Math {
    int Random(int Max) {
        return (rand() % Max) + 1;
    }
}


void AskExit() {
    std::string TempInput;
    std::cout << "Do you want to play or not? [Y/N]" << "\n";
    std::cin >> TempInput;
    do {
        if (TempInput == "Y" || TempInput == "y") {
            break;
        } else if (TempInput == "N" || TempInput == "n") {
            std::cout << "I guess you really want to quit!" << "\n";
            std::exit(0);
        } else {
            std::cout << "Please enter only [Y/N]" << "\n";
            break;
        }
    } while (true);
    return;
}

int main() {
    srand(time(nullptr));
    std::cout << "Welcome to Guess The Number!" << "\n";    
    AskExit();
    while (true) {
        int Attempts = 0;
        int RandomNum = Math::Random(10);
        int Input = 0;
        while (Input != RandomNum) {\
            std::cout << "Enter the number: ";
            std::cin >> Input;
            std::cout << "\n";
            if (Input != RandomNum) {
                Attempts++;
                std::cout << "You got it wrong!" << "\n";
                continue;
            } else {
                break;
            }
        }
        std::cout << "You have guessed the right number, with " << Attempts << " attempts!" << "\n";
        AskExit();
    }
    return 0;
}
