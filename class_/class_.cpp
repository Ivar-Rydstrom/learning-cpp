#include <iostream>

using namespace std;

class Book {
    private:
        string rating;
    public:
        int pages;
        string title;

        Book(int apages, string atitle, string arating) { // constructor
            pages = apages;
            title = atitle;
            setRating(arating);
        }

        Book() { // default constructor
            pages = 200;
            title = "percy jackson";
            setRating("Not Rated");
        }

        void setRating(string arating) { // setter function
            if (arating == "PG-13" || arating == "R" || arating == "Not Rated") {
                rating = arating;
            } else {
                rating = "Not Rated";
            }
            return;
        }

        string getRating() {
            return rating;
        }

        bool isLong() {
            if (pages > 300) {
                return true;
            } else {
                return false;
            }

        }
};

int main() {

    Book book1(400, "harry potter", "PG-13");
    Book book2;

    cout << "book1: " << book1.getRating() << endl;
    cout << "book2: " << book2.getRating() << endl;
    return 0;
}