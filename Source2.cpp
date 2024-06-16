#include <iostream>
using namespace std;

// Function prototypes
float getNum();
float add(float, float);
void outSum(float);

int main() {
    float num1, num2, sum;

    do {
        num1 = getNum();
        num2 = getNum();

        if (num1 != 0 && num2 != 0) {
            sum = add(num1, num2);
            outSum(sum);
        }
    } while (num1 != 0 && num2 != 0);

    cout << "Exiting program. Goodbye!" << endl;

    return 0;
}

// Function to get a number from the user
float getNum() {
    float num;
    cout << "Enter a number (enter 0 to stop): ";
    cin >> num;
    return num;
}

// Function to add two numbers
float add(float a, float b) {
    return a + b;
}

// Function to output the sum
void outSum(float s) {
    cout << "Sum is: " << s << endl;
}
