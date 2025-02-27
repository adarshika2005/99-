#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the three angle of triangle"<<endl;
    cin>>a>>b>>c;
    if(a+b+c==180)
    cout<<"valid triangle"<<endl;
else
cout<<"invalid triangle"<<endl;
return 0;
}