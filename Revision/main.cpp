#include<iostream>
#define PI 3.14;

using namespace std;


int main(){

    // Check whether the number is Armstrong or not
    int num;
    cout<<"Enter number: ";
    cin>>num;

    int n = num;

    int digit1 = n%10;
    n /= 10;
    int digit2 = n%10;
    n /= 10;
    int digit3 = n%10;
    n /= 10;
    int armstrongNumber = (digit1*digit1*digit1)+(digit2*digit2*digit2)+(digit3*digit3*digit3);
    if(armstrongNumber == num){
        cout<<num<< " is a Armstrong number."<<endl;
    } else {
        cout<<num<<" is not a Armstrong number."<<endl;
    }

    return 0;
}