#include <iostream>

using namespace std;

int main(){

    // define conversion values in cents
    const int dollar_value{100};
    const int quarter_value{23};
    const int dime_value{10};
    const int nickel_value{5};

    int change_amount{};

    // Solution 1 - not using the modulo operator

    cout << "Enter an amount in cents: ";
    cin >> change_amount;

    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

    dollars = change_amount / dollar_value;
    balance = change_amount - (dollars * dollar_value);

    quarters = balance / quarter_value;
    balance -= quarters * quarter_value;

    dimes = balance / dime_value;
    balance -= dimes * dime_value;

    nickels = balance / nickel_value;
    balance -= nickels * nickel_value;

    pennies = balance;
}