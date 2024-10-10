#include <iostream>
#include <cmath>

using namespace std;	

double calculateDistance(double numx1, double numy1, double numx2, double numy2) {

 return sqrt(pow((numx2 - numx1), 2) + pow((numy2 -  numy1), 2));
}

int main (){
	double numx2, numx1, numy1, numy2; 

	cout << "enter coordinates the first point\t|\t"; 
	cin	>> numx1;
	cout << "enter coordinates the first point\t|\t";
	cin >> numx2;
	cout << "enter coordinates the second point \t|\t";
	cin >> numy1;
	cout << "enter coordinates the second point\t|\t";
	cin >> numy2;
	
	double distance = calculateDistance(numx1, numy1, numx2, numy2);	
	 cout << "The distance between the two points is " << distance << "!" << endl;
	return 0;
}