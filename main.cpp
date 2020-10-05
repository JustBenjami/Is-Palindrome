#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::abs;


bool IsPalindrome(const string& str);

int main() {
    string usersWord;
    char option;
    do {
        cout << "Please enter a string: ";
        cin >> usersWord;
        if (IsPalindrome(usersWord)) {
            cout << usersWord << " is a palindrome." << endl;
        }
        else {
            cout << usersWord << " is not a palindrome." << endl;
        }
        cout << "Would you like to enter another word? (y/n): ";
        cin >> option;
    } while (option == 'y' || option == 'Y');
    cout << "\nProgram terminated" << endl;
    return 0;
}

bool IsPalindrome(const string& str) {
    if (str.length() == 0 || str.length() == 1) {
        return true;
    }
    if (str.front() == str.back() || abs(str.front() - str.back()) == 32) {
        return IsPalindrome(str.substr(1, str.length() - 2));
    }
    return false;
}
