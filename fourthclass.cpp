#include<iostream>

using namespace std;

int main() {

    int year,month;

    cout<<"Enter the year: "<<endl;
    cin>>year;

    cout<<"Enter the month"<<endl;
    cin>>month;

    if((year%400 == 0 or (year%100 != 0 and year%4 == 0)) && month == 2){
        cout<<"The year "<<year<< " and the month "<<month<< "has 29 days";
    }
    else {
        switch (month){
            case 1:
                cout<<"The year "<<year<< " and the month "<<month<< " has 31 days";
                break;
            case 2:
                cout<<"The year "<<year<< " and the month "<<month<< " has 28 days";
                break;
            case 3:
                cout<<"The year "<<year<< " and the month "<<month<< " has 31 days";
                break;
            case 4:
                cout<<"The year "<<year<< " and the month "<<month<< " has 30 days";
                break;
            case 5:
                cout<<"The year "<<year<< " and the month "<<month<< " has 31 days";
                break;
            case 6:
                cout<<"The year "<<year<< "and the month "<<month<< " has 30 days";
                break;
            case 7:
                cout<<"The year "<<year<< " and the month "<<month<< " has 31 days";
                break;
            case 8:
                cout<<"The year "<<year<< " and the month "<<month<< " has 31 days";
                break;
            case 9:
                cout<<"The year "<<year<< " and the month "<<month<< " has 30 days";
                break;
            case 10:
                cout<<"The year "<<year<< " and the month "<<month<< " has 31 days";
                break;
            case 11:
                cout<<"The year "<<year<< " and the month "<<month<< " has 30 days";
                break;
            case 12:
                cout<<"The year "<<year<< " and the month "<<month<< " has 31 days";
                break;
            default:
                cout<<"Invalid month.";
                break;
        }
    }
}