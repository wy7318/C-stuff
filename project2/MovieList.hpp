#include <string>
#include <vector>
#include <iostream>
#include "Movie.hpp"

using namespace std;

class MovieList
{
private:
	vector<Movie> list;
public:
	MovieList();
	~MovieList();
	void addMovie(Movie);
	void print_movies();
	void rated(string);
	void directed_by(string);
};

