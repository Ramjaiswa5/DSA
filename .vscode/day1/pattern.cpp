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

void pattern4(int n){
     for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i+j==n+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern5(int n){
    int st= n/2 +1;
    int sp= 1;
    for (int i = 1; i <= n ; i++)
    {

        for (int j = 1; j <= st; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= sp; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= st; j++)
        {
            cout<<"*";
        }

        if (i<=n/2)
        {
            st--;
            sp+=2;
        }
        else
        {
            st++;
            sp-=2;
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
    //pattern3(n);
    //pattern4(n);
    pattern5(n);
}