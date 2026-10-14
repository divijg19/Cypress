#pragma once

#include <string>

class Book {
private:
  int id;
  std::string title;
  std::string author;
  bool available;

public:
  Book(int id, std::string title, std::string author);

  int getId() const;
  const std::string &getTitle() const;
  const std::string &getAuthor() const;
  bool isAvailable() const;

  void markBorrowed();
  void markReturned();
};
