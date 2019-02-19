/*Author: Jeffrey Avalos
This program is an array based stack implementation.
A stack is a data structure of ordered items that can be inserted or removed only from the top.
*/
#include <iostream>

const int CAPACITY = 10; //Capacity of the stack

using namespace std;

template <typename Element>
class ArrayStack 
{
public:
	Element pop();
	void push(Element);
	void peek();
	bool isEmpty();
	int size();
	ArrayStack();
private:
	int topPosition;
	Element stack[CAPACITY];
};
//Initialize a stack with a top that does not exist.
template <typename Element> ArrayStack<Element>::ArrayStack() {
	topPosition = -1;
}
//Pop the element at the top of the stack.
template <typename Element> Element ArrayStack<Element>::pop() {
	return stack[topPosition--];
}
//Push an element into the top of the stack.
template <typename Element> void ArrayStack<Element>::push(Element elem) {
	stack[++topPosition] = elem;
}
//Output the top of the stack without removing it.
template <typename Element> void ArrayStack<Element>::peek() {
	cout << stack[topPosition];
}
//Return true if the stack is empty and false if the stack is not empty.
template <typename Element> bool ArrayStack<Element>::isEmpty() {
	if (topPosition < 0)
		return true;
	else
		return false;
}
//Return the number of elements in the stack.
template <typename Element> int ArrayStack<Element>::size() {
	if (isEmpty)
		return 0;
	else
		return ++topPosition;
}
int main() {
	ArrayStack<char> stack;
	//Reverse the character array containing the string Hello.
	char aString[] = { 'H','e','l', 'l', 'o' };
	int iteration = 0;
	while (iteration < 5) {
		stack.push(aString[iteration]);
		iteration++;
	}
	iteration = 0;
	while (iteration < 5) {
		cout << stack.pop();
		iteration++;
	}
	
		
	return 0;
}