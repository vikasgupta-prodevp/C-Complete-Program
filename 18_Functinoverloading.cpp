#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int sum(int a,int b, int c){
    return a+b+c;
}

int main(){
    cout<<"The sum of 3 and 5 is "<<3+5<<endl;
    cout<<"The sum of 3 and 5 and 2 is "<<3+5+2<<endl;
    return 0;
}