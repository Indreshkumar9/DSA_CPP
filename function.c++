#include<iostream.h>
using namespace std;
int add(int a,int b){
    return a+b;
}
int main(){
    int a;
    cout<<"Enter 1st no:";
    cin>>a;
    int b;
    cout<<"Enter 2nd no:";
    cin>>b;
    int sum=add(a,b);
    cout<<sum;
    return 0;
}
