#include<iostream>
using namespace std;

//given a "2*n" size tiles and we have to fill with 2*1 size tiles then find total possibe ways
//for n=4 there are 3 ways 1.all are horizontal 
//2.all are vertical
//3.some are horizontal and some are vertical

int tilling(int n){
    if(n==1) {
        return 1;
    }
    if(n==0){
        return 0;

    }
    return tilling(n-1)+tilling(n-2);
}

int main(){
    int n;
    cout<<"enter the number of n"<<endl;
    cin>>n;
    cout<<"total possible ways are "<<tilling(n)<<endl;
    return 0;
}