#include <iostream>

int main() {
    double num1, num2;
    double result;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // TODO: Implement the calculation logic here
    if(operation == '+'){
        result = num1 + num2;
    }else if(operation == '-'){
        result = num1 - num2;
    }else if (operation == '*'){
        result = num1 * num2;
    }else if(operation == '/'){
        result = num1 / num2;
    }
    std::cout << "Result: " << result << std::endl;

    return 0;
}