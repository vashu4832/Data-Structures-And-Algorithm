#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n1, n2;
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;

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

    // for(int i=1;i<=sqrt(n);i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //         if(i%n != 0){
    //         cout<<n<<" ";
    //     }
    //     }

    // }

    // Check for prime number

    // if(n<=1){
    //     cout<<n<<" is not a Prime Number."<<endl;
    // } else {
    //     bool isPrime = true;

    //     for(int i=2;i<=sqrt(n);i++){
    //         if(n % i == 0){
    //             isPrime = false;
    //             break;
    //         }
    //     }
    //     if(isPrime == false){
    //         cout<<n<<" is not a Prime Number."<<endl;
    //     } else {
    //         cout<<n<<" is a Prime Number."<<endl;
    //     }
    // }

    // WAP to find GCD/HCF
    while (n1 > 0 && n2 > 0){
        if (n1 > n2){
            n1 = n1 % n2;
        } else{
            n2 = n2 % n1;
        }
    } 
    if (n1 == 0){
        cout << n2 << " is GCD" << endl;
    } else {
        cout << n1 << " is GCD" << endl;
    }
    return 0;
}