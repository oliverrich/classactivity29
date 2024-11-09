//
// Created by Oliver on 11/8/2024.
//

#ifndef MOVIE_H
#define MOVIE_H
#include <string>
struct Movie {
    std::string title;
    int year;
};

Movie parseMovie(const std::string& movieStr);
#endif //MOVIE_H
