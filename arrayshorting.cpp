#include<iostream>

using namespace std;

int main(){

    int arr[5]={56,25,14,7,6};
    int size = sizeof(arr)/4;

    //Bubble Short in ascending order
    for(int j=0; j < (size-1); j++){
        for(int i=0; i<(size-1); i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    for(int i=0; i<size; i++){
        cout<<" "<<arr[i];
    }
    return 0;
}