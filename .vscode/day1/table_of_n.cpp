#include<iostream>
using namespace std;

void printTableOfN(int n){
    for (int i = 1; i <=10; i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    
}

int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;

    printTableOfN(n);
}