#include <iostream>
using namespace std;

int main() {
    double loanAmount;
    double deposit = 0.0;

    // Input loan amount
    cout << "Enter the loan amount: ";
    cin >> loanAmount;

    // Calculate deposit based on the schedule
    if (loanAmount < 10000) {
        deposit = loanAmount * 0.10;  // 10% of loan value
    }
    else if (loanAmount < 15000) {
        deposit = 200 + loanAmount * 0.06;  // $200 + 6% of loan value
    }
    else if (loanAmount < 20000) {
        deposit = 500 + loanAmount * 0.05;  // $500 + 5% of loan value
    }
    else if (loanAmount < 50000) {
        deposit = 1000 + loanAmount * 0.03;  // $1000 + 3% of loan value
    }
    else {
        cout << "Loans exceeding $50,000 are not allowed." << endl;
        return 1;  // Exit the program with error code
    }

    // Output the required deposit
    cout << "Required deposit: $" << deposit << endl;

    return 0;

}
