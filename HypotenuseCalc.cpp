#include <iostream>
#include <cmath>

int main() {
    while (true) {
        double a; double b; double c;
        std::cout << "Enter Side A: " << std::endl;
        std::cin >> a;
        std::cout << "\nEnter Side B: " << std::endl;
        std::cin >> b;
        c = sqrt(pow(a, 2) + pow(b, 2));
        std::cout << "Side C: " << c << std::endl;
    }

    return 0;
}
