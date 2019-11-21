#include <iostream>

using namespace std;

int main(){

    bool equal_result{false};
    bool not_equal_result{false};

    int num1{}, num2{};

    // cout << boolalpha; // will display true/false  instead of 1/0 of booleans

    cout << "Enters two integers seperated by spaces: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;

    char char1{}, char2{};
    cout << "Enters two character reperated by spaces: ";
    cin >> char1 >> char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;

    double double1{}, double2{};
    cout << "Enters two doubles reperated by spaces: ";
    cin >> doubles1 >> doubles2;
    equal_result = (doubles1 == doubles2);
    not_equal_result = (doubles1 != doubles2);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;

    cout << "Enter an integer and a double seperated by spaces: ";
    cin >> num1 >> double1;
    equal_result = (num1 == double1);
    not_equal_result = (num1 != double1);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;


    cout << endl;
    return 0;
}