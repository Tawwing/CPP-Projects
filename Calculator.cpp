// Basic C++ Calculator 
#include <iostream>
#include <cmath>

typedef std::string string;

namespace Calculator {
    using std::cout; 
        static int value;
    double Add(double First, double Second) {
        return First + Second;
    }
    double Subtrack(double First, double Second) {
        return First - Second;
    }
    double Mutiply(double First, double Second) {
        return First * Second;
    }
    double Divide(double First, double Second) {
        return First / Second;
    }
    double Power(double base, double exponent) {
        return std::pow(base, exponent);
    }
    double Mod(double First, double Second) {
        return fmod(First, Second);
    }
    void PrintAsnwer(double Result) {
        cout << "The Asnwer is " << Result << std::endl;
    }
}

int main() {
    using namespace Calculator;
    using std::cout; using  std::cin;
    while (true) {
        double FirstNumber = 0;
        double SecondNumber = 0;
        string Opeartor = "";
        cout << "\nEnter First Number: ";
        cin >> FirstNumber;
        cout << "\nEnter Second Number: ";
        cin >> SecondNumber;
        cout << "\nEnter Operator: ";
        cin >> Opeartor;
        if (Opeartor == "+") {
            PrintAsnwer(Add(FirstNumber, SecondNumber));
        } else if (Opeartor == "-") {
            PrintAsnwer(Subtrack(FirstNumber, SecondNumber));
        } else if (Opeartor == "*") {
            PrintAsnwer(Mutiply(FirstNumber, SecondNumber));
        } else if (Opeartor == "/") {
            if (SecondNumber == 0) {
                std::cout << "You cannot divide a number by 0.";
            } else {
                PrintAsnwer(Divide(FirstNumber, SecondNumber));
            }
        } else if (Opeartor == "%") {
            PrintAsnwer(Mod(FirstNumber, SecondNumber));
        } else if (Opeartor == "^") {
            PrintAsnwer(Power(FirstNumber, SecondNumber));
        }
        cout << "------------------------------------------";
    }
    return 0;
}