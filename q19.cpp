#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

    while (number > 0) {
        sum = sum + (number % 10); // Add the last digit
        number = number / 10;      // Remove the last digit
    }

    cout << "Sum of digits is: " << sum << endl;

    return 0;
}


