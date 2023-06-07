#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"enter your first num"<<endl;
    cin>>a;
    cout<<"enter secod num"<<endl;
    cin>>b;
    cout<<a+b<<endl;
    if (a%2 ==0){
        cout<<"a is even number where a ="<<a<<endl;
    }else{
        cout<<"number is odd"<<endl;
    }
    return 0;
}