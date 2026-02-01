// Define PI
// Take PI plus radius to find circumference
// Start with pre-embedded radius before allowing userInput
// Learning C++ - https://github.com/WiiZARDD

// ALWAYS include <iostream> so std:: works, also define as namespace
#include <iostream>
using namespace std;

// Beginning of program
int main(){
    int radius;
    const double PI = 3.1415;
    char choice;

    // Begin a do/while loop....
    do {
        std::cout << "Pick a radius: ";
        std::cin >> radius;

        double circumference = 2 * PI * radius;

        std::cout << "\n";
        std::cout << "The circumference of Radius: " << radius << endl;
        std::cout << "\n";
        std::cout << "Circumference: " << circumference << endl;

        std::cout << "Restart? (Y / N) : ";
        std::cin >> choice;

        std::cout << endl;

    } while (choice == 'y' || choice == 'Y');

    return 0;

}
