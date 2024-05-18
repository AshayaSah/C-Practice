#include<iostream>

using namespace std;

int main(){

    // int a=0;
    // int b=1;
    // int steps;
    // cout<<"enter the number of iterations: "<<endl;
    // cin>>steps;

    // for (int i=1; i<=steps; i++){
    //     int c = a+b;

    //     cout<<c<<endl;

    //     a = b;
    //     b = c;
    // }

    int i,j;
    int steps;

    cout<<"enter the number of iterations: "<<endl;
    cin>>steps;

    //Flag of Nepal
    // for(i=1; i<=steps; i++){
    //     for(j=1; j<=i; j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
    // for(i=1; i<=steps; i++){
    //     for(j=1; j<=(i+1); j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
    // for (i=1; i<=5; i++){
    //     cout<<" * "<<endl;
    // }

    //Reverse Flag Inside Out
    // for(i=1; i<=steps; i++){
    //     for(j=steps; j>=i; j--){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
    // for(i=1; i<=steps; i++){
    //     for(j=1; j<=i; j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    //Pyramid
    for(i=1; i<=steps; i++){
        for(j=steps; j>=i; j--){
            cout<<" ";
        }
        for(j = 1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;

}