#include <vector>
#include <string>

template <class T>
class Node {

    public:

        T data_;
        Node<T>* previous_;
        Node<T>* next_;

    
        Node(T data);
        void link(Node<T>* new_node);
        void setPrevious(Node<T>* previous);
        Node<T>* next();
        Node<T>* previous();
        T getData();
};




template <typename T>
Node<T>::Node(T data) : data_(data) {}

template <typename T>
void Node<T>::link(Node<T>* new_node) {
    next_ = new_node;
    new_node->setPrevious(this);
}

template <typename T>
void Node<T>::setPrevious(Node<T>* previous) {
    previous_ = previous;
}

template <typename T>
T Node<T>::getData() {
    return data_;
}