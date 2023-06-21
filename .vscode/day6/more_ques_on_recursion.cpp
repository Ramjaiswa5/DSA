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

int mazePath_HVD_Jump(int sr, int sc, int er, int ec, string ans){
    if (sr == er && sc == ec)
    {
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    // Horizontal Direction
    for(int jump =1; sc+jump <= ec; jump++)
    {
        count+= mazePath_HVD_Jump(sr,sc+jump,er,ec, ans+"H" + to_string(jump));
    }
     // Vertical Direction
    for(int jump =1; sr+jump <= er; jump++)
    {
        count+= mazePath_HVD_Jump(sr+jump,sc,er,ec, ans+"V" + to_string(jump));
    }
     // Diagonal Direction
    for(int jump =1; sc+jump <= ec && sr+jump<=er; jump++)
    {
        count+= mazePath_HVD_Jump(sr+jump,sc+jump,er,ec, ans+"D" + to_string(jump));
    }
    return count;
}

int main(){
    string str = "aba";
    //cout<<permutation(str,"");
    //cout<<permutationWithoutDuplicate(str,"");
    //cout<<mazePath_HVD(0,0,2,2,"");
    cout<<mazePath_HVD_Jump(0,0,2,2,"");

    return 0;
}