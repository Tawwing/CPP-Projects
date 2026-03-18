#include <iostream>
#include <cmath>

namespace Convert {
    using std::cin; using std::cout;
    double celsiusToFahrenheit(double celsius) {
        return (celsius * 9/5) + 32;
    }
    double fahrenheitToCelsius(double fahrenheit) {
        return (fahrenheit - 32) * 5/9;
    }
}

int main() {
    using std::cin; using std::cout;
    while (true) {
        int choice;
        cout << "\n[1]: Celsius to Fahrenheit";
        cout << "\n[2]: Fahrenheit to Celsius";
        cout << "\nEnter choice: ";
        cin >> choice;
        switch (choice)  {
            case 1:
                double celsiusValue;
                cout << "\nEnter Celsius: ";
                cin >> celsiusValue;
                cout << "\nThe answer is " << Convert::celsiusToFahrenheit(celsiusValue);
                break;
            case 2:
                double fahrenheitValue;
                cout << "\nEnter Fahrenheit: ";
                cin >> fahrenheitValue;
                cout << "\nThe answer is " << Convert::fahrenheitToCelsius(fahrenheitValue);
                break;
            default:
                cout << "\nPlease Enter [1] and [2] Only!";
                break;
        }
    }
    return 0;
}
