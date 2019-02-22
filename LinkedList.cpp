/*Author: Jeffrey Avalos
*This program is a singly Linked List implementation
A linked list is a sequence of elements that each contain a pointer to the next element.
*/
#include <iostream>
using namespace std;

//This class implements the node that will make up the linked list
template <class Element>
class Node {
	Element data;//Data each node contains
	Node<Element> *next;//Pointer to next node in the linked list	
	//Constructor
	Node(Element);
	
};
template <class Element>
Node<Element>::Node(Element value) {
	data = value;
	next = nullptr;
}

//This class implments the linked list that will contain different nodes.
template <class Element>
class LinkedList {
public:
	LinkedList();
	~LinkedList();
	void displayList() const;
	void appendNode(Element);
private:
	Node<Element> *head;
};
//Constructor initializes head pointer to null as there is no nodes.
template <class Element>
LinkedList<Element>::LinkedList() {
	head = nullptr;
}
//Destructor that destroys all linked list nodes and their pointers.
template <class Element>
LinkedList<Element>::~LinkedList() {

}
//This function outputs the LinkedList node's data.
template <class Element>
void LinkedList<Element> ::displayList() const {
	Node<Element> *cursor; //pointer holds position throughout traversal
	cursor = head; //position cursor to head of linked list

	//traverse linked list
	while (cursor) {
		cout << cursor->data; //Display data
		cursor = cursor->next; //Move cursor to next node
	}
}
//This function adds a node to the end of the LinkedList.
template <class Element>
void LinkedList<Element>::appendNode(Element data) {
	Node<Element> *newNode;
	Node<Element> *cursor;
	Node<Element> newNode = new Node(data);
}
int main() {
	cout << "Hello world";
	return 0;
}