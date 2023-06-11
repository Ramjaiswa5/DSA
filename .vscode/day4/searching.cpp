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

bool binarySearch(vector<int>&arr, int data){
    int n = arr.size();
    int si = 0;
    int ei = n-1;

    while(si <= ei){
        int mid = (si+ei)/2;

        if (arr[mid] == data)
        {
            return true;
        }
        else if (arr[mid]< data)
        {
            si = mid+1;
        }
        else
        {
            ei = mid-1;
        }
           
    }
    return false;
}

int main(){

    vector<int>arr ={ 8,2,4,5,1,9,7};
    //cout<<linearSearch(arr, 5);
    cout<<binarySearch(arr,8);

    return 0;
}