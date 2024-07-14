#include<bits/stdc++.h>
using namespace std;

long long sumOfDigits(int m){

    long long ans=0;
    int n=m;
    while(n!=0){
        int dig=n%10;
        ans+=dig;
        n=n/10;
    }

    return ans;
}

int main(){

    long long n;
    cout<<"Enter the number"<<endl;
    cin>>n;


   cout<<"The sum of all the digits of the number is "<<endl;
   cout<<sumOfDigits(n)<<endl;

   return 0;

}
