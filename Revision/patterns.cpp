#include<bits/stdc++.h>
using namespace std;

int main(){


    // Q1 - * * *
         // * * *
         // * * *

    int n;
    cout<<"Enter n: ";
    cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



    /*
    Q2. *
        * *
        * * *
        * * * *
        * * * * *
    */
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    /*
    Q3. 1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
    */
//    for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//    }


    /*
    Q4. 1
        2 2
        3 3 3
        4 4 4 4
    */
//    for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//    }


    /*
    Q5. * * * * *
        * * * *
        * * *
        * *
        * 
    */
//    for(int i=n;i>=1;i--){
//     for(int j=i;j>=1;j--){
//         cout<<"* ";
//     }
//     cout<<endl;
//    }


    /*
    Q6. 1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1
    */
    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    Q7.           *
                * * *
              * * * * *
            * * * * * * *
          * * * * * * * * *
    */
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=2*i-1;j++){
    //         cout<<"* ";
    //     } 
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }
    //     cout<<endl;
    // }


    /*
    Q8. * * * * * * * * *
          * * * * * * *
            * * * * *
              * * *
                *
    */
//    for(int i=1;i<=n;i++){
//     for(int j=1;j<=i-1;j++){
//         cout<<"  ";
//     }
//     for(int j=i;j<=2*n-i;j++){
//         cout<<"* ";
//     }
//     for(int j=1;j<=i-1;j++){
//         cout<<"  ";
//     }
//     cout<<endl;
    
//    }



    /*
    Q9.             *
    ``            * * *
                * * * * *
              * * * * * * *
              * * * * * * *
                * * * * *
                  * * *
                    *
    */
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=2*i-1;j++){
    //         cout<<"* ";
    //     } 
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i-1;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=i;j<=2*n-i;j++){
    //         cout<<"* ";
    //     }
    //     for(int j=1;j<=i-1;j++){
    //         cout<<"  ";
    //     }
    //     cout<<endl;
        
    // }
    

    /*
    Q10. *
         * *
         * * *
         * * * *
         * * * * *
         * * * *
         * * *
         * *
         * 
    */
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=n-1;i++){
    //     for(int j=n-1;j>=i;j--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    /*
    Q11. 1
         0 1
         1 0 1
         0 1 0 1
         1 0 1 0 1
    */
    // for(int i=1;i<=n;i++){
    //     int sum = 0;
    //     for(int j=1;j<=i;j++){
    //         sum = i+j;
    //         if(sum % 2 == 0){
    //             cout<<"1 ";
    //         } else {
    //             cout<<"0 ";
    //         }
    //     }
    //     cout<<endl;
    // }

    /*
    Q12. 1             1
         1 2         2 1
         1 2 3     3 2 1
         1 2 3 4 4 3 2 1
    */
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     for(int j=1;j<=2*n-2*i;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=i;j>=1;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    Q13. 1
         2 3
         4 5 6
         7 8 9 10
         11 12 13 14 15
    */
    // int count = 1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }




    /*
    Q14. A
         A B 
         A B C
         A B C D 
         A B C D E
    */
//    int ch = 'A';
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<char(ch)<<" ";
//             ch++;
//         }
//         ch = 'A';
//         cout<<endl;
//     }




    /*
    Q15. A B C D E 
         A B C D 
         A B C 
         A B 
         A 
    */
    // int ch = 'A';
    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<char(ch)<<" ";
    //         ch++;
    //     }
    //     ch = 'A';
    //     cout<<endl;
    // }





    /*
    Q16. A
         B B
         C C C 
         D D D D 
         E E E E E 
    */
//    char ch = 'A';
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<char(ch)<<" ";
//         }
//         ch++;
//         cout<<endl;
//     }

    
    

    // Q17.
    // for(int i=0;i<n;i++){
    //         for(int j=1;j<=n-i;j++){
    //             cout<<"  ";
    //         }
    //         char ch = 'A';
    //         int breakpoint = (2*i+1)/2;
    //         for(int j=1;j<=2*i+1;j++){
    //             cout<<char(ch)<<" ";
    //             if(j <= breakpoint){
    //                 ch++;
    //             } else {
    //                 ch--;
    //             }
    //         } 
    //         for(int j=1;j<=n-i;j++){
    //             cout<<"  ";
    //         }
    //         cout<<endl;
    //     }


    // Q18.
    // for(int i=1;i<=n;i++){
    //     char ch = 'A' + (n-i);
    //     for(int j=1;j<=i;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }





    // Q19.
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<"* ";
    //     }
    //     for(int j=1;j<=2*i-2;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<"* ";
    //     }
    //     for(int j=1;j<=2*i-2;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }





    // Q20.
    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<"* ";
    //     }
    //     for(int j=1;j<=2*i-2;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=2;i<=n;i++){
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<"* ";
    //     }
    //     for(int j=1;j<=2*i-2;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // Q21.
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==1 || i==n || j==1 || j==n){
    //             cout<<"* ";
    //         } else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // Q22.
        for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left  = j;
            int right = (2*n -2)-j;
            int down = (2*n -2)-i;
            cout<<(n- min(min(top, down), min(left, right)))<<" ";
        }
        cout<<endl;
    }

    return 0;
}