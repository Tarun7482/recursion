#include<iostream>
using namespace std;

//This programm will be give all the permuation of the given string 

string permuataion(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ans;

    }
 for(int i=0;i<3;i++){
    char ch=s[i];
    string ros=s.substr(0,i)+s.substr(i+1);
    permuataion(ros,ans+ch);
 }


}
int main(){
    string s;
    cout<<"enter the string to get permutaiton";
    cin>>s;
    permuataion(s,"");
    return 0;
}