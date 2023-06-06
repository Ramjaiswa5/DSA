#include<iostream>
using namespace std;
int main() {
    {
        string name;
        int n;
        cout<<"enter number of time to be printed";
        cin>>n;
        cout<<"enter your name ";
        cin>> name;
       
        
        for (int i = 0; i < n; i++)
        {
            cout<<name<<endl;
        }
    }

    return 0;
}