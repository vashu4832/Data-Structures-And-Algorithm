#include<iostream>
#define PI 3.14;

using namespace std;


int main(){

    float p, r, n;
    cout<<"Enter principal: ";
    cin>>p;
    cout<<"Enter Rate of Intrest: ";
    cin>>r;
    cout<<"Enter number of years: ";
    cin>>n;
    float SI = (p*r*n)/100;
    cout<<"Simple Intrest = "<<SI<<endl;
    return 0;
}