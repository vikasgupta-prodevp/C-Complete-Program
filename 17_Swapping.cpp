#include<iostream>
using namespace std;
void swapPointer(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=4;
    int b=3;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swapPointer(&a,&b);   //
    
    cout<<"The value of a is "<<a<< " and the value of b is "<<b<<endl;
    return 0;
}