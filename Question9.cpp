/////////////////////////////////////////////////
//     GAURAV DOTIYAL                          //
//     gauravdotyal33@gmail.com                //
/////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int maxDiff(int n,vector<int> arr){
    
   // find the maximum and minimum element by inbuild functions
   int mx=*max_element(arr.begin(),arr.end());
   int mn=*min_element(arr.begin(),arr.end());

   return mx-mn;
}

int main(){
    
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the values of the array"<<endl;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    cout<<"The max difference between two elements of the array is "<<endl;
    cout<<maxDiff(n,arr)<<endl; 

    return 0; 
}