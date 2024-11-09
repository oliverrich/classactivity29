//
// Created by Oliver on 11/8/2024.
//
#include <iostream>
#include <iomanip>
#include "movie.h"

using namespace std;



Movie parseMovie(const string& movieStr) {
    Movie movie;
    stringstream stream(movieStr);
    string yearStr;


    getline(stream, movie.title, ',');


    stream >> movie.year;

    return movie;
}