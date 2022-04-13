#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{

	cout << "Tip Calculator\n";
	//Questions for data input
	cout << "\nWhat is the cost of the meal: ";
	float Cost;
	cin >> Cost;
	cout << "What  percent are you tipping: ";
	float PercentTip;
	cin >> PercentTip;


	// Results 
	float Tip;
	Tip = Cost * (PercentTip / 100);
	cout << "Your Tipping amount will be: " << Tip << "$\n";
	float TrueCost;
	TrueCost = Tip + Cost;
	cout << "Your Total is: " << TrueCost << "$";



}