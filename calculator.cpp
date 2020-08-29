#include <iostream>
#include <vector>

int main() {

    //Variables
    double number1;
    double number2;

    int action;

    double total;



    //Begin Program | Ask User Details
    std::cout << "\n\n\n\n\n";
    std::cout << "                   My Calculator                   ";
    std::cout << "\n\n\n";

    std::cout << "Please enter your first number: ";
    std::cin >> number1;
    std::cout << "\n";

    std::cout << "Please enter your second number: ";
    std::cin >> number2;
    std::cout << "\n";

    std::cout << "1: Addition           2: Subtraction\n";
    std::cout << "3: Multiplication     4: Division\n";
    std::cout << "Please choose your action: ";
    std::cin >> action;



    //User Input Logic
    if (action == 1) {
        total = number1 + number2;
        std::cout << "Your total is: " << total << "\n\n\n";
    } else if (action == 2) {
        total = number1 - number2;
        std::cout << "Your total is: " << total << "\n\n\n";
    } else if (action == 3) {
        total = number1 * number2;
        std::cout << "Your total is: " << total << "\n\n\n";
    } else if (action == 4) {
        total = number1 / number2;
        std::cout << "Your total is: " << total << "\n\n\n";
    } else {
        std::cout << "That was not a valid entry... re-run the program.\n\n\n";
    }



    return 0;

}