#include <iostream>
#include <vector>
#include <string>

class Book {
public:
    std::string title;
    std::string author;
    bool isAvailable;
};

class Library {
public:
    std::vector<Book> books;

    void addBook(const Book& book) {
        books.push_back(book);
    }

    void displayBooks() {
        for (const auto& book : books) {
            std::cout << "Title: " << book.title << ", Author: " << book.author << ", Available: " << (book.isAvailable ? "Yes" : "No") << std::endl;
        }
    }
};

int main() {
    Library library;

    Book book1{"The Catcher in the Rye", "J.D. Salinger", true};
    Book book2{"To Kill a Mockingbird", "Harper Lee", false};

    library.addBook(book1);
    library.addBook(book2);

    library.displayBooks();

    return 0;
}
