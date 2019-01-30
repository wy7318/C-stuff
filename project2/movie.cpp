#include<iostream>
#include "Movie.hpp"

Movie::Movie() 
{
}

Movie::Movie(string t, string d, int y, string r) 
{
	title = t;
	director = d;
	year = y;
	rating = r;
}


void Movie::setTitle(string t)
{
	title = t;
}

void Movie::setDirector(string d)
{
	director = d;
}

void Movie::setYear(int y)
{
	year = y;
}

void Movie::setRating(string r)
{
	rating = r;
}

string Movie::getTitle()
{
	return title;
}

string Movie::getDirector()
{
	return director;
}

int Movie::getYear()
{
	return year;
}

string Movie::getRating()
{
	return rating;
}

void Movie::get_movie() /*user put movie */
{
	cout << "Enter title: ";
	getline(cin, title);
	cout << "Enter director: ";
	getline(cin, director);
	cout << "Enter year: ";
	cin >> year;
	cin.ignore();
	cout << "Enter rating: ";
	getline(cin, rating);
}

void Movie::print_movie() /*displays the movie record*/
{
	cout << director << " " << title << " " << year << " " << rating << endl;
}

bool Movie::same_year(Movie m) 
{
	return this->year == m.year;
}

Movie::~Movie() 
{
}
