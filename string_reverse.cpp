#include<iostream>
using namespace std;

void reverse(string s){
     
     if (s.length()==0){
        
        return ;
     }
    string  str=s.substr(1);
     reverse(str);
     cout<<s[0]<<endl;


}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    reverse(s);
    return 0;
}