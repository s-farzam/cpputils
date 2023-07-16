#include "Movie.h"

#include <iostream>

// Setters and getters:
void Movie::set_name(std::string name) {
    this->name = name;
}

std::string Movie::get_name() const {
    return this->name;
}


void Movie::set_rating(std::string rating) {
    this->rating = rating;
}

std::string Movie::get_rating() const {
    return this->rating;
}


void Movie::set_watched(int number) {
    this->watched = number;
}

int Movie::get_watched() const {
    return this->watched;
}


// Constructor:
Movie::Movie(std::string name_val, std::string rating_val, int watched_val)
: name {name_val}, rating {rating_val}, watched {watched_val} {
}


// Copy constructor:
Movie::Movie(const Movie &source)
    // Doing the init here.
    : name {source.name}, rating {source.rating}, watched {source.watched} {
    }
    // Delegation the constructor.
    // : Movie {source.name, source.rating, source.watched} {
    // }

// Destructor:
Movie::~Movie() {
        }


// Other methods:
void Movie::increment_watched() {
    ++watched;
}

void Movie::display() const {

    std::cout << name << ", "
            << rating << ", "
            << watched << "."
            << std::endl;
}
