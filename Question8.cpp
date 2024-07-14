#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
   if(a==0){
    return b;
   }
   if(b==0){
    return a;
   }
   
   int x=a;
   a=b%a;
   b=x;
   a=min(a,b);
   b=max(a,b);
   gcd(a,b);

}


int main(){

    int a,b;
    cout<<"Enter the Numbers you want gcd of "<<endl;
    cin>>a>>b;
    
    if(a>b){
        swap(a,b);
    }
    
    cout<<"The gcd of a " <<a<<" and " << b<<" b is"<<endl;
    cout<<gcd(a,b)<<endl;
    return 0;
}
