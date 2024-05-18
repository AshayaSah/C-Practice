#include <iostream>

using namespace std;

int main(){

    //coping the values of array
    // int arr[5]={1,2,3,4,5};
    // int copy[5];

    // for(int i=0; i<5; i++){
    //     copy[i]=arr[i];
    // }
    // for(int i=4; i>=0; i--){
    //     cout<<copy[i];
    // }


    //Swapping the contents of array within the same array
    // int arr[5]={1,2,3,4,5};
    // int size = sizeof(arr)/4;

    // for(int i=0; i<(size/2); i++){
    //     int temp = arr[i];
    //     arr[i] = arr[size -1 - i];
    //     arr[size -1 - i] = temp;
    // }
    //  for(int i=0; i<size; i++){
    //     cout<<arr[i];
    // }

    //Finding the lowest element of the array
    int arr[5]={56,25,14,7,6};
    int size = sizeof(arr)/4;
    int lowest = arr[0];

    for(int i=0; i<size; i++){
        if(arr[i]<= lowest){
            lowest = arr[i];
        }
    }
    cout<<"The lowest of the array is "<<lowest<<endl;

    return 0;
}

// s="hello + my + name + is + ashaya.";