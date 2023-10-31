#include<iostream>
using namespace std;
int swapPointer(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=3;
    int b=1;
    cout<<"The value before swapping is "<<a<<b<<endl;
    swapPointer(&a,&b);
    cout<<"The value after swapping is "<<a<<b<<endl;

    return 0;
}