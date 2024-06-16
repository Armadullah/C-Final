#include <iostream>
using namespace std;

int main() {
    int num;
    int sumPositive = 0;
    int sumNegative = 0;

    cout << "Enter a list of numbers (terminate with 0):" << endl;

    do {
        cin >> num;

        if (num > 0) {
            sumPositive += num;  // Add to sum of positive numbers
        }
        else if (num < 0) {
            sumNegative += num;  // Add to sum of negative numbers
        }
    } while (num != 0);

    // Output the sums
    cout << "Sum of positive numbers: " << sumPositive << endl;
    cout << "Sum of negative numbers: " << sumNegative << endl;

    return 0;
}
