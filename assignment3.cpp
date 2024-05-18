// #include<iostream>

// using namespace std;


// char toLowerCase(char ch) {
    
//     char lowercase;

//     if (ch >= 'A' && ch <= 'Z') {
//         lowercase = ch + 32; 
//     }
//     else {
//         cout<<"Invalid input"<<endl;
//         lowercase = ch;
//     }
//     return lowercase;
// }

// int main() {

//     char a;
//     cout<<"Inter any uppercase letter: "<<endl;
//     cin>>a;

//     char lowercaseLetter = toLowerCase(a);

//     std::cout << "The lowercase version of '" << a << "' is: " << lowercaseLetter << std::endl;

    //for finding the sum of the series.
    // int a, i;
    // float sum = 0;
    // cout<<"Enter the number, upto which you want the sum of series"<<endl;
    // cin>>i;

    // for(a = 1; a <=i; a++){
    //     sum = sum + (float) a/(a+1) ;
    // }

    // cout<<"The sum of the series Sum("<<i<<"): "<<sum<< endl;
    // return 0;

//     return 0;
// }


#include<iostream>
#include <cmath>

using namespace std;

int main (){
    double principal;
    double interestRate;
    int years;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the annual interest rate: ";
    cin >> interestRate;

    cout << "Enter the number of years: ";
    cin >> years;

    double futureValue = principal * pow((1 + interestRate/100), years);

    cout << "The future value of the investment after " << years << " years is: " << futureValue << endl;

}