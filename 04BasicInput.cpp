#include <iostream>

using namespace std;

int main (){
	string nickname,school;
	int yl;
	
	cout << " Nickname\t:\t";
	cin >>	nickname;
	cout << "Course and Year level:\t";
	cin >>	yl;
	cout << "Your School\t\t:\t";
	cin >>	school;
	cout << "Wow congrats " << nickname << " !" << yl << " is a nice course. And you are studying in " << school << " Which is one of the center of exellence in tertiary Education";
	return 0;
}