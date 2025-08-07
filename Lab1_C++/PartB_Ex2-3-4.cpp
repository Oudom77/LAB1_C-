#include <iostream>
using namespace std;
int main(){
    int i=10;
    while(i>0){
    if(i!=2){ // we don't want show number 2 , so when i not equal 2 it will show value of i but i=2 it's not do in loop
        if(i==4){ //we skip number  so when i eqaul 4 it'll show  It's number 4 and 
            cout<<"It's numebr 4!"<<endl;
        }else{ // i not eqaul 4 it'll show value i
          cout<<i<<endl;
        }
    }
    i--;
}
    return 0;
}