#include <iostream>

using namespace std;

int main (){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = true;

    for (int i = 2; i < num; i++){

        if (num % i == 0){

            isPrime = false;
            break;

        }
    }

    if (isPrime){

        cout << "The number " << num << " is a prime number" << endl;

    } else {

        cout << "The number " << num << " is not a prime number" << endl;

    }


    return 0;
}