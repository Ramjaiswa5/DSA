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


void addTwoArray(vector<int>&a, vector<int>&b){
    int n = a.size();
    int m = b.size();
    vector<int>ans(max(n,m) + 1 , 0);
    int i = n-1;
    int j = m-1;
    int k = ans.size()-1;
    int carry = 0;
    while (k>=0)
    {
        int sum = carry;
        if(i>=0)
        {
            sum += a[i];
            i--;
        }
        if (j>=0)
        {
            sum += b[j];
            j--;
        }
        ans[k] = sum%10;
        k--;
        carry = sum/10;
        
    }
    for (int l = 0; l < ans.size(); l++)
    {
        cout<<ans[l]<<" ";
    }
    
}

void subArray(vector<int>&arr){
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            for (int k = 0; k <= j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
}

int main(){
    //int n;
    //cout<<"enter the value of n "<<endl;
    //cin>>n;

    vector<int>arr = {2,3,8,6,1};
    vector<int>arr1 = {2,3,8,2,2};
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

    //addTwoArray(arr,arr1);

    subArray(arr);

    return 0;
}
