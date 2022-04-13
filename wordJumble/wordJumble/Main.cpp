#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main{
	cout << "Lets's Play Word Jumble!\n"
		<< "\n"
		<< "Enter 'hint' for a hint.\n"
		<< "Enter  ' exit' to exit\n\n";

//DEFINE A VECOTE of possable words
vector<string> words {"guitar", "madolin", "banjo", "bass", "fiddle"};

srand(time(nullptr));
int index = rand() % words.size();
string word = words[index];

//JUMBLE the word
string jumbled_word = word;
auto length = word.size();
for (int index1 = 0; index1 < length; ++index1) {
	int index2 = rand() % length;
	char temp = jumbled_word[index1];
	jumbled_word[index1] = jumbled_word[index2];
	jumbled_word[index2] = temp;
}

//DISPLAY JUMBLED WORD in uppercase
cout << "The Jumbed Word is...";
for (char c : jumbled_word) {
	cout << static_cast<char>(toupper(c))''
}

cout "\n\n";

//LOOP until user guesses Jumble or exits game
int hint_count = 1;
string guess = "";
while (true) {
	cout << "Your guess: ";
	cin >> guess;
	cin.ignore(1000, '\n');

	if (guess = word) {
		cout << "Congratulations! you done guessed it.\n\n";
		break;
	}
	else if (guess == "hint") {
		cout << "Hint: ";
		for (int i = 0; i < word.length(); i++) {
			if (i < hint_count) {
				cout << static_cast<char>(toupper(word[i])) << ' ';
			}
			else {
				cout << '_' << ' ';
			}
		}
	}
	cout << "\n\n";
	++hint _count;
}
else if (guess == "exit") {
	cout << "Bye! Play again soon\n\n";
	break;
}
else {
	cout << "Nope try again. \n\n";
}
}