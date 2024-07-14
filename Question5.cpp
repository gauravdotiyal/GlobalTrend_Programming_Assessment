#include<bits/stdc++.h>
using namespace std;


void reversearr(vector<int> &arr,int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }  
}

void rotateArray(vector<int> &arr,int k){
     int n=arr.size();
     k=k%n; //if k is bigger than the size of array
     reversearr(arr,0,n-k-1);
     reversearr(arr,n-k,n-1);
     reversearr(arr,0,n-1);
 
}

int main(){

    int n,k;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the value of k steps for rotation"<<endl;
    cin>>k;


    vector<int> arr(n);
    cout<<"Enter the value of array"<<endl;
    for(int i=0;i<n;++i) cin>>arr[i];

    //Print array before rotation
    cout<<"Array before the rotation"<<endl;
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }cout<<endl;
   
    rotateArray(arr,k);

    //Print the array
    cout<<"Array after the rotation"<<endl;
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }cout<<endl;


    return 0;
}