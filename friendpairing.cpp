#include<iostream>
using namespace std;

/*Given n friends, each one can remain single or can be paired up with some other friend.
 Each friend can be paired only once.
  Find out the total number of ways in which friends can remain single or can be paired up. */

  /*For n-th person there are two choices:1) n-th person remains single, 
  we recur for f(n – 1)2) n-th person pairs up with any of the remaining n – 1 persons.
   We get (n – 1) * f(n – 2)Therefore we can recursively write f(n) as:f(n) = f(n – 1) + (n – 1) * f(n – 2)*/

int fpp(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return fpp(n-1)+(n-1)*fpp(n-2);
}

int main(){
    int n;
    cout<<"Enter the number of friends: ";
    cin>>n;
    cout<<"Total number of ways: "<<fpp(n);
    return 0;
}