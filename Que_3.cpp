#include<iostream>
using namespace std;
int main(){

    int n;

    cout<<"Enter the number: ";
    cin>> n;

    int Sum=0,i;

    for(i=1;i<=n;i++){
        Sum = Sum + i;
    }
    cout<< Sum;

    return 0;
} 