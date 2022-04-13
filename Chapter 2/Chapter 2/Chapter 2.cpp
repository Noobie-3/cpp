#include <iostream>
#include <cstdlib>
#include <iomanip>
#include<vector>
#include<string>
#include<cmath>

using namespace std;



int main()
{


	//intro title 
cout << "Welcome to the Calorie Caculator!\n" << endl << endl; 
// the servings of food that you had
double servings; 
cout << "Enter servings per food item " << endl;
cin >> servings;
//how many caliories were in each serving
double calories; 
cout << "Enter calories per serving: " << endl;
cin >> calories;
//calculates the total calories
double total_calories = servings * calories;
//outputs the total calories
cout << "Total calories: " << total_calories << endl;

return 0;
}

