#include <iostream>

using namespace std;

int main (){

    int sum = 0;
    int num;

    cout << "Enter a number (end the summation with 0): " << endl; 

    do {

        cin >> num;     //A new input everytime the loop runs
        sum += num;     //Adds everytime the loop runs

    } while (num != 0); //Loop ends when 0 is inputed
    
    cout << endl << "The total sum: " << sum;   //Print result

    return 0;
}
