#include<iostream>
using namespace std;
int main(){

    int year;
    cout<<"Enter the Year: ";
    cin>>year;

    if(year%100 == 0){

        cout<<year<<"Leap Year ";
    }
    else if((year%4 == 0)&&(year%100 != 0)) {

        cout<<year<<" is a Leap Year";
    }
    else{
        cout<<year<<"not a Leap Year";
    }
    return 0;
}