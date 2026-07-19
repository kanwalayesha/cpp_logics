#include <iostream>
using namespace std;
int main() {
    int setpassword=1234;
    int password;
    cout << "Enter password: " << endl;
    cin >> password;
    if (password == setpassword) {
        cout << "Access granted" << endl;
    } else {
        cout << "Access denied" << endl;
        exit(0);
    }
    return 0;
}