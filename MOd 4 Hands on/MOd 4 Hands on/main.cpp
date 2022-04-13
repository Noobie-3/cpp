#include <iostream>
#include <string.h>

using namespace std;

int main() {

	char again = 'y';
	while (again == 'y'){
	cout << "~~~~~~~ THE NAME SWAPPER ~~~~~~~~~" << endl;
	cout << "Enter a name(no spaces,  that functionality is coming soon)" << endl;
	string name1 = "";
	cin >> name1;
	cout << "Enter a name(no spaces,  that functionality is coming soon)" << endl;
	string name2 = "";
	cin >> name2;


	cout << "\nBefore the swap the names are: " << name1 << "-" << name2 << "\n\n";


	string* name1Point = &name1;
	string* name2Point = &name2;


	string old = "";

	string* oldNamePoint = &old;

	*oldNamePoint = name1;
	*name1Point = name2;
	*name2Point = *oldNamePoint;

	cout << "After the swap the names are: ";
	cout << name1 << "-" << name2 << endl << endl;

	cout << "would you like to continue(y or n)";
	cin >> again;
	if (again == 'n'){
		cout << "\nCYA!!\n";
		break;
	}
	}



}