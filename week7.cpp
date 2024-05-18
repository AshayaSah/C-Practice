#include<iostream>

using namespace std;

//passing the value by reference
void passByRef(int* a,int* b){
    int c = *a + *b;
    cout<<c<<endl;
    (*a)--;
}

//passing the value by reference and swwap the values
void swap(int* a,int* b){
    int c = *a;
    *a = *b;
    *b = c;  
}

//swap array
void swapArr(int *add){
    for(int i = 4; i>=0; i--){

        cout<<*add + i<<endl;
    }

}

int main (){

    int a = 5;
    int b = 10;

    passByRef(&a,&b);
    cout<<a<<endl;

    swap(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<endl;

    int arr[] = {1,2,3,4,5};
    swapArr(arr);
    return 0;
}