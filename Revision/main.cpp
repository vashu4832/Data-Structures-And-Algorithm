#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter number: ";
    cin >> num;

    int revNum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        revNum = revNum * 10 + digit;
        num /= 10;
    }
    cout<<revNum<<endl;

    return 0;
}