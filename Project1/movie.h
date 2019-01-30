#ifndef MOVIE_H
#define MOVIE_H
#define TITLE_LENGTH 50 /*define title char length */
#define NUM_YEAR 5 /*define year length */
#define DIRECTOR_LENGTH 50 /*define director char length */
#define RATING_LENGTH 10 /*define rating char length */
typedef struct {
 char title[TITLE_LENGTH];
 char director[DIRECTOR_LENGTH];
 char rating[RATING_LENGTH];
 int year[NUM_YEAR];
} movie_h;
void get_movie(char title[50][50], char director[50][50], char rating[50][50], int year[50][10]);
void print_movie(char title[50][50], char director[50][50], char rating[50][50], int year[50][10]);
void directed_by(char director[50][50], char title[50][50], char rating[50][50], int year[50][10]);
void rated(char rating[50][50], char director[50][50], char title[50][50], int year[50][10]);
#endif