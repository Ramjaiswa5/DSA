#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>&arr){
    int n =arr.size();

    for (int i = 0; i < n-1; i++)
    {
        int minEle = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minEle])
            {
                minEle = j;
            }
            
        }
        if (minEle != i)
        {
            swap(arr[minEle],arr[i]);
        }
        
    }
    
}

void insertionSort(vector<int>&arr){
    int n =arr.size();
    for (int i = 0; i < n; i++)
    {
        int value = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] > value){
            arr[j+1] = arr[j];
            j--; 
        }
        
        arr[j+1] = value;
    }
}

int main(){

    vector<int>arr ={ 2,4,5,1,9,7};
    //selectionSort(arr);
    insertionSort(arr);
    for(int ele: arr){
        cout<<ele<<" ";
    }
}