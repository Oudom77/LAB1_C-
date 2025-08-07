#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: "; 
    cin>>num;
    if(num % 3 == 0){ //check the number is divisivle by 3 or not
        cout<<"The number is divisible by 3";
    }else{
        cout<<"The number is not divisible by 3";
    }
    return 0;
}