#include<iostream>
using namespace std;
int main(){

    int a=4,b=6,c=10;

    if((a>b)&&(a>c)){
        cout<<"A is Greater";
    }
    else if((b>a)&&(b>c)){
        cout<<"B is Greater";
    }
    else
        cout<<"C is Greater";
        
    return 0;
}
