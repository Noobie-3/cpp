#include <iostream>
#include <string.h>

using namespace std;

int main() {


	
	cout << "~~~~~~~ THE NAME SWAPPER ~~~~~~~~~"<< endl;
	cout << "Enter a name"<< endl;
	string name1 = "";
	cin >> name1;
	cout << "Enter a name";
	string name2 = "";
	cin >> name2;

	cout << name1 << "-" << name2 << endl;


	string* name1Point = &name1;
	string* name2Point = &name2;


	string old = "";

	string* oldNamePoint = &old;

	*oldNamePoint = name1;
	*name1Point = name2;
	*name2Point = *oldNamePoint;


	cout << name1 << "-" << name2 << endl;


}