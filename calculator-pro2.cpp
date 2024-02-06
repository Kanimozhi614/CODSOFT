#include <iostream>
#include <cmath>

class Calculator {
public:
    void displayMenu() const {
        std::cout<<"\n\n**********************************************************";
        std::cout<<"\n                        CALCULATOR                        ";
        std::cout<<"\n***********************************************************";
        std::cout << "\nSelect an operation to perform calculations..\n";
        std::cout<<"\n1. Addition\n"
                   "2. Subtraction\n"
                   "3. Multiplication\n"
                   "4. Division\n"
                   "5. Square\n"
                   "6. Square Root\n"
                   "7. Cube\n"
                   "8. Modulus\n"
                   "9. Exponentiation\n"
                  "10. Exit\n\n";
        
    }
    void Operation() {
        int choice;
        while(choice!=10) {
            displayMenu();
            std::cout<<"Enter your choice (1-10): ";
            std::cin >> choice;

            switch (choice) {
                case 1:
                    addition();
                    break;
                case 2:
                    subtraction();
                    break;
                case 3:
                    multiplication();
                    break;
                case 4:
                    division();
                    break;
                case 5:
                    square();
                    break;
                case 6:
                    squareRoot();
                    break;
                case 7:
                    cube();
                    break;
                case 8:
                    modulus();
                    break;
                case 9:
                    exponentiation();
                    break;
                case 10:
                    std::cout << "Thank you for using the calculator..Have a nice day!!.\n";
                    break;
                default:
                    std::cout << "Invalid choice. Please enter a number between 1 and 10.\n";
                    break;
            }


        } 
    }

private:

    void addition() {
        double a, b;
        std::cout << "\nEnter number 1: ";
        std::cin >> a;
        std::cout << "\nEnter number 2: ";
        std::cin >> b;
        std::cout << "\nSum of two numbers : " << a + b ;
    }

    void subtraction() {
        double a, b;
       std::cout << "\nEnter number 1: ";
        std::cin >> a;
        std::cout << "\nEnter number 2: ";
        std::cin >> b;
        std::cout << "\nDifference of two numbers : " << a - b ;
    }

    void multiplication() {
        double a, b;
        std::cout << "\nEnter number 1: ";
        std::cin >> a;
        std::cout << "\nEnter number 2: ";
        std::cin >> b;
        std::cout << "\nProduct of two numbers : " << a * b ;
    }

    void division() {
        double a, b;
        std::cout << "\nEnter number 1: ";
        std::cin >> a;
        std::cout << "\nEnter number 2: ";
        std::cin >> b;

        if (b != 0) {
           std::cout << "\nDivision  : " << a /b ;
        } else {
           std::cout << "\nError! Division by zero is not allowed..";
       
        }
    }
    void modulus() {
        int a, b;
        std::cout << "\nEnter number 1: ";
        std::cin >> a;
        std::cout << "\nEnter number 2: ";
        std::cin >> b;

        if (b != 0) {
            std::cout<<"\nModulus:"<<a % b;
        } else {
            
            std::cout << "\nError: Modulus by zero is not allowed.";
        }
    }

    void square() {
        double a;
        std::cout << "\nEnter a number to square: ";
        std::cin >> a;
        std::cout << "\nSquare of the number : " << a * a ;
    }

    void squareRoot() {
        double a;
        std::cout << "\nEnter a number: ";
        std::cin >> a;

        if (a >= 0) {
            std::cout << "\nSquare Root of the number: " << sqrt(a);
        } else {
            std::cout << "\nError! Cannot calculate square root of a negative number.";
        }
    }

    void exponentiation() {
        double base, exponent;
        std::cout << "\nEnter base : ";
        std::cin >> base ;
        std::cout<<"Enter exponent:";
        std::cin>>exponent;
        std::cout << "\nResult : " << pow(base, exponent) ;
    }
    void cube(){
        double a;
        std::cout << "\nEnter a number to cube: ";
        std::cin >> a;
        std::cout << "\nCube of the number : " << a * a *a ; 
    }
};

int main()
 {
    Calculator calculator;
    calculator.Operation();

    return 0;
}
