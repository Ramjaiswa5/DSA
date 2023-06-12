#include<iostream>
#include<vector>
using namespace std;


void display(vector<int>&arr, int idx){
    if (idx == arr.size())
    {
        return;
    }
    cout<<arr[idx]<<" ";
    display(arr,idx+1);
}

int main(){
    
    vector<int>arr = {1,2,3,4,5,6};
    display(arr,0);
    return 0;
}