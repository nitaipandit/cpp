#ifndef __PERSON_H__
#define __PERSON_H__
#include <new>
#include <string>

enum class EGender { Male, Female, Other };

class Person {
public:
  /*
   * Constructor is a special function whose name must be same as class name and
   * doesnt contain any return type.
   * */
  /*
   * Default Constructor, Compiler adds this constructor if no other constructor
   * is defined.
   */

  Person() {}

  /*
   * User defined constructor
   **/
  Person(std::string name) { m_Name = name; }

  /*
   // int x; x = 0; // Assignment => create memory then assign the value
   // int x = 0; // Initialization => initlize meory with the value while memory
  creation

  Person(std::string name, unsigned short int age) {
    m_Name = name;  // Assignment
    m_Age = age;
  }
  // This also can be written as below, optimized version:
  */

  Person(const std::string &name, unsigned short int age)
      : m_Name(name), m_Age(age), m_Gender(EGender::Male) {} // Initializer list

  Person(const std::string &name, unsigned short int age, EGender gender)
      : Person(name, age) {
    m_Gender = gender;
  }

  // ------------------ Copy Constructor -----------------------------
  Person(const Person &p) { m_Name = "Copied name:" + p.m_Name; }

public:
  std::string m_Name;
  unsigned short int m_Age;
  EGender m_Gender;
  std::string m_MobileNumber;
  std::string m_Address;
};
#endif //__PERSON_H__
