#include<iostream>
using namespace std;
int main(){

    int n;
    int a = 1;
    int w;
    cout <<"Enter a number: ";
    cin >> n;
    
    cout <<"Enter power : ";
    cin >> w;
    
    for (int i = 1; i <= w; i++){
        a = a * n;

    }

    cout << a;
    
    return 0;
    
}