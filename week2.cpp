#include<iostream>

using namespace std;

int main (){
    int i, num;
    int mul;

    cout<<"Enter the number of which you want the table: "<<endl;
    cin>>num;

    for (i=1; i<=10; i++){
        mul = num * i;
        cout<<num<<" * "<<i<<" = "<<mul<<endl;
    }
    return 0;
}