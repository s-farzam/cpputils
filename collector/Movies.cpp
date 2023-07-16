#include "Movies.h"
#include <vector>


 Movies::Movies() {

 }


Movies::Movies(const Movies &source)
    : collection {source.collection} {

}



Movies::~Movies() {

}


void Movies::add_movie(std::string name, std::string rating, int watched)
     {
        for (auto item : this->collection) {
            if (item.get_name() == name)
                {
                    std::cout << name << " is already in the collection." << std::endl;
                    return;
                }
        }

        this->collection.push_back(Movie {name, rating, watched});
        std::cout << name << " was added to the collection." << std::endl;

}

void Movies::increment_watched(std::string name) {
    // bool movie_exist {false};
    for (auto &item : this->collection) {
        if (item.get_name() == name) {
            // movie_exist = true;
            item.increment_watched();
            return;
        }
    }

    std::cout << name << " is not in the collection." << std::endl;

}







void Movies::display() {
    for (auto item : this->collection) {
        item.display();
    }
}
