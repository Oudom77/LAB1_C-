#include <iostream>
using namespace std;

int main () {

    int age;

    cout << "Enter your age: ";
    cin >> age; 
    if (age <= 12) {
        cout << "You are a child\n";
    } else if (age > 12 && age < 20 ) {
        cout << "You are a teen\n";
    } else {
        cout << "You are an adult\n";
    }
    return 0;
}