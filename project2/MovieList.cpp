#include<iostream>
#include "MovieList.hpp"

MovieList::MovieList() 
{
	list = vector<Movie>();
}

MovieList::~MovieList() 
{
}

void MovieList::addMovie(Movie m) /*add movie to list*/
{
	list.push_back(m);
}

void MovieList::print_movies() /*prints a list of all movies*/
{
	for each(Movie m in list)
	{
		m.print_movie();
	}
}

void MovieList::rated(string r) /* prints same rated movies*/
{
	for each(Movie m in list)
	{
		if (m.getRating() == r)
			cout << m.getTitle() << " " << m.getYear() << endl;
	}
}

void MovieList::directed_by(string d) /*print same director movie*/
{
	for each(Movie m in list)
	{
		if (m.getDirector() == d)
			cout << m.getTitle() << " " << m.getYear() << endl;
	}
}
