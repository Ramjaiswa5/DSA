#include<iostream>
using namespace std;

void printDecreasing(int n){
    if (n==0)
    {
        return;
    }
    cout<<n<<endl;
    printDecreasing(n-1);
    
}

void printIncreasing(int n){
    if (n==0)
    {
        return;
    }
    printIncreasing(n-1);
    cout<<n<<endl;
    
}
int main(){

    //printDecreasing(5);
    printIncreasing(5);
    return 0;
}