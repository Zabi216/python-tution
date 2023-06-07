#include<iostream>
using namespace std;
int main(){
float e,a,b;
cout<<"enter first number"<<endl;
cin>>a;
cout<<"enter secd number"<<endl;
cin>>b;
cout<<"Num:"<<endl;

cin>>e;

if(e==1){
     cout<<"addtion of two numbers:"<<a+b<<endl;
}else if(e==2){
     cout<<"Substraction of two Numbers:"<<a-b<<endl;
}else if(e==3){
     cout<<"Multiplication of two numbers:"<<a*b<<endl;
}else if(e==4){
     cout<<"Division of two numbers:"<<a/b<<endl;
}
else{
     cout<<"invlaid number"<<endl;
}

return 0;
}