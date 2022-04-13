#include <iostream>
#include < iomanip>

using namespace std;

void printHeader() {
	cout << setw(10) << "Number" << setw(10) << "Squared" << setw(10) << "Cubed" << endl;
	cout << setw(10) << "======" << setw(10) << "=======" << setw(10) << "=====" <<endl;
}

void  newRow(int num) {
	cout << setw(10) << num << setw(10) << num*num << setw(10) << num*num*num <<endl;
};

int main() {

	int start = 0, stop = 0;

	cout << "Table Of Powers"<<endl;
	cout << "Enter start number:\t";
	cin >> start;
	cout << "Enter stop number:\t";
	cin >> stop;
	cout << endl;

	while (!(stop > start)) {
		int start = 0, stop = 0;
		cout << "Start number must be smaller than End number" << endl;
		cout << "Table of powers" << endl << endl;
		cout << "Enter start number:\t";
		cin >> start;
		cout << endl << "Enter stop number:\t";
		cin >> stop;
	}
	printHeader();


	for (int i = start; i < stop; i++) {
		newRow(i);
	
	}
	
	
	
	
	
	
	
	
	
	
	/*cout << setw(10) << "Previous" << setw(10) << "Current" << endl;
	cout << setw(10) << 234 << setw(10) << 2345 <<endl;
	cout << setw(10) << 234 << setw(10) << 2345 <<endl;
	cout << setw(10) << 234 << setw(10) << 2345 <<endl;
	cout << setw(10) << 234 << setw(10) << 2345 <<endl;*/
}