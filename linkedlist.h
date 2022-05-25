#include <vector>
#include <string>

#include "node.h"

template <class T>
class LinkedList {
    public:

        Node<T>* first_;
        Node<T>* last_;
        int length_;
        LinkedList(std::vector<Node<T>*> nodeList);
        void add(Node<T>* newNode);
        T get(int index);
        int size();

};


template <typename T>
LinkedList<T>::LinkedList(std::vector<Node<T>*> nodeList) : length_(0), first_(nullptr), last_(nullptr) {
    if (nodeList.size() > 0) {
        for (int i = 0; i < nodeList.size(); i++) {
            add(nodeList[i]);
        }
    }
}

template <typename T>
void LinkedList<T>::add(Node<T>* newNode) {
    if (first_ == nullptr) {
        first_ = newNode;
    } else {
        last_->link(newNode);
    }
    last_ = newNode;
    length_ += 1;
}

template <typename T>
T LinkedList<T>::get(int index) {
    Node<T>* current = first_;
    for (int i = 0; i < length_ ; i++) {
        if (i == index) {
            return current->getData();
        } else {
            Node<T>* newNode = current->next_;
            current = newNode;
        }
    }
    return NULL;
}

template <typename T> 
int LinkedList<T>::size() {
    return length_;
}