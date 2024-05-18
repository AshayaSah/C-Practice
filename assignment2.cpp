#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
    // int i;
    // float sum = 0;

    // for ( i = 1; i<=97; i = i+2) {
    //     sum = sum + (float)i/(i+2);
    // }

    // cout<<"The sum of the series is: "<<sum<<endl;

    int numStudents, student;
    int highestScore = 0;

    cout<<"Enter the number of students: ";
    cin>>numStudents;

    for (int i = 1; i <= numStudents; i++) {
        int score;
        cout<<"Enter score for student " <<i<< ": ";
        cin>>score;

        if (score > highestScore) {
            highestScore = score;
            student = i;
        }
    }

    cout<<"The highest score is "<<highestScore<<" by the student "<<student<<endl;

    return 0;

return 0;
}
