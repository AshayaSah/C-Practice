#include<iostream>

using namespace std;

int main() {

	//FOR Seperating the range of numbers
	// if (num>=0 and num<=10) {
	// 	cout<<"Your number lies in range 1."<<endl;
	// }
	// else if (num>=11 and num<=20){
	// 	cout<<"Your number lies in range 2."<<endl;
	// }  
	// else if (num>=21 and num<=30){
	// 	cout<<"Your number lies in range 3."<<endl;
	// }  
	// else if (num>=31 and num<=40){
	// 	cout<<"Your number lies in range 4."<<endl;
	// }  
	// else if (num>=41 and num<=50){
	// 	cout<<"Your number lies in range 5."<<endl;
	// }  
	// else if (num>=51 and num<=60){
	// 	cout<<"Your number lies in range 6."<<endl;
	// }  
	// else if (num>=61 and num<=70){
	// 	cout<<"Your number lies in range 7."<<endl;
	// }  
	// else if (num>=71 and num<=80){
	// 	cout<<"Your number lies in range 8."<<endl;
	// }  
	// else if (num>=81 and num<=90){
	// 	cout<<"Your number lies in range 9."<<endl;
	// }  
	// else if (num>=91 and num<=100){
	// 	cout<<"Your number lies in range 10."<<endl;
	// }  
	// else{
	// 	cout<<"You smug entered out of syllabus."<<endl;
	// }

	// float num;
	// cout<<"Enter your Marks: "<<endl;
	// cin>>num;

	// if (num>=0 and num<=39){
	// 	cout<<"You have failed the exam."<<num<<endl;
	// }  
	// else if (num>=40 and num<=54){
	// 	cout<<"You have obtained 3rd division."<<num<<endl;
	// }  
	// else if (num>=55 and num<=69){
	// 	cout<<"You have obtained 2nd division."<<num<<endl;
	// }  
	// else if (num>=70 and num<=79){
	// 	cout<<"You have obtained 1st division."<<num<<endl;
	// }  
	// else if (num>=80 and num<=100){
	// 	cout<<"You have obtained distinction."<<num<<endl;
	// }  
	// else {
	// 	cout<<"Invalid marks"<<endl;
	// }

	float loan;
	cout<<"Enter your needed loan ammont: "<<endl;
	cin>>loan;

	if (loan>=0 and loan<=10000){
		cout<<"You cannot apply for the loan."<<endl;
	}  
	else if (loan>=10000 and loan<=200000){
		cout<<"You will have to pay 0.1 percent interest."<<endl;
	}  
	else if (loan>200000 and loan<=500000){
		cout<<"You will have to pay 0.5 percent interest."<<endl;
	}  
	else if (loan>500000 and loan<=100000){
		cout<<"You will have to pay 0.7 percent interest."<<endl;
	}  
	else if (loan>10000) {
		cout<<"Sorry! we cannot provde youwith such big loan."<<endl;
	}
	else {
		cout<<"Invalid loan ammount."<<endl;
	}

return 0;
}