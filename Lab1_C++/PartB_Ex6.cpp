#include <iostream>

using namespace std;

int main (){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = true;        //Holds the status of the number

    for (int i = 2; i < num; i++){      //Loops from 2 -> number - 1

        if (num % i == 0){              //Checks if it is divisible by a number other than 1 and itself

            isPrime = false;            //If so change the status
            break;

        }
    }

    if (isPrime){       //Print based on the status

        cout << "The number " << num << " is a prime number" << endl;

    } else {

        cout << "The number " << num << " is not a prime number" << endl;

    }


    return 0;
}
