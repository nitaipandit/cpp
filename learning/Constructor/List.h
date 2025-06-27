#ifndef __LIST_H__
#define __LIST_H__

#include "Person.h"
#include <iostream>
class List {
private:
  struct Node {
    Person *m_PersonPtr;
    Node *m_NextNode;
    ~Node() { std::cout << "Destructing Node:" << this << std::endl; }
  };

public:
  List() : m_RootNode(nullptr), m_LastNode(nullptr) {}

  List(const List &list) : m_RootNode(nullptr), m_LastNode(nullptr) {
    *this = list;
  }
#if 1
  ~List() {
    Node *node = m_RootNode;
    while (node != nullptr) {
      delete node->m_PersonPtr;
      Node *currentNode = node;
      node = node->m_NextNode;
      delete currentNode;
    }
  }
#endif
  void addPerson(Person *person) {
    if (person == nullptr)
      return;

    Node *node = new Node();
    node->m_PersonPtr = person;
    node->m_NextNode = nullptr;
    if (m_RootNode == nullptr) {
      m_RootNode = node;
      m_LastNode = node;
    } else {
      m_LastNode->m_NextNode = node;
      m_LastNode = node;
    }
  }

  void displayPerson() {
    Node *node = m_RootNode;
    while (node != nullptr) {
      std::cout << node->m_PersonPtr << ":" << node->m_PersonPtr->m_Name
                << std::endl;
      node = node->m_NextNode;
    }
    std::cout << "===========================================" << std::endl;
  }

  void operator=(const List &list) {
    //    m_RootNode = list.m_RootNode;
    //   m_LastNode = list.m_LastNode;
    Node *node = list.m_RootNode;
    while (node != nullptr) {
      Person *p = new Person();
      *p = *node->m_PersonPtr;
      addPerson(p);
      node = node->m_NextNode;
    }
  }

private:
  Node *m_RootNode;
  Node *m_LastNode;
};

#endif
