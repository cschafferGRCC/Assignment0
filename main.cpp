#include <iostream>
#include <cmath>

float calculateAreaOfRectangle(float height, float width) {
    return height * width;
}

float calculateHypotenuseOfTriangle(float leg1, float leg2) {
    return sqrtf(powf(leg1, 2) + powf(leg2, 2));
}

float calculateAreaOfTrapezoid(float length1, float length2, float trapezoidHeight) {
    return ((length1 + length2) / 2) * trapezoidHeight;
}

// reference https://cplusplus.com/forum/beginner/261201/#msg1131559
short int validateShortIntInput() {
    short int input;
    if (std::cin >> input) { // if the user entered an integer
        return input;
    } else {
        std::cout << "error: non-integer input. try again" << std::endl;

        std::cin.clear(); // clear the failed state of std::cin
        std::cin.ignore(1000, '\n'); // and throw the bad input away
        return -1;
    }
}

// reference https://cplusplus.com/forum/beginner/261201/#msg1131559
float validateFloatInput(std::string lastMessage) {
    float input;
    while (true) {
        if (std::cin >> input) { // if the user entered a float
            return input;
        } else {
            std::cout << "error: non-float input. try again" << std::endl;

            std::cin.clear(); // clear the failed state of std::cin
            std::cin.ignore(1000, '\n'); // and throw the bad input away
            std::cout << lastMessage;
        }
    }
}

void userPrompt() {
    std::cout << "Select a choice:" << std::endl;
    std::cout << "1. Calculate the hypotenuse of a triangle" << std::endl;
    std::cout << "2. Calculate the area of a trapezoid" << std::endl;
    std::cout << "3. Calculate the area of a rectangle" << std::endl;
    std::cout << "4. Quit" << std::endl;
    std::cout << "User Choice: ";
}

void userPromptAndCalculateTriangle() {
    float leg1;
    float leg2;
    std::cout << "Enter leg 1 of triangle: ";
    leg1 = validateFloatInput("Enter leg 1 of triangle: ");
    std::cout << "Enter leg 2 of triangle: ";
    leg2 = validateFloatInput("Enter leg 2 of triangle: ");
    std::cout << "Hypotenuse of triangle: " << calculateHypotenuseOfTriangle(leg1, leg2) << std::endl << std::endl;
}

void userPromptAndCalculateTrapezoid() {
    float length1;
    float length2;
    float trapezoidHeight;
    std::cout << "Enter long length of trapezoid: ";
    length1 = validateFloatInput("Enter long length of trapezoid: ");
    std::cout << "Enter short length of trapezoid: ";
    length2 = validateFloatInput("Enter short length of trapezoid: ");
    std::cout << "Enter height of trapezoid: ";
    trapezoidHeight = validateFloatInput("Enter height of trapezoid: ");
    std::cout << "Area of trapezoid: " << calculateAreaOfTrapezoid(length1, length2, trapezoidHeight) << std::endl
              << std::endl;
}

void userPromptAndCalculateRectangle() {
    float height;
    float width;
    std::cout << "Enter height of rectangle: ";
    height = validateFloatInput("Enter height of rectangle: ");
    std::cout << "Enter width of rectangle: ";
    width = validateFloatInput("Enter width of rectangle: ");
    std::cout << "Area of rectangle: " << calculateAreaOfRectangle(height, width) << std::endl << std::endl;
}

int main() {
    short int x = 0;
    while (x != 4) {
        userPrompt();
        x = validateShortIntInput();
        switch (x) {
            case 1:
                userPromptAndCalculateTriangle();
                break;
            case 2:
                userPromptAndCalculateTrapezoid();
                break;
            case 3:
                userPromptAndCalculateRectangle();
                break;
            case 4:
                std::cout << "Exiting" << std::endl;
                break;
            default:
                std::cout << "Not a valid choice" << std::endl << std::endl;
                break;
        }
    }
    return 0;
}
