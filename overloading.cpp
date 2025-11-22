#include<iostream>
using namespace std;
class mathematics{
    public:
    int a;
    int b;
    int c;
    void addition(){
     cout<<"enter num1:"<<endl;
     cin>>a;
     cout<<"enter num2:"<<endl;
     cin>>b;
     cout<<"addition of num1&num2 is:"<<a+b<<endl;
    }
    void multiplication(int a,int b,int c){
     
     cout<<"multiplication of num1,num2&num3 is:"<<a*b*c<<endl;
    }
    void logical(int a,int b){
     
     if(a>b){
        cout<<"a is greater "<<endl;
     }
     else{
        cout<<"b is greater "<<endl;
     }
    }
};
int main(){
    mathematics m1;
    m1.addition();
    m1.multiplication(5,7,2);
    m1.logical(4,2);
}