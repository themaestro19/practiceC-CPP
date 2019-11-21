#include <iostream>

using namespace std;
unsigned long long fibonucci(unsigned long long n);

unsigned long long fibonucci(unsigned long long n){
    if(n <= 1)
        return n;
    return fibonucci(n-1) + fibonucci(n-2); //recursion
}

int main(){
    cout << fibonucci(5) << endl;
    cout << fibonucci(30) << endl;
    cout << fibonucci(40) << endl;

    return0;
}