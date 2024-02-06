#include <iostream>
#include <cmath>

int main() {
    char operation;
    double num1, num2, result;
    std::cout << "Simple Calculator Menu:" << std::endl;
    std::cout << "1. Addition (+)" << std::endl;
    std::cout << "2. Subtraction (-)" << std::endl;
    std::cout << "3. Multiplication (*)" << std::endl;
    std::cout << "4. Division (/)" << std::endl;
    std::cout << "5. Power (^)" << std::endl;
    std::cout << "6. Square" << std::endl;
    std::cout << "Enter the operation number (1-6): ";
    std::cin >> operation;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    switch (operation) {
        case '1':
            result = num1 + num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '2':
            result = num1 - num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '3':
            result = num1 * num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '4':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Result: " << result << std::endl;
            } else {
                std::cout << "Error! Division by zero." << std::endl;
            }
            break;
        case '5':
            result = std::pow(num1, num2);
            std::cout << "Result: " << result << std::endl;
            break;
        case '6':
            result = std::pow(num1, 2);
            std::cout << "Result: " << result << std::endl;
            break;
        default:
            std::cout << "Invalid operation. Please enter a number between 1 and 6." << std::endl;
    }
    return 0;
}
