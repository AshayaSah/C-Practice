#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	float x1,y1,x2,y2;
	cout<<"Enter x1: "<<endl;
	cin>>x1;
	cout<<"Enter y1: "<<endl;
	cin>>y1;
	cout<<"Enter x2: "<<endl;
	cin>>x2;
	cout<<"Enter y2: "<<endl;
	cin>>y2;
	float d = pow(pow(x2-x1,2)+pow(y2-y1,2),0.5);

	cout<<"The distance between the co-ordinates is "<<d<<endl;

return 0;
}
