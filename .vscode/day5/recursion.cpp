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

void printDEcInc(int n){
    if (n==0)
    {
        return;
    }
    cout<<n<<endl;
    printDEcInc(n-1);
    cout<<n<<endl;
    
}

void printDEcOddIncEven(int n){
    //print decreasind odd and increasing even
    if (n==0)
    {
        return;
    }
    if(n%2!=0){
        cout<<n<<endl;
    }
    printDEcOddIncEven(n-1);
    if(n%2==0){
        cout<<n<<endl;
    }
}
    
int main(){

    //printDecreasing(5);
    //printIncreasing(5);
    //printDEcInc(5);
    printDEcOddIncEven(5);
    return 0;
}