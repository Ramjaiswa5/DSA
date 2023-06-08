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

void waveTraversalLeftRight(vector<vector<int>>&arr){
    int n = arr.size();
    int m = arr[0].size();

    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else
        {
            for (int j = m-1; j >=0; j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        
    }
    cout<<endl;
    
}

void waveTraversalUpDown(vector<vector<int>>&arr){
    int n = arr.size();
    int m = arr[0].size();

    for (int j = 0; j < m; j++)
    {
        if (j%2==0)
        {
            for (int i = 0; i < n; i++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else
        {
            for (int i = n-1; i >=0; i--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        
    }
    cout<<endl;
    
}

void diagonalTravesal(vector<vector<int>>&arr){
    int n = arr.size();
    int m = arr[0].size();

    for (int gap = 0; gap < m; gap++)
    {
        for (int i = 0, j = gap; i < n && j<m; i++,j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
    }
    
}

void rotate90(vector<vector<int>>&arr){
    int n = arr.size();
    int m = arr[0].size();

    for (int i = 0; i < n; i++)
    {
        // transpose
        for (int j = i; j < m; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        
    }
    // reverse the column
    int j1 = 0;
    int j2 = m-1;

    while(j1<j2){
        for (int i = 0; i < n; i++)
        {
            int temp = arr[i][j1];
            arr[i][j1] = arr[i][j2];
            arr[i][j2] = temp;
        }

        j1++;
        j2--;
        
    }
    

}



int main(){

    int n,m;
    cout<<"enter row and coloumn "<<endl;
    cin>>n>>m;

    vector<vector<int>>arr(n,vector<int>(m,0));

    input(arr);
    display(arr);

    //waveTraversalLeftRight(arr);
    //waveTraversalUpDown(arr);
    //diagonalTravesal(arr);
    rotate90(arr);
    display(arr);

    return 0;
}