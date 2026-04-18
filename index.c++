#include <iostream>
using namespace std;

// Function for Length Conversion
void lengthConverter() {
    int choice;
    double value;

    cout << "\n--- Length Converter ---\n";
    cout << "1. Meter to Kilometer\n";
    cout << "2. Kilometer to Meter\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    if (choice == 1) {
        cout << "Result: " << value / 1000 << " km\n";
    } else if (choice == 2) {
        cout << "Result: " << value * 1000 << " m\n";
    } else {
        cout << "Invalid choice!\n";
    }
}

// Function for Temperature Conversion
void temperatureConverter() {
    int choice;
    double value;

    cout << "\n--- Temperature Converter ---\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    if (choice == 1) {
        cout << "Result: " << (value * 9/5) + 32 << " F\n";
    } else if (choice == 2) {
        cout << "Result: " << (value - 32) * 5/9 << " C\n";
    } else {
        cout << "Invalid choice!\n";
    }
}

// Function for Weight Conversion
void weightConverter() {
    int choice;
    double value;

    cout << "\n--- Weight Converter ---\n";
    cout << "1. Kilogram to Gram\n";
    cout << "2. Gram to Kilogram\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    if (choice == 1) {
        cout << "Result: " << value * 1000 << " g\n";
    } else if (choice == 2) {
        cout << "Result: " << value / 1000 << " kg\n";
    } else {
        cout << "Invalid choice!\n";
    }
}

// Main Function
int main() {
    int choice;

    do {
        cout << "\n====== UNIT CONVERTER ======\n";
        cout << "1. Length Conversion\n";
        cout << "2. Temperature Conversion\n";
        cout << "3. Weight Conversion\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                lengthConverter();
                break;
            case 2:
                temperatureConverter();
                break;
            case 3:
                weightConverter();
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}