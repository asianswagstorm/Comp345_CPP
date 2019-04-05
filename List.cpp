#include <iostream>;
#include <algorithm>;
#include "List.h";

List::List() {
	this->head = NULL; //the first node int the list 

	this->current = NULL;
	this->previous = NULL;
	this->temporary = NULL; // temporary node pointer
	
	this->tail = NULL; //the last node int the list  
}

/*List::List(const List * ls) { //copy constructor
	this->head = ls->head; //the first node int the list 
	this->current = ls->current;
	this->previous = ls->previous;
	this->temporary = ls->temporary; // temporary node pointer
	this->tail = ls->tail; //the last node int the list  
}*/
//or
List::List(const List& ls) { //copy constructor
	this->head = NULL;
	*this = ls; //assumes head pointer points to NULL,
	//*this is the new list object the copy constructor will make. assign it the the passed in  
}

List::~List() {}

typedef struct Node* nodePtr;

void List::createnode(int data) {
	this->temporary = new Node(data);//this->data is data, this->next is NULL

	if (this->head == NULL) { //if head doesn't exist (Linked List doesnt exist), creating single list where head and tail is the same node
		this->head = this->temporary;
		this->tail = this->temporary;
		this->temporary = NULL;
	}
	else { // if list is not empty
		this->tail->next = this->temporary; //old tail points to new node
		this->tail = this->temporary; // the new node is the tail of the list 
	}
}
void List::display() {
	this->temporary = new Node;
	this->temporary = this->head;
	while (this->temporary != NULL) {
		std::cout << this->temporary->data << "\t";
		this->temporary = this->temporary->next;
	}
}

void List::insert_start(int data) {
	this->temporary = new Node(data, this->head);
	this->head = this->temporary;
}
void List::insert_position(int position, int data) {
	this->previous = new Node;
	this->current = new Node;

	this->current = this->head;
	for (int i = 1; i < position; i++) {
		this->previous = this->current;
		this->current = this->current->next;
	}
	this->temporary = new Node(data, this->current);
	this->previous->next = this->temporary;
}
void List::delete_first() {
	if (this->head == NULL) {
		std::cout << " THE LIST IS EMPTY, HEAD IS NULL" << std::endl;
	}
	else {
		this->temporary = new Node;
		this->temporary = this->head; // point our temporary node to the head.
		this->head = this->head->next;//head points to the address of the next node
		delete this->temporary;
		//or
		//free(this->temporary);
	}
}

void List::delete_last() {
	this->current = new Node;
	this->previous = new Node;

	if (this->head == NULL) {
		std::cout << " THE LIST IS EMPTY, HEAD IS NULL" << std::endl;
	}
	if (this->head->next == NULL) { //if only one node in the list 
		this->current = this->head;
		this->head = NULL;
		delete this->current;
	}

	else { // more than 1 node 
		this->current = this->head;
		while (this->current->next != NULL) {
			this->previous = this->current;
			this->current = this->current->next;
		}
		this->tail = this->previous;
		this->previous->next = NULL;//setting next as null 
		delete this->current;
	}
}
void List::delete_position(int position) {
	this->current = new Node;
	this->previous = new Node;
	this->current = this->head;
	for (int i = 1; i < position; i++) {
		this->previous = this->current;
		this->current = this->current->next;
	}
	this->previous->next = this->current->next;
	delete this->current;
}

int List::countNode() {
	int count = 1;
	if (this->head != NULL) {
		this->current = this->head;
		while (this->current->next != NULL) {
			this->current = this->current->next;
			count++;
		}
		return count;
	}
	else {
		std::cout << "The LIST is empty, head node is NULL" << std::endl;
		return -1;
	}
}

List operator+(const List &left, const List &right) {
	List sumList;
	nodePtr node1 = new Node;
	node1 = left.head;
	nodePtr node2 = new Node;
	node2 = right.head;
	while(node1 != NULL && node2 != NULL){
	int sum = (node1->data + node2->data); //data for the new node about to create
	sumList.createnode(sum);//creating the node and putting in an new list
	node1 = node1->next;
	node2 = node2->next;
	}

	if (node1 == NULL || node2 == NULL) {
		delete(node1);
		delete(node2);
	}
	//sumList.display();
	return sumList;
}

List& List::operator=(const List &right) {
	nodePtr temporary = new Node;
	temporary = right.head;
	while (temporary != NULL) {
		this->createnode(temporary->data);
		temporary = temporary->next;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& out, const List &right) { //logic is same as display()
	nodePtr temporary = new Node; ///notePtr = Node*
	temporary = right.head;
	while (temporary != NULL) {
		out << temporary->data << "\t";
		temporary = temporary->next;
	}
	return out;
}

std::istream& operator>>(std::istream &in, List &ls) { 
	nodePtr temporary = new Node;
	in >> temporary->data ;
	ls.createnode(temporary->data);
	return in; 
}

