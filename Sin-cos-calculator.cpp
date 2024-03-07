#include <iostream>
#include <cmath>
using namespace std;

double sincalc(double angle_degrees) {
    // Convert degrees to radians
    double angle_radians = angle_degrees * M_PI / 180.0;

    // Calculate the sine of the angle
    double sin_value = sin(angle_radians);

    return sin_value;
}

double Coscalc(double angle_degrees) {
    // Convert degrees to radians
    double angle_radians = angle_degrees * M_PI / 180.0;

    // Calculate the cosine of the angle
    double cos_value = cos(angle_radians);

    return cos_value;
}

int main() {
    double angle_degrees;
    string choice;

    cout << "Welcome to Trigonometry Calculator!\n\n";

	do {
        cout << "Enter the angle in degrees: ";
        cin >> angle_degrees;

        cout << "Choose an operation:\n";
        cout << "1. Calculate sine\n";
        cout << "2. Calculate cosine\n";
        cout << "Enter your choice (sin/cos): ";
        cin >> choice;

        if (choice == "sin") {
            cout << "sin(" << angle_degrees << " degrees) = " << sincalc(angle_degrees) << endl;
        } else if (choice == "cos") {
            cout << "cos(" << angle_degrees << " degrees) = " << Coscalc(angle_degrees) << endl;
        } else {
            cout << "Invalid choice! Please enter sin or cos.\n";
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
          if (choice == "y" || choice == "Y") {
          	cout<<"\nLoading....";
           system("cls");
        }
    } while (choice == "y" || choice == "Y");

    cout << "\nPress any key to exit......";

    return 0;
}

