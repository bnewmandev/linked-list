#include <iostream>
#include "linkedlist.h"

using namespace std;

int main() {
    Node<string> n1("First Node");
    Node<string> n2("Fred");
    Node<string> n3("Tom");
    Node<string> n4("James");
    Node<string> n5("Sam");
    Node<string> n6("Last Node");

    LinkedList<string> myList({&n1,&n2,&n3,&n4,&n5,&n6});


    cout << myList.get(0) << "\n";
    cout << myList.get(1) << "\n";
    cout << myList.get(2) << "\n";
    cout << myList.get(3) << "\n";
    cout << myList.get(4) << "\n";
    cout << myList.get(5) << "\n";
}