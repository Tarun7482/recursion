#include<iostream>
#include<string>
#include<algorithm>
using namespace std;





void substring(string s,string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return ;
}
    char ch=s[0];
    int code=ch;
   string ros=s.substr(1);
   substring(ros,ans);
   substring(ros,ans+ch);
   substring(ros,ans+ to_string(code));
}

int main(){
    string s;
    cin >> s;
    substring(s ,"");
    return 0;
}