#include <iostream>

int main(){
    int favorite_number;

    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Amazing!! tha's my favorite number too!" << std::endl;
    std::cout << "NO really!!, " << favorite_number << " is my favorite number!" << std::endl;

    return 0;

}
