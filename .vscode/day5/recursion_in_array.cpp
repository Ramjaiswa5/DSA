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
int maxEle(vector<int>&arr, int idx){
    if (idx == arr.size())
    {
        return -(int)1e9;
    }
    int recAns = maxEle(arr, idx+1);
    int finalAns = max(arr[idx],recAns);
    
    return finalAns;
}

int minEle(vector<int>&arr, int idx){
    if (idx == arr.size())
    {
        return (int)1e9;
    }
    int recAns = minEle(arr, idx+1);
    int finalAns = min(arr[idx],recAns);
    
    return finalAns;
}

int find(vector<int>&arr, int idx, int data){
    if (idx == arr.size())
    {
        return -1;
    }

    if (arr[idx]==data)
    {
        return idx;
    }
    return find(arr,idx+1,data);
    
}

int main(){
    
    vector<int>arr = {1,2,3,4,5,6};
    display(arr,0);
    cout<<endl;
    //cout<<maxEle(arr,0);
    //cout<<minEle(arr,0);

    cout<<find(arr,0,25);

    return 0;
}