#include<iostream>

using  namespace std;

string keypads[]={""," ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void keypad(string s,string ans){
     if (s.length()==0){
        cout<<ans<<endl;
        return;
     }
     string code=keypads[s[0]-'0'];
     string ros=s.substr(1);

     for(int i=0;i<code.length();i++){
       keypad(ros,ans+code[i]);
     }


}
int main(){
    keypad("23","");
}