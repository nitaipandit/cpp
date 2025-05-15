#include "Person.h"
#include <iostream>
#include <vector>

int main() {
  std::vector<Person> personList;
  /* Creates multiple copies
  Person p1("Rahul"); // creates object
  personList.push_back(p1); // copies given object
  */
  personList.emplace_back(
      "Rahul"); // Calls Person constructor to create Person object
  // Person p2("Rohit", 20);
  personList.emplace_back("Rohit", 20);
  personList.emplace_back("Rani", 21, EGender::Female);

  for (const Person &p : personList) {
    std::cout << "Name:" << p.m_Name << " Age:" << p.m_Age
              << " Gender:" << (int)p.m_Gender
              << " MobileNumber:" << p.m_MobileNumber << std::endl;
  }

  Person person1("Person1");
  Person person2 = person1; // smae as => Person person2(person1)
  std::cout << "Person1: " << person1.m_Name << std::endl;
  std::cout << "Person2: " << person2.m_Name << std::endl;
}
