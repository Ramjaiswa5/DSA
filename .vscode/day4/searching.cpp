#include<iostream>
#include<vector>
using namespace std;


int linearSearch(vector<int>&arr, int data){
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]==data)
        {
            return i;
        }
        
    }
    return -1;
    
}

int main(){

    vector<int>arr ={ 2,4,5,1,9,7};
    cout<<linearSearch(arr, 5);

    return 0;
}