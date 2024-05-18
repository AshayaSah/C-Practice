#include<iostream>

using namespace std;

int main(){

    //Checking for Pallindrome
    // int num,d1,d0,num1;
	
    // cout<<"Enter any two digit number: "<<endl;
    // cin>>num;

    // d0 = num%10;
    // d1 = num/10;

    // num1 = d0*10 + d1 ;

    // cout<<"Your flipped number is: "<<num1<<endl;

    // if (num == num1) {
    //     cout<<"Your entered number is pallendrome.";
    // }
    // else {
    //     cout<<"Your number is not pallendrome.";
    // }

        //Pallindrome 3 digit
        // int x = 121;
        // int d1 = x/100;
        // int d23 = x%100;
        // int d2 = d23/10;
        // int d3 = d23%10;

        // if(d1 == d3){
        //     cout<<"True";
        // }
        // else{
        //     cout<<"False";
        // }

    //Checking the leap year
    // int year;

    // cout<<"Enter the year you want to check if it is leap year or not: "<<endl;
    // cin>>year;

    // if(year%400 == 0 or (year%100 != 0 and year%4 == 0)){
    //     cout<<"your entered year is leap year.";
    // }
    // else{
    //     cout<<"The entered year is not a leap year";
    // }

    //floor and Room
    
    int floor,room;

    cout<<"Enter your floor 1-4: "<<endl;
    cin>>floor;
    cout<<"Enter your room number 1-2: "<<endl;
    cin>>room;

    if (floor == 1 ){
        if (room == 1){
            cout<<"Welcome to help desk at ground floor."<<endl;
        }
        else if (room == 2){
            cout<<"Welcome to reception at ground floor."<<endl;
        }
        else{
            cout<<"You are lost again you fool."<<endl;
        }
    }
    else if (floor == 2 ){
        if (room == 1){
            cout<<"Welcome to kid zone at First floor."<<endl;
        }
        else if (room == 2){
            cout<<"Welcome to adult zone at First floor."<<endl;
        }
        else{
            cout<<"You are lost again you fool."<<endl;
        }
    }
    else if (floor == 3 ){
        if (room == 1){
            cout<<"Welcome to table tennis court at Second floor."<<endl;
        }
        else if (room == 2){
            cout<<"Welcome to backetball court at Second floor."<<endl;
        }
        else{
            cout<<"You are lost again you fool."<<endl;
        }
    }
    else if (floor == 4 ){
        if (room == 1){
            cout<<"Welcome to Football groud at Third floor."<<endl;
        }
        else if (room == 2){
            cout<<"Welcome to cricket ground at Third floor."<<endl;
        }
        else{
            cout<<"You are lost again you fool."<<endl;
        }
    }
    else{
        cout<<"You are lost."<<endl;
    }

    
	return 0;
	
}
