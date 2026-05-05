#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    // long long counter = 0;
    // while(n>0){
    //     long long dig = n%10;
    //     counter++;
    //     n /= 10;
    // }
    // cout<<counter<<endl;


    // int revNum = 0;
    // while(n>0){
    //     int lastDigit = n%10;
    //     revNum = 10*revNum + lastDigit;
    //     n /= 10;
    // }
    // cout<<"Reversed Number: "<<revNum<<endl;



    // int num = n;
    // int revNum = 0;
    // while(n>0){
    //     int lastDigit = n%10;
    //     revNum = 10*revNum + lastDigit;
    //     n /= 10;
    // }
    
    // if(num == revNum){
    //     cout<<"It is palindrome number";
    // } else {
    //     cout<<"It is not a palindrome number.";
    // }


    // int num = n;
    // int armNum = 0;
    // while(n>0){
    //     int lastDig = n % 10;
    //     armNum += (lastDig*lastDig*lastDig);
    //     n /= 10;
    // }
    
    // if(num == armNum){
    //     cout<<"Armstrong Number"<<endl;
    // } else {
    //     cout<<"Not an armstrong number"<<endl;
    // }


    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i%n != 0){
            cout<<n<<" ";
        }
        }
        
    }
    return 0;
}