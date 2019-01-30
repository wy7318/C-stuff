#include <string>
#include <iostream>

using namespace std;

class Movie
{
private:
	string title;
	string director;
	int year;
	string rating;
public:
	Movie();
	Movie(string, string, int, string);
	void setTitle(string);
	void setDirector(string);
	void setYear(int);
	void setRating(string);
	string getTitle();
	string getDirector();
	int getYear();
	string getRating();
	void get_movie();
	void print_movie();
	bool same_year(Movie);
	~Movie();
};

