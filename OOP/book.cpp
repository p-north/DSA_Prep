#include<bits/stdc++.h>
using namespace std;

class Book {

    private:
        string title;
        string author;
        int ISBN;
        int publicationYear;
        int numPages;

    public:

        Book(){

        }

        Book(string tit, string auth, int isbn, int year, int pages) : title(tit), author(auth), ISBN(isbn), publicationYear(year), numPages(pages)
        {

            cout << "Book successfully created!" << endl;
        }

        //getters
        string get_title() const {
            return title;
        }
        string get_author() const {
            return author;
        }
        int get_ISBN() const {
            return ISBN;
        }
        int get_publicationYear() const {
            return publicationYear;
        }
        int get_numPages() const {
            return numPages;
        }
        void display_summary() const{
            cout << "Book Title: " << title << endl;
            cout << "Book Author: " << author << endl;
            cout << "Book ISBN: " << ISBN << endl;
            cout << "Book Publication Year: " << publicationYear << endl;
            cout << "Book Number Of Pages: " << numPages << endl;

        }

        bool check_date(int years){
            return (2025-publicationYear) > years;
        }




};

int main()
{
    Book bkk("Charlie", "Seuss", 1972075023, 2021, 80);
    bkk.display_summary();
 
    return 0;
}