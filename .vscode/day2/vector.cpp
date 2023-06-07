#include<iostream>
#include<vector>
using namespace std;

void  input(vector<int>&arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    
}
void  display(vector<int>&arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int max(vector<int>&arr){
    int maxEle = -(int)1e9;
    for(int ele: arr){
        if(ele>maxEle){
            maxEle = ele;
        }
    }
    return maxEle;
}

int min(vector<int>&arr){
    int minEle = (int)1e9;
    for(int ele: arr){
        if(ele<minEle){
            minEle = ele;
        }
    }
    return minEle;
}

bool findData(vector<int>&arr, int data){
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]==data)
        {
            return true;
        }
        
    }
    return false;
    
}

void swap(vector<int>&arr, int i, int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void reverse(vector<int>&arr, int si, int ei){
    while(si<ei){
        swap(arr,si,ei);
        si++;
        ei--;
    }
}




int main(){
    //int n;
    //cout<<"enter the value of n "<<endl;
    //cin>>n;

    vector<int>arr = {2,3,8,6,1};
    //input(arr);
    display(arr);

    //cout<<max(arr)<<endl;
    //cout<<min(arr)<<endl;

    //int data = 7;
    //cout<<findData(arr,data);

    //swap(arr,1,4);
    //display(arr);

    //reverse(arr,0,arr.size()-1);
    //display(arr);


    return 0;
}
