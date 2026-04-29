#include<iostream>
#define PI 3.14;

using namespace std;


int main(){

    float pencil, eraser, pen;
    cout<<"Enter cost of pencil: ";
    cin>>pencil;
    cout<<"Enter cost of Eraser: ";
    cin>>eraser;
    cout<<"Enter cost of pen: ";
    cin>>pen;
    float total = pen+pencil+eraser;
    cout<<"Total bill = "<<total<<endl;

    cout<<"Total after GST = "<<(total*0.18)+total<<endl;

    return 0;
}