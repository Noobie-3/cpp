/*#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Movie {
	string title;
	int year;
	bool equals(Movie movie) {
		if (this->year == movie.year && this->year == movie.year) {
			return true;
		}
		else {
			return false;
		}
	}
};

Movie getNewMovie() {
	Movie movie;
	cout << "Enter movie title: " << endl;
	getline(cin, movie.title);
	cout << "Enter movie year: " << endl;
	cin >> movie.year;
	cout << endl;
	return movie;
}

int main() {

	Movie movie1;
	Movie movie2;
	Movie movie3;

	movie1.title = "The Last of Us";
	movie2.title = "Men In  Black";
	movie3.title = "Hello Darkness my Old Friend";

	movie1.year = 1205;
	movie2.year = 1999;
	movie3.year = 9999;

	vector<Movie> movieVec;

	movieVec.push_back(movie1);
	movieVec.push_back(movie2);
	movieVec.push_back(movie3);

	Movie movie4 = getNewMovie();

	for (int i = 0; i < movieVec.size(); i++) {
		if (movie4.equals(movieVec[i])) {
			break;
		}
		if (i == movieVec.size() - 1) {
			movieVec.push_back;
		}
	}

	for (int i = 0; i < movieVec.size(); i++) {
		cout << movieVec[i].title << " (" << movieVec[i].year << " )" << endl;
}

}*/