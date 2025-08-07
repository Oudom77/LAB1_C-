// use while loop to calculate and print the sum of number 1 tp 10
#include <iostream>
using namespace std;
int main(){
    int sum=0;
    // We sum all number that start from 1 to 10
    for(int i=1;i<=10;i++){
        sum+=i;
    }
    cout<<"The result is "<<sum<<endl;
    return 0;
}