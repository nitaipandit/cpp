#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
class Library {
private:
  std::string book_id;
  std::string title;
  std::string author;

public:
  void addbook();
  void viewbook();
  void Searchbook();
  void returnbook();
};

int main() {
  Library l1;
  int choise;
  do {
    std::cout << "1.Add Books." << std::endl;
    std::cout << "2.View All Books." << std::endl;
    std::cout << "3.Search Books." << std::endl;
    std::cout << "4.exit." << std::endl;
    std::cout << std::endl;
    std::cout << "enter your choise:";
    std::cin >> choise;
    switch (choise) {
    case 1: {
      l1.addbook();
      break;
    }
    case 2: {
      l1.viewbook();
      break;
    }
    case 3: {
      l1.Searchbook();
      break;
    }
    case 4: {
      return 0;
      break;
    }
    default: {
      std::cout << "invalide choise." << std::endl;
    }
    }
  } while (choise != 5);
}

void Library::addbook() {
  std::ofstream file("library.txt", std::ios::app);
  std::cin.ignore();
  std::cout << "Enter book id:";
  std::getline(std::cin, book_id);
  std::cout << "Enter Title:";
  std::getline(std::cin, title);
  std::cout << "Enter Book Author:";
  std::getline(std::cin, author);

  file << book_id << '\n';
  file << title << '\n';
  file << author << '\n';
  file.close();
  std::cout << "Book Add Successfully:\n";
  std::cout << "-------------------------------------" << std::endl;
}
void Library::viewbook() {
  std::ifstream file("library.txt");
  std::string id, t, a;
  while (std::getline(file, id)) {
    std::getline(file, t);
    std::getline(file, a);

    std::cout << "Book Id:" << id << "\n";
    std::cout << "Title:" << t << std::endl;
    std::cout << "Author" << a << std::endl;
    std::cout << "-----------------------------------" << std::endl;
  }
  file.close();
}

void Library::Searchbook() {
  std::ifstream file("library.txt");
  std::string id, t, a;
  std::string search;
  bool found = false;
  std::cin.ignore();
  std::cout << "Enter Book Id to found:";
  std::getline(std::cin, search);

  while (std::getline(file, id)) {
    std::getline(file, t);
    std::getline(file, a);

    if (id == search) {
      std::cout << "Book Found\n" << std::endl;
      std::cout << "Book Id:" << id << std::endl;
      std::cout << "Title:" << t << std::endl;
      std::cout << "Author:" << a << std::endl;
      std::cout << "-------------------------------" << std::endl;
      found = true;
      break;
    }
  }
  if (!found) {
    std::cout << "Book Not Found:\n";
  }
  file.close();
}
