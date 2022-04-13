// Find on 277 in book


#include <iostream>
#include <limits>
#include <limits>
using namespace std;

namespace console {

	// Define Helper Functions
	void discardRemainingChars();
	void handleInvalidNumbers();
	bool checkRange(double num, double max, double min);

	// Define General Perspos Functions

	double getDouble(string prompt, double num, double max, double min) {
		double num = 0.0;
		bool isValid = false;
		while (!isValid) {
			cout << prompt;
			if (!(cin >> num)) {
				handleInvalidNumbers();

				double getint(string prompt, int num, int max, int min); {
					int num = 0.0;
					bool isValid = false;
					while (!isValid) {
						cout << prompt;
						if (!(cin >> num)) {
							handleInvalidNumbers();
						}
						else {
							discardRemainingChars();
							isValid = checkRange(num, min, max);
						}
					}
				}	return num;
			}
			char getChar(string promt, bool add_blank_line = true) {
				char choice = 'n';
				cout << prompt;
				cin > .choice;
				if (add_blank_line) cout << endl

					discardRemainingChars();
				return choice;
			}
			void discardRemainingChars() {
				cin.ignore(numeric_limits < streamsize::min(), '\n);')
			}
		}	void handleInvalidNumber() {
			cout << "Error! Invalid Number. Try again.\n";
			cin clear();
			discardRemainingChars();
		}
	}bool checkRange(double num, double min, double max) {
		if (!num >= min && num <= max)) {
		cout << "Error ! Number must be witten Range: " << min <<
}
	}
}