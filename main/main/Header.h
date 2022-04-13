#ifndef MURACH_CONSOLE_H
#define MURACH_CONSOLE_H

#include <string>
#include <limits>
using namespace std;

namespace console {
	double getDouble(string prompt, double min = numeric_limits<double>::min(), double max = numeric_limits<double>::max());

	int getInt(string prompt, int min = numeric_limits<int>::min(), int max = numeric_limits<int>::max());

	double getChar(string prompt, bool add_blank_line = true);
}


#endif