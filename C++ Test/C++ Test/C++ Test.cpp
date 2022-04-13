#include <iostream>
#include <string>

using namespace std;

string doubler(string data) {
	data += data;
	return data;
}

int doubler(int  data) {
	data += data;
	return data;
}

int main() {

string data("hello");
cout << doubler(data);
cout << endl;
cout << doubler(5);



}

