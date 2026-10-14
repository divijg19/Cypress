#include "Book.hpp"

Book::Book(int id, std::string title, std::string author)
    : id(id), title(title), author(author), available(true) {}

void Book::markBorrowed() { available = false; }

void Book::markReturned() { available = true; }

int Book::getId() const { return id; }

const std::string &Book::getTitle() const { return title; }

const std::string &Book::getAuthor() const { return author; }

bool Book::isAvailable() const { return available; }
