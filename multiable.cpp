#include<iostream>
using namespace std;
int main(){
    int mul = 1;
    int a;
    cin>>a;
    for(int i = a; i>=1; i--){
        mul= mul*i;
    }

    cout << "mul = " <<mul<<endl;


return 0;
}