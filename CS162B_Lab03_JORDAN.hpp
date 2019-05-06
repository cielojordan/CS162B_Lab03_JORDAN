#include <iostream>
using namespace std;

//Structure of the Node
struct Node {
	int data;
	Node *link;
};

// top pointer to keep track of the top of the stack
Node *topAddress = NULL;

// test whether container is empty
bool empty() {
	if (topAddress == NULL) {
		return true;
	} else {
		return false;
	}
}

// return size
void size(int counter) {
	cout << "The stack size is " << counter << ".";
}

// access next element
void top() {
	if ( empty() ) {
		cout << "No element." << endl;
	} else {
		cout << "Top element is: " << topAddress->data;
	}
}

// insert element
void push (int value, int counter) {
	Node *pointer = new Node();
	pointer->data = value;
	pointer->link = topAddress;
	topAddress = pointer;
}

// remove top element
void pop() {
	if ( empty() ) {
		cout << "Stack empty.";
	} else {
		Node *pointer = topAddress;
		topAddress = topAddress->link;
		delete(pointer);
	}
}

void IntStack() {
	if ( empty() ) {
		cout << "Stack empty.";
	} else {
		Node *currElement = topAddress;
		while( currElement != NULL) {
			cout << currElement->data << " ";
			currElement = currElement->link;
		}
		cout << "\n";
	}
}