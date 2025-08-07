#include <iostream>

using namespace std;

int main (){

    int sum = 0;
    int num;

    cout << "Enter a number (end the summation with 0): " << endl;

    do {

        cin >> num;
        sum += num;

    } while (num != 0);
    
    cout << endl << "The total sum: " << sum;

    return 0;
}