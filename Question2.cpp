/////////////////////////////////////////////////
//     GAURAV DOTIYAL                          //
//     gauravdotyal33@gmail.com                //
/////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;


int longestSubstrWithoutRepeat(string s){
    int ans=0;
    map<char,int> m; 
  
    int j=0;

    for(int i=0;i<s.length();++i){
        char firstchar=s[i];
        
        if(m.find(firstchar)!=m.end() && m[firstchar]>=j){ 
            j=m[firstchar]+1;
        } 

         m[firstchar]=i;
         ans=max(ans,i-j+1);
    }
    return ans;
}

int main(){

   string s;
   cout<<"Enter the string"<<endl;
   cin>>s;

   int result=longestSubstrWithoutRepeat(s);

   cout<<result<<endl;

   return 0;
}

 