#include <iostream>



using namespace std;

int main(){

    char arr[] = {"Hello class! How arre you?"};

    int sizeOfArray = sizeof(arr);

    cout<<"The size of the array is "<<sizeOfArray<<endl;

    int countVowel = 0;

    for (int i=0; i<sizeOfArray; i++){

        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' || arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U'){
            countVowel++;
        }
    }
    cout<<"The number of vowels in the string are: "<<countVowel<<endl;

    return 0;
}