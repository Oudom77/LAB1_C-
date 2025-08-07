#include <iostream>
using namespace std;

int main () {

    int score;
    cout << "Enter your score: ";
    cin >> score;

    if (score > 60) {
        cout << "You passed!";
    }
    else {
        cout << "You failed!";
    }
    return 0;
}