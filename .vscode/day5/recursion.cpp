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

int factorial(int n){
    if (n==0)
    {
        return 1;
    }
    
    int fnm1 = factorial(n-1);
    int fn = n*fnm1;

    return fn;

}

int power(int a, int b){
    if (b==0)
    {
        return 1;
    }
    int pb1 = power(a,b-1);
    int pb=a*pb1;

    return pb;
}
 
int main(){

    //printDecreasing(5);
    //printIncreasing(5);
    //printDEcInc(5);
    //printDEcOddIncEven(5);
    //cout<<factorial(5);
    cout<<power(3,3);
    return 0;
}