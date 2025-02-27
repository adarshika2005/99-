#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter the two num "<<endl;
    cin>>a>>b;
  temp=a;
  a=b;
  b=temp;
    cout<<"after swap"<<a<<b<<endl;
    return 0;
}