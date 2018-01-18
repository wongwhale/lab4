#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float y;
	int x;
	
	cout << "Enter x = ";
	cin >> x;
	
	y=(3*pow(x,3))+(2*exp(1))+(pow(2,2*x+1))+(sqrt(pow(x,2)+1));
	cout << "Result y = " << y;
	
	return 0;
}
