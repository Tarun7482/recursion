#include<iostream>
using namespace std;

void tower_of_hanoi(int n,char src,char helper,char des){
     
     if(n>0){
       tower_of_hanoi(n-1,src,des,helper);
        cout<<"Disk no.  "<<n<<" move from  "<<src<<"  to  "<<des<<endl;
        tower_of_hanoi(n-1,helper,src,des);
     }
    else{
        return;
    }


}
int main(){
    int n;
    char src,helper,des;
    cout<<"Enter the number of disks ,source ,helper and destination disk name also"<<endl;
    cin>>n>>src>>helper>>des;
    tower_of_hanoi(n,src,helper,des);
    return 0;
}