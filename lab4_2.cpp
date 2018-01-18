#include <iostream>
#include <cmath>
using namespace std;

double findDistance(double u,double a,double t){
	double s;
	s=(u*t)+(a*pow(t,2))/2;
	return s;
}
int main(){
	double u,a,t,s;
	
	cout << "Enter u = ";
	cin >> u;
	
	cout << "Enter a = ";
	cin >> a;
	
	cout << "Enter t = ";
	cin >> t;
	
	cout << findDistance(u,a,t);
	
	return 0;
}
