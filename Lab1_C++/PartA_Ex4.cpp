#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter year: "; cin>>year;
    if(year % 4 == 0){  //check year can divisible by 4 or not
        cout<<"The year is a leap year.";
    }else{
        cout<<"The year is not a leap year.";
    }
    return 0;
}