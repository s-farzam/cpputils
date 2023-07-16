// main.cpp

#include <iostream>
#include "Movies.h"

using namespace std;

int main() {
    Movies movies {};
    movies.add_movie("Big", "R", 6);
    movies.add_movie("Dig", "PG-13", 2);
    movies.add_movie("Ghost", "R", 1);
    movies.add_movie("Rambo", "G", 4);
    movies.add_movie("Rambo", "G", 4);
    movies.display();

    movies.increment_watched("Big");
    movies.increment_watched("Dig");
    movies.increment_watched("Ghost");
    movies.increment_watched("Not in the list");
    movies.display();

    return 0;
}

