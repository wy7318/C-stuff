#include<string.h>
#include<stdio.h>
#include"movie.h"

void get_movie(char title[50][50], char director[50][50], char rating[50][50], int year[50][10]) /* declare get_movie function that prompt user to type info */
{
 
 
 printf("Enter title: ");
 scanf("%s", title);
 printf("Enter director: ");
 scanf("%s", director);
 printf("Enter Rating: ");
 scanf("%s", rating);
 printf("Enter Release year: ");
 scanf("%d", year);

 return 0;
}
void print_movie(char title[50][50], char director[50][50], char rating[50][50], int year[50][10]) /* declare print_movie function that read from get_movie function */
{
  
 int i;
 for(i=0; i<50; i++) /* display all movies saved in array*/

 printf("Title : %s", i, title[i]);
printf("Director : %s", i, director[i]);
printf("Year : %d", i, year[i]);
printf("Rating : %s", i, rating[i]);
return 0;
}

void directed_by(char director[50][50], char title[50][50], char rating[50][50], int year[50][10]) /*declare directed_by function that shows movie by dirctor */
{
int i;
 for(i=0; i<50; i++) /* display all movies saved in array*/
printf("Directed by : %s\n", i, director[i]);
 printf("%s\n", i, title[i]);
printf("%s\n", i, rating[i]);
printf("%d\n", i, year[i]);

return 0;
}
void rated(char rating[50][50], char director[50][50], char title[50][50], int year[50][10])  /*declare rate function that shows movie by rating from the list*/
{
int i;
 for(i=0; i<50; i++) /* display all movies saved in array*/
printf("rated (%s)\n", i, rating[i]);
printf("%s\n", i, director[i]);
 printf("%s\n", i, title[i]);
printf("%d\n", i, year[i]);

return 0;
}
