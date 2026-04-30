#include<iostream>
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
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    cout<<"Sum till "<<n<<" is "<<sum<<endl;

    return 0;
}