#include<iostream>
using namespace std;

int add(int x, int y){
    return x+y;
}

int sub(int x, int y){
    return x-y;
}

int mul(int x, int y){
    return x*y;
}

int divide(int x, int y){
    return x/y;
}

int main(){
    int a,b;

    cout<<"enter two number "<<endl;
    cin>>a>>b;

    cout<<"addition is "<<add(a,b)<<endl;
    cout<<"subtraction is "<<sub(a,b)<<endl;
    cout<<"multiplication is "<<mul(a,b)<<endl;
    cout<<"divident is "<<divide(a,b)<<endl;
}
