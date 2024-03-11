// LTCB_forlong2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	int so;
	cout << "Nhap so:"; cin >> so;
	for (int i = 0; i < so; i++) {
		for (int j = so; j > i; j--) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
