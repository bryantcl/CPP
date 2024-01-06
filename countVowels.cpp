#include <iostream>
using namespace std;

int main() {
    string s;
    int vowels = 0;
    cout << "Program takes an input string and counts the vowels" << endl;
    cout << "Please enter a string, string can contain any ASCII characters" << endl;
    cout << "==> ";
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U' || s[i] == 'y' || s[i] == 'Y') {
            vowels++;
        }
    }
    cout << "The number of vowels in the string is " << vowels << endl;
    
    return 0;
}

