#include <iostream>
using namespace std;

int main() {
    
    unsigned int value = 0;
    unsigned int divisor = 2;
    unsigned int result = 0;
    bool flag = true;
    cout << "Program to determine if a number between 0 and 4294967295 is a prime number." << endl;
    cout << "Enter a integer between 0 and 4294967295" << endl;
    cout << "==> ";
    cin >> value;
    
    if (value == 1 || value == 2 || value == 3) {
        cout << value << " is a prime number" << endl;
    } else {
        do {
            result = value % divisor;
            if (result == 0) {
                flag = false;
            } else {
                divisor++;
            }
        } while (flag == true && divisor < value);
        
        if (flag == false) {
            cout << value << " is not prime" << endl;
        } else if (flag == true) {
            cout << value << " is a prime number" << endl;
        }
    }

    return 0;
}

