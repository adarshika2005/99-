#include<iostream>
using namespace std;
int main(){
    int num , rev=0;
    cout<<"enter a num ";
    cin>>num;
    while(num>0){
        rev= rev* 10 + num % 10;
        num/=10;
    }
    cout<<"reverse num "<<rev<<endl;
    return 0;
}