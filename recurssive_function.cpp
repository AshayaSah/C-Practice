#include<iostream>

using namespace std;

//Finding out the factorials
int factorial (int count){
    if(count <= 1){
        return 1;
    }
    else if(count>1){
        return count * factorial(count-1);
    }
}

//Fibonacci Sequence
int fibo_sequence (int a,int b,int fibo_steps) {

    if(fibo_steps<=0){
        return a;
    }
    else {
        int c = a + b;
        a = b;
        b = c;
        return fibo_sequence(a,b,fibo_steps -1);
    }
}

//pallindrome 
int pallindrome(int pallin_num){

    int pal = 0;
    while (pallin_num != 0){
        int remainder = pallin_num%10;
        pallin_num = pallin_num/10;
        pal = pal * 10 + remainder;
    }
    return pal;
}

//Reverse function
void reverse_string(char arr[],int size){
    for(int i = 0; i<((size-1)/2) ; i ++){
        int temp = arr[i];
        arr[i] = arr[size -1 -i];
        arr[size - 1 - i] = temp;
    }
    for (int i = 0; i <size; i++){
        cout<<arr[i];
    }
} 


int main(){

    //Printing the factorial from user input number
    int fact_count;
    cout<<"Enter the number of times you want to be welcomed? "<<endl;
    cin>>fact_count;

    int fact = factorial(fact_count);
    cout<<fact<<endl;

    //Fibonacci Sequence with the user entered steps
    int fibo_steps;
    cout<<"Enter the number of steps you want to continue the Fibonacci Sequence: "<<endl;
    cin>>fibo_steps;
    int a = 0;
    int b = 1;
    // cout<<a<<" "<<b<<" ";

    for(int i = 0; i < fibo_steps; i++){
        int fibo = fibo_sequence(a,b,i);
        cout<<fibo<<" ";
    }
    cout<<endl;

    //User input pallindrome number
    int pallin_num;
    cout<<"Enter the number for pallindrome check: "<<endl;
    cin>>pallin_num;

    int pallin = pallindrome(pallin_num);
    cout<<"Your reversed number is: "<<pallin<<" and ";

    if (pallin_num ==pallin){
        cout<<"is pallindrome.";
    }
    else {
        cout<<"is not pallindrome.";
    }

    //reverse character
    cout<<endl;
    char rev[] = {"Hello"};
    int size = sizeof(rev);

    reverse_string(rev,size);

    return 0;
}