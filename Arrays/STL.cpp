#include<bits/stdc++.h>
using namespace std;

void pairEx(){
    pair<int, int> p = {2,5};
    cout<<p.first<<" "<<p.second<<"\n";

    pair<int, pair<int,int>> q = {2,{4,9}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<"\n";

    pair<int, int> arr[] = {{1,2}, {3,5}, {4,8}};
    cout<<arr[2].first<<"\n";
}

int main(){

    pairEx();

    return 0;
}