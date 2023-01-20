//-------------------------//
//                         //
//Creator: Connor Schaffer //
//Class: CIS247.5664.W23   //
//Date: 1/16-              //
//                         //
//-------------------------//

//It is interesting how the calculation functions must be above the output ones
//to be able to use it succefully and without errors.

#include <iostream>
#include <cmath>
#include <stdio.h>

//Naming conventions: Variables
//name of shape correlates to first letter
//Height = H
//length = L
//side = S
//width = W
//the number after the first two charecters is the number of which one it is. Like side 2.
//if there is no number after the first two charecters it is the only one

//hypotenuse of triangle calculations
float calculateHypotenuse(float hS1, float hS2) {
   float hypotenuse = sqrt((hS1 * hS1) + (hS2 * hS2));
   return hypotenuse;
}

//hypotenuse of triangle output & input
void hypotenuseMenuOption() {
    using namespace std;
   float hS1;
   float hS2;

   cout << "Enter the measurement of the base of the triangle" << endl;
   cin >> hS1;
   cout << "Enter the measurement of the height of the triangle" << endl;
   cin >> hS2;
   cout << " The hypotenuse of the triangle is: " << calculateHypotenuse(hS1, hS2);
}

//trapezoid area calculation
float calculateTrapezoidArea(float tB1, float tB2, float tH1) {
   float area = ((tB1 + tB2) / 2) * tH1;
   return area;
}

//trapezoid area output & input
void trapezoidAreaMenuOption() {
    using namespace std;
   float tB1;
   float tB2;
   float tH;

   cout << "Enter the first base of the trapezoid:" << endl;
   cin >> tB1;
   cout << "Enter the second base of the trapezoid:" << endl;
   cin >> tB2;
   cout << "Enter the height of the trapezoid:" << endl;
   cin >> tH;
   cout << "The area of the trapezoid is: " << calculateTrapezoidArea(tB1, tB2, tH);
}

//Volume of rectangle Calculation
float calculateRectangleVolume(float rL, float rW, float rH) {
   float volume = rL * rW * rH;
   return volume;
}

//Volume of rectangle output & input
void rectangleVolumeMenuOption() {
    using namespace std;
   float rL;
   float rW;
   float rH;

   cout << "Enter the length of the rectangle:" << endl;
   cin >> rL;
   cout << "Enter the width of the rectangle:" << endl;
   cin >> rW;
   cout << "Enter the height of the rectangle:" << endl;
   cin >> rH;
   cout << "The volume of the rectangle is: " << calculateRectangleVolume(rL, rW, rH);
}

//menu choice

int main() {
    using namespace std;
    short int menuChoice;
   cout << "Please Choose Which Object to Calculate:" << endl;
   cout << "Enter 1 to calculate the hypotenuse of a triangle," << endl;
   cout << "Enter 2 to calculate the area of a trapezoid," << endl;
   cout << "Enter 3 to calculate the volume of a rectangle," << endl;
   cout << "Enter 0 to exit." << endl;
   cin >> menuChoice;

    switch(menuChoice) {
    case 1: {
        hypotenuseMenuOption();
        break;
    } case 2: {
        trapezoidAreaMenuOption();
        break;
    } case 3: {
        rectangleVolumeMenuOption();
        break;
    } case 0: {
        exit(0);
    } default:
    cout << "Wrong Input" << endl;
    }
}