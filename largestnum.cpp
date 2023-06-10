#include<iostream>
using namespace std;
int main(){

    int a, b, e;
    cout<<"number one:";
    cin>> a >> b >> e;
    if(a >= b && a >= e){
    cout <<"Largest number:" << a;
    }
    else if(b >= a && b >= e)
    {
    cout <<"Largest number:" << b;
    }
    else
    {
    cout <<"Largest number:" << e;
    }


    return 0;

}