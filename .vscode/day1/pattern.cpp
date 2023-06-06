#include<iostream>
using namespace std;

void pattern1(int n){
    for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}

void pattern2(int n){
    for (int i = 1; i <= n ; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}


void pattern3(int n){
    for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i==j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"enterv the value of n "<<endl;
    cin>>n;

    //pattern1(n);
    //pattern2(n);
    pattern3(n);
}