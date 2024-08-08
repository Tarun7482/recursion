//This program is for remove all duplicates from a given string

#include<iostream>
#include<algorithm>
using namespace std;

void duplicates(string s){

    if(s.length()==0){
        return;
    }
    string str=s.substr(1);
    
    if(s[0]==str[0]){
     duplicates(str);}
    else
   { cout<<s[0]<<" ";
   duplicates(str); }
}

string remove_duplicates(string s){
     string ans="";
     int i,j;
     for(i=0;i<s.length();i++){
        j=0;
        for(j=0;j<=i;j++){
            if(s[i]==s[j]){
                break;
            }
        }
        if(i==j){
            ans+=s[i];
        }
    }
     stable_sort (ans.begin(),ans.end());
    cout<<ans;


}




int main(){
   string s;
   cin>>s;
  // duplicates(s);
   remove_duplicates(s);
   return 0;

}