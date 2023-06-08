#include<iostream>
#include<vector>
using namespace std;

void input(vector<vector<int>>&arr){
    int n = arr.size();
    int m = arr[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
}

void display(vector<vector<int>>&arr){
    int n = arr.size();
    int m = arr[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

int minimum(vector<vector<int>>&arr){
    int minEle = (int)1e9;
    for(vector<int>ar:arr)
    {
        for (int ele:ar)
        {
            minEle = min(minEle,ele);
        }
        
    }
    return minEle;
}

int maximum(vector<vector<int>>&arr){
    int maxEle = -(int)1e9;
    for(vector<int>ar:arr)
    {
        for (int ele:ar)
        {
            maxEle = max(maxEle,ele);
        }
        
    }
    return maxEle;
}

int main(){
    int n,m;
    cout<<"enter row and coloum "<<endl;
    cin>>n>>m;

    vector<vector<int>>arr(n,vector<int>(m,0));
    input(arr);
    display(arr);

    cout<<minimum(arr)<<endl;
    cout<<maximum(arr)<<endl;
    
}