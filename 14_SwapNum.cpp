// Algorithm Challenge
// 14 — Swap Numbers

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp;

    // Ask the user to enter two numbers
    cout << "Enter two numbers:\n";
    cin >> num1 >> num2;

    // Display values before swapping
    cout << "Before swapping:\n";
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    // Swap values using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display values after swapping
    cout << "After swapping:\n";
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return 0;
}
