#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

int main(){
    // Print first N natural numbers
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     cout<<i<<" ";
    // }



    // Print sum of first N natural numbers
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // int sum = 0;
    // for(int i=1;i<=n;i++){
    //     sum += i;
    // }
    // cout<<"Sum till "<<n<<" is "<<sum<<endl;

    //////////////////////////////// WHILE LOOP /////////////////////////////////////////////////////
    // int count = 1;
    // while(count<=10){
    //     cout<<count<<" ";
    //     count++;
    // }



    // Print number from N to 1
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // for(int i=n;i>=1;i--){
    //     cout<<i<<" ";
    // }



    // Print the sum of digit of a number
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // int sum = 0;
    // while(n>0){
    //     int digit = n % 10;
    //     sum += digit;
    //     n /= 10;
    // }
    // cout<<"Sum of digit is "<<sum<<endl;



    // Print the sum of Odd digit of a Number
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // int sum = 0;
    // while(n>0){
    //     int digit = n % 10;
    //     if(digit%2 != 0){
    //         sum += digit;
         
    //     }
    //     n /= 10;
    // }
    // cout<<"Sum of digit is "<<sum<<endl;


    // Print the digit of a number in reverse
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // int rev = 0;
    // while(n>0){
    //     int digit = n % 10;
    //     rev = rev * 10 + digit;
    //     n /= 10;
    // }
    // cout<<"Reverse = "<<rev<<endl;



    // WAP where user keeps entering the number till they enter multiple of 10
    // int n;
    // cout<<"Enter number: ";
    // while(true){
    //     if(n % 10 == 0){
    //         break;
    //     } else {
    //         cin>>n;
    //     }
    // }



    // WAP to show numbers entered by user except multiple of 10
    // int n;
    
    // while(true){
    //     cout<<"Enter number: ";
    //     cin>>n;
    //     if(n % 10 == 0){
    //         continue;
    //     }
        
    //     cout<<"You entered: "<<n<<endl;
    // }



    // Check if a number is prime or not
    int n;
    cout<<"Enter number: ";
    cin>>n;
    bool isPrime = true;
    for(int i=2;i<sqrt(n);i++){
        if(n % i == 0){
            isPrime = false; 
            break;
        }
    }
    if(isPrime == true){
        cout<<n<< " is a prime number."<<endl;
    } else {
        cout<<n<<" is not prime number."<<endl;
    }
    
    

    return 0;
}