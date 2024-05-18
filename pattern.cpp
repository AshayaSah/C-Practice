#include <iostream>

using namespace std;

int main(){
    int i,j;

// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1 
// 1 2 3 * * * * 3 2 1 
// 1 2 * * * * * * 2 1 
// 1 * * * * * * * * 1 

//     for(i=5; i>=1; i--){
//         for(j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         for(j=1; j<= 5-i ; j++){
//             cout<<"* ";
//         }
//         for(j=1; j<= 5-i ; j++){
//             cout<<"* ";
//         }
//         for(j=i; j>=1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;     
//     }
    return 0;
}

