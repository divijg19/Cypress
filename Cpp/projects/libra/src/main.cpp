#include <iostream>

#include "Book.hpp"

int main() {
  Book book(1, "Dune", "Frank Herbert");

  std::cout << book.getId() << '\n';
  std::cout << book.getTitle() << '\n';
  std::cout << book.getAuthor() << '\n';
  std::cout << book.isAvailable() << '\n';

  std::cout << std::boolalpha;
  book.markBorrowed();
  std::cout << book.isAvailable() << '\n';
  book.markReturned();
  std::cout << book.isAvailable() << '\n';
}
