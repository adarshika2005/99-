#include<iostream>
using namespace std;
int main(){
    int a,b,c ;
    cout<<"enter three num "<<endl;
    cin>>a>>b>>c;
    if(a>=b&&a>=c)
    cout<<"largest  "<<a<<endl;
else if (b>=a&&b>=c)
cout<<"largest  "<<b<<endl;
if(c>=a&&c>=b)
cout<<"largest  "<<c<<endl;
return 0;
}