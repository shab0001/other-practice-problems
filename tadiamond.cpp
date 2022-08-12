#include<iostream>
using namespace std;
int main() {
	int n, i, j;
	cin >> n;
	//first line
	for (i = 0; i < n; i++) {
		cout << "*	";
	}
	cout << endl;
	int spaces = 2;
	int star = n / 2;
	i = 2;
	//upper
	while (i <= (n / 2) + 1) {
		//left upper
		for (j = 0; j < star; j++) {
			cout << "*	";
		}
		// mid space
		for (j = 0; j < spaces; j++) {
			cout << "  ";
		}
		// right upper
		for (j = 0; j < star; j++) {
			cout << "*	";
		}
		cout << endl;
		spaces += 4;
		star -= 1;
		i += 1;
	}
	// cout << spaces << star;
	// cout << i ;
	spaces -= 8;
	star += 2;
	//lower
	while (i < n) {
		//lower left
		for (j = 0; j < star; j++) {
			cout << "*	";
		}
		//mid space
		for (j = 0; j < spaces; j++) {
			cout << "  ";
		}
		// right lower
		for (j = 0; j < star; j++) {
			cout << "*	";
		}
		cout << endl;
		spaces -= 4;
		star += 1;
		i++;
	}
	//last line
	for (i = 0; i < n; i++) {
		cout << "*	";
	}
	return 0;
}