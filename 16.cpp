#include<iostream>
using namespace std;
int main(){
    int n ,a=0,b=1,next;
    cout<<"enter the num of term ";
    cin>>n;
    cout<<"fibonacci series "<<a<<" "<<b<<" ";
    for(int i=2;i<=n;i++){
        next =a+b;
        cout<<next<<"";
        a=b;
        b=next;

    }cout<<endl;
    return 0;
}