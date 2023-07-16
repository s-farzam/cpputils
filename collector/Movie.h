#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>


class Movie {

    private:

        std::string name;
        std::string rating;
        int watched;


    public:
        // Setters and Getters:
        void set_name(std::string name);
        std::string get_name() const;

        void set_rating(std::string rating);
        std::string get_rating() const;

        void set_watched(int number);
        int get_watched() const;

        // Constructors:
        Movie(std::string name_val, std::string rating_val, int watched_val);


        // Copy constructor:
        Movie(const Movie &source);

        // Destructor:
        ~Movie();

        void increment_watched();

        void display() const;




};


#endif // _MOVIE_H_
