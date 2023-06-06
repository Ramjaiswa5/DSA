#include<iostream>
using namespace std;

void even_odd(int n){
    if(n%2==0){
        cout<<n<<" is even "<<endl;
    }
    else{
        cout<<n<<" is odd "<<endl;
    }
}

int reverse(int n){
    int ans = 0;
    while (n!=0)
    {
        int last_digit = n%10;
        n=n/10;
        ans=ans*10 + last_digit;
    }
    return ans;
}




int main(){
int n;
cout<<"enter the number"<<endl;
cin>>n;

// even_odd(n);

cout<<reverse(n);

}