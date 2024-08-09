#include<iostream>
using namespace std;

//count the number of the possible path from starting point to ending point in the gameboard
//dice has number 1 to 6

int countpath(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count+= countpath(s+i,e);
    }
    return count;
}
int main(){
    int s,e;
    cout<<"enter the starting to calculate the total possible number of the path"<<endl;
    cin>>s>>e;
    cout<<"the total possible number of path is "<<countpath(s,e)<<endl;
}

