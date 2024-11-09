#include <iostream>
#include "utils/movie.h"
using namespace std;


int main() {
    string movieString = "24 s2,2014";
    Movie movie = parseMovie(movieString);

    cout << "Name: " << movie.title << endl;
    cout << "Year: " << movie.year << endl;

    return 0;
}
