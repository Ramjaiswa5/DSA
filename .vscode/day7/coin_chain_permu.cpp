#include<iostream>
#include<vector>
using namespace std;

int coinChainPermu_10(vector<int>&coins,int tar, string ans){
    if(tar==0){
        cout<<ans<<endl;
        return 1;
    }
    int count = 0;
    for(int i =0; i<coins.size();i++){
        if (tar - coins[i] >=0 )
        {
            count+= coinChainPermu_10(coins,tar - coins[i],ans + to_string(coins[i]));
        }
        
    }
    return count;
}

int main(){
    vector<int>coins={2,3,5,7};
    cout<<coinChainPermu_10(coins,10 ,"");
}