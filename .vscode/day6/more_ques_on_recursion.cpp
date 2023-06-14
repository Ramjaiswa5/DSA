#include<iostream>
#include<vector>
using namespace std;

int permutation(string str, string ans){
    if (str.length() == 0)
    {
        cout<<ans<<endl;
        return 1;
    }
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        string ros = str.substr(0,i) + str.substr(i+1);
        count+=permutation(ros,ans+ch);

    }
    return count;
    
}

int permutationWithoutDuplicate(string str, string ans){
    if (str.length()==0)
    {
        cout<<ans<<endl;
        return 1;
    }
    int count = 0;
    vector<bool>vis(26,0);
    for (int i = 0; i < str.length(); i++)
    {
        char ch=str[i];
        if (!vis[ch - 'a'])
        {
            vis[ch - 'a']=true;
            string ros = str.substr(0,i) + str.substr(i+1);
            count+=permutationWithoutDuplicate(ros,ans+ch);
        }
        
    }
    
    return count;
}

// maze path_HVD(0,0,2,2)
int mazePath_HVD(int sr, int sc, int er, int ec, string ans){
    if (sr == er && sc == ec)
    {
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    // Horizontal Direction
    if (sc+1 <= er)
    {
        count+= mazePath_HVD(sr,sc+1,er,ec, ans+"H");
    }
     // Vertical Direction
    if (sr+1 <= er)
    {
        count+= mazePath_HVD(sr+1,sc,er,ec, ans+"V");
    }
     // Diagonal Direction
    if (sc+1 <= ec && sr+1 <= er)
    {
        count+= mazePath_HVD(sr+1,sc+1,er,ec, ans+"D");
    }
    return count;
}


int main(){
    string str = "aba";
    //cout<<permutation(str,"");
    //cout<<permutationWithoutDuplicate(str,"");
    cout<<mazePath_HVD(0,0,2,2,"");

    return 0;
}