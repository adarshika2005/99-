#include<iostream>
using namespace std;
int maxEl(int a,int b)
{
    return a<b;
}
int main(){
int a,b;
cin>>a>>b;
cout<<endl<<maxEl(a,b)<<endl;
}