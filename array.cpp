#include <iostream>

using namespace std;


void sumOfItems(){
    int arr[5];
    int sum = 0;


    for(int i=0; i<5; i++){
        cout<<"Inter the integer at "<<i<<" : "<<endl;
        cin>>arr[i];

        sum=sum + arr[i];
    }
    cout<<"The sum of the numbers in the array is: "<<sum<<endl;
}

int main(){

    // int a =5;
    // int arr[5];

    // // arr[3] = 3; 
    // // arr[0] = 0; 
    // // arr[1] = 1; 
    // // arr[2] = 2; 
    // // arr[4] = 4; 

    // for(int i=0; i<5; i++){
    //     cout<<"Inter the integer at "<<i<<" : "<<endl;
    //     cin>>arr[i];
    // }

    // int a =5;
    // int arr[5];


    // for(int i=0; i<5; i++){
    //     cout<<"Inter the integer at "<<i<<" : "<<endl;
    //     cin>>arr[i];
    // }

    // //for knowing the size f the array
    // cout<<"Size of my array is "<<sizeof(arr)<<endl;

    sumOfItems();

    return 0;
}