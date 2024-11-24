#include <iostream>
#define phi 22/7
using namespace std;

//Function to calculate and display the volume of a tube.
void tubevolume ();


//Function to calculate and display the volume of a cone.
void conevolume ();


// Function to calculate and display the circumference of a triangle.
void tricircumference ();


//Function to calculate and display the circumference of a rectangle.
void rectanglecircumference ();


//Function to find and display the greatest number among three given numbers.
void greaternumber ();

int main () {

    //Use do while to give users chance to start the program all over again.
    bool ulang= false;
    do {
        system ("cls");
        int menuinput;

        cout << "=====================================" << endl;
        cout << "            ASSIGNMENT 4             " << endl;
        cout << "=====================================" << endl;
        cout << "1. Tube Volume " << endl;
        cout << "2. Cone Volume " << endl;
        cout << "3. Triangle Circumference" << endl;
        cout << "4. Rectangle Circumference" << endl;
        cout << "5. Largest number from 3 numbers" << endl;
        cout << "Input : ";
        cin >> menuinput;

        switch (menuinput) {
            case 1:
                system ("cls");
                tubevolume();
                break;
            case 2:
                system ("cls");
                conevolume();
                break;
            case 3:
                system ("cls");
                tricircumference();
                break;
            case 4:
                system ("cls");
                rectanglecircumference();
                break;
            case 5:
                system ("cls");
                greaternumber();
                break;
            default:
                cout << "Input not valid!" << endl;
                system ("pause");
                break;
        }

        string inputulang;
        cout << "Do you wanna try again ? (y/n) ";
        cin >> inputulang;

        if (inputulang == "y" || inputulang == "Y") {
             ulang = true;
        } else {
             ulang = false;
             system ("cls");
            
        }
    } while (ulang == true ); 
}


//Function to calculate and display the volume of a tube.
//Takes height and radius as input from user.
void tubevolume () {
    cout << "=====================================" << endl;
    cout << "           TUBE VOLUME               " << endl;
    cout << "=====================================" << endl;

    double height, radius;
    cout << "Height: ";
    cin >> height;
    cout << "Radius: ";
    cin >> radius;

    double result = phi * radius * radius * height;
    cout << "Result: " << result << " m^3" << endl;
}


//Function to calculate and display the volume of a cone.
//Takes height and radius as input from user.
void conevolume () { 
    cout << "=====================================" << endl;
    cout << "           CONE VOLUME               " << endl;
    cout << "=====================================" << endl;

    double height, radius;
    cout << "Height: ";
    cin >> height;
    cout << "Radius: ";
    cin >> radius;

    double result = 1/3.0 * phi * radius * radius * height;
    cout << "Result: " << result << " m^3" << endl;
}


// Function to calculate and display the circumference of a triangle.
// Takes the lengths of the three sides as input from user.
void tricircumference () {
    cout << "=====================================" << endl;
    cout << "     TRIANGLE CIRCUMFERENCE          " << endl;
    cout << "=====================================" << endl;

    double a, b, c;
    cout << "Side A: ";
    cin >> a;
    cout << "Side B: ";
    cin >> b;
    cout << "Side C: ";
    cin >> c;

    double circumference = a + b + c;
    cout << "Result: " << circumference << " m" << endl; 
}


//Function to calculate and display the circumference of a rectangle.
//Takes height and width as input from user.
void rectanglecircumference () {
    cout << "=====================================" << endl;
    cout << "   RECTANGLE CIRCUMFERENCE           " << endl;
    cout << "=====================================" << endl;

    double height, width;
    cout << "Height: ";
    cin >> height;
    cout << "Width: ";
    cin >> width;

    double circumference = 2 * (height + width);
    cout << "Result: " << circumference << " m" << endl;
}


//Function to find and display the greatest number among three given numbers.
//Takes three integers as input from user.
void greaternumber () {
    cout << "=====================================" << endl;
    cout << "         GREATEST NUMBER             " << endl;
    cout << "=====================================" << endl;

    int a, b, c;
    cout << "Number #1 : ";
    cin >> a;
    cout << "Number #2 : ";
    cin >> b;
    cout << "Number #3 : ";
    cin >> c;

    if (a > b) {
        if (a > c) {
            cout << a << " is the greatest number!" << endl;
        } else {
            if (c > b) { 
                cout << c << " is the greatest number!" << endl;
            } else {
                cout << b << " is the greatest number!" << endl;
            }
        }
    } else { 
        if (b > c) {
            cout << b << " is the greatest number!" << endl;
        } else {
            cout << c << " is the greatest number!" << endl;
        }
    }
}
