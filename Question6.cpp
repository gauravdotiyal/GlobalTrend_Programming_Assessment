#include<bits/stdc++.h>
using namespace std;
#define  MOD 1000000007

 

void factorial(int n,vector<long long > &dp){ 
   for(int i=2;i<=n;++i){
    dp[i]=(i*dp[i-1]);
    dp[i]=dp[i];
   } 

}

int main(){

    int n;
    cout<<"Enter the number you want to get the factorial of"<<endl;
    cin>>n;
    
    //create a dp vector to store value of each ith factorial
    vector<long long> dp(n+1,-1);
    dp[0]=1;
    dp[1]=1;
    
    cout<<"The factorial of the givent number is"<<endl;
    factorial(n,dp);
    cout<<dp[n]<<endl;


    return 0;
}