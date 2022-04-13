#include <iostream>
#include  <vector>
using namespace std;

class Person {
public:
	Person(int age ,int height, string name, int SSN) {
		this->age = age;
		this->height = height;
		this->name = name;
		this->SSN = SSN;
	}
	Person() {

	}
	int age;
	int height;
	string name;
	int getAge();
	void setage(int);
	void birthday();
	int getHeight();
	void setHeight(int);
	string getName();
	void setName();
private:
	int SSN;
	int getSSN();
	void setSNN(int);
};
int Person::getAge() {
	return age;
}
void Person::setage(int age) {
	this->age = age;
}
void Person::birthday() {
	this->age++;
	cout << "Happy birthday";
}
int Person::getHeight()
{
	return height;
}
void Person::setHeight(int height) {
	this->height = height;
}
string Person::getName()
{
	return name;
}
void Person::setName() {
	this->name = name;
}
int Person::getSSN() {
	return SSN;
}
void Person::setSNN(int) {
	this->SSN = SSN;
}
int main() {
	Person bob(86,  66, "BOB", 8789);
	Person luke(17, 72, "Luke", 3453);

	cout << luke.getName() << " is " << luke.getAge() << " years old today";
	 
	luke.birthday();

	cout  << luke.getAge << endl;
}
