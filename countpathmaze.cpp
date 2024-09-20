#include<iostream>
using namespace std;

//count all possible path in a maze to starting point(0,0) to ending point (n-1,n-1) here a maze is a matrix 2d 

int countpath(int n,int i,int j){
    if(j==n-1 && i==n-1){
        return 1;
    }
    if(i<0 || j<0 || i>=n || j>=n){
        return 0;
    }
    
    return countpath(n,i+1,j)+countpath(n,i,j+1);
}

int main(){
    int n;
    cout<<"enter the number of the n or size of maze"<<endl;
    cin>>n;
    cout<<"number of path is "<<countpath(n,0,0)<<endl;
   return 0;

}