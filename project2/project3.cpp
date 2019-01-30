#include "Movie.hpp"
#include "MovieList.hpp"
#include <string>
#include <iostream>

using namespace std;

int main() {
	MovieList list; 
        list.addMovie(Movie("Dick Tracy", "Warren Beatty", "1990", "PG"));
	list.addMovie(Movie("Inside Out", "Pete Docter", 2015, "PG"));
	list.addMovie(Movie("Goodfellas", "Martin Scorsese", 1990, "R"));
	list.addMovie(Movie("The Dark Knight", "Christopher Nolan", 2008, "PG13"));
	Movie m1 = Movie("Guardians of the Galaxy", "James Gunn", 2014, "PG13");
	list.addMovie(m1);
	Movie m2;
	m2.get_movie();
	list.addMovie(m2);
	list.print_movies();
	cout << endl << m1.same_year(m2) << endl << endl;
	list.directed_by("Christopher Nolan");
	cout << endl << endl;
	list.rated("PG13");
	cout << endl;
	return 0;
}