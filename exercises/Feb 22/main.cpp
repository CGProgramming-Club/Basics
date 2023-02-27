#include <iostream>

using namespace std;

int main() {
    //Scenario 1
    cout << "Scenario 1\n\n";
    //Variable Declaration
    int length = 0;
    int width = 0;
    //Inputs
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    //Output
    cout << "Your total area is " << length*width << " and your total perimeter is " << (length+width)*2 << endl << endl;


    //Scenario 2
    cout << "Scenario 2\n\n";
    //Variable Declaration
    int capacity = 0;
    int mpg = 0;
    //Inputs
    cout << "Enter the capacity of the gas tank in gallons: ";
    cin >> capacity;
    cout << "Enter mile per gallon: ";
    cin >> mpg;
    //Output
    cout << "You can drive for " << capacity * mpg << " miles without refueling.\n\n";
    
    
    //Scenario 3
    cout << "Scenario 3\n\n";
    //Variable Declaration
    int seconds = 0; 
    int minutes = 0;
    int hours = 0;
    //Inputs
    cout << "Enter hours: ";
    cin  >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;
    cout << "Enter seconds: ";
    cin >> seconds;
    //Output
    cout << "Your elapsed time in seconds is " << seconds + (minutes*60) + (hours*3600) << " seconds.\n\n";
    
    
    //Scenario 4
    cout << "Scenario 4\n\n";
    //Variable Declaration
    int actionFigures = 0;
    //Inputs
    cout << "Enter number of Ninja Turtle Action Figures: ";
    cin >> actionFigures;
    //Output
    cout << "You will need " << actionFigures/20 << " crate(s).\n";
    cout << "However, you will have " << actionFigures % 20 << " action figure(s) left over.\n\n"; 
    
    
    //Scenario 5
    cout << "Scenario 5\n\n";
    //Variable Declaration
    //Reusing variables from scenario 3 here, setting them to zero is important.
    seconds = 0;
    minutes = 0;
    hours = 0;
    //Inputs
    cout << "Enter seconds: ";
    cin >> seconds;
    //Math
    hours = seconds/3600;
    minutes = (seconds % 3600)/60;
    seconds = seconds % 3600 % 60;
    //Output
    cout << "That is " << hours << " hour(s), ";
    cout << minutes << " minute(s), and ";
    cout << seconds << " second(s).\n\n";
}
