#include<bits/stdc++.h>
using namespace std;

bool isAllAlphabet(string s){
    for(int i=0;i<s.length();++i)
    {
        if(!isalpha(s[i])){
            return false;
        }
    }

    return true;
}

int main(){

    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    
    if(isAllAlphabet(s)){
        cout<<"YES the string contains all letters as alphabet"<<endl;
    }
    else{
        cout<<"NO the string doesnt contains all the letters as alphabet"<<endl;
    }
    
    return 0;
}