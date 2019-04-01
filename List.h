#include <iostream>;
#pragma once

typedef struct Node
{
	int data;
	Node * next; //point to another node in the list

	Node() {
		this->data = NULL;
		this->next = NULL;
	}
	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
	Node(int data, Node * next) {
		this->data = data;
		this->next = next;
	}

}*nodePtr;

//typedef struct Node* nodeptr;

class List {
	
	//Operator overloading
	friend const List& operator+ (const List &obj1, const List &obj2);
	
	friend const List& operator=(const List &obj1);
	
	friend std::ostream& operator<<(std::ostream &output, const List &ls);
	friend std::istream& operator>>(std::istream &input, List &ls);
	
public:

	List();
	List(List * newObj);
	
	~List();
	void createnode(int);
	void insert_position(int position, int data);
	void delete_position(int position);
	void insert_start(int);
	void delete_first();
	void delete_last();
	void display();
	int countNode();

private:
	nodePtr head; //Node*
	nodePtr current; //Node*
	nodePtr previous; //Node*
	nodePtr temporary; //Node*
	nodePtr tail; //Node*

};