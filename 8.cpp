#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter the num"<<endl;
    cin>>n;
    for( int i=1;i<=n;i++)
    fact *=i;
cout<<"factorial  "<<fact<<endl;
return 0;

}