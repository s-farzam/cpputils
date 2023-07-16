#ifndef _MOVIES_H_
#define _MOVIES_H_

#include "Movie.h"
#include <vector>
#include <string>
#include <iostream>


class Movies {

    private:
        std::vector<Movie> collection;


    public:

        Movies();

        Movies(const Movies &source);

        ~Movies();

        // void add_movies(Movies &movies, std::string name, std::string rating, int watched);
        void add_movie(std::string name, std::string rating, int watched);
        void increment_watched(std::string name);
        void display();

//        bool Movies::validator(Movies movies, std::string name);

};


#endif  // _MOVIES_H_
