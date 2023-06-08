#include<iostream>
using namespace std;

bool palindrome(string str){
    int si =0;
    int ei = str.length()-1;

    while (si<ei)
    {
        if (str[si++] != str[ei--])
        {
            return false;
        }
        
    }
    return true;
    
}

void getAllSubString(string str){
    for (int i = 0; i < str.length(); i++)
    {
        for (int len = 1; len <= str.length(); len++)
        {
            cout<<(str.substr(i,len))<<endl;
        }
        
    }
    
}

int main(){
    string str;
    cout<<"enter string"<<endl;
    cin>>str;
    //cout<< str<<endl;

    //cout<<palindrome(str)<<endl;

    getAllSubString(str);

    return 0;
}