#include<iostream>

using namespace std;

double min(double array[],int size){

    int lowest;

    //Bubble Short in ascending order
    for(int i=0; i<size; i++){
        if(array[i]<= lowest){
            lowest = array[i];
        }
    }
    cout<<"The lowest of the array is "<<lowest<<endl;
}
int main(){
    double passingArray[10];
    int size = sizeof(passingArray)/8;

    for(int i=0; i<size; i++){
        cout<<"Enter the number of the array passingArray["<<i<<"] : ";
        cin>>passingArray[i];
    }
    min(passingArray, size);

    return 0;
}