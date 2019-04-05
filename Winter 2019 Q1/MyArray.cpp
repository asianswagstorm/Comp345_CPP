#include "MyArray.h";
#include <iostream>;

/*
By: Andy Nguyen (27333870)
*/

//default constructor
MyArray::MyArray() {
	this->size = 0;
	this->theArray = new int[this->size];
}

//b constructor that takes in static array
MyArray::MyArray(int arr []) {
	this->size = sizeof(arr);
	this->theArray = new int[this->size];
	
	for (int i = 0; i < this->size; i++) {
		if (isInArray(arr[i]))
			continue;
		else
			this->getArray()[i] = arr[i];
		
	}

}

//c copy constructor
MyArray::MyArray(MyArray &copy) {
	this->theArray = copy.theArray;
	this->size = copy.size;
}

//h destructor
MyArray::~MyArray() {
	//this->size = 0;
	//delete[] theArray; (already deallocate memory with delete[] copiedArray;)
}

//d assignment operater
const MyArray& MyArray::operator=(const MyArray &right){
this->size = right.size;
this->theArray = right.theArray;

for (int i = 0; this->size; i++) {
	this->theArray[i] = right.theArray[i];
}

return *this;

}

bool MyArray::isInArray(int index) {
	for (int i = 0; i < sizeof(this->getArray()); i++) {
		if (index == this->getArray()[i]) {
			return true;
		}
		else return false;
	}

}
inline int * MyArray::getArray() {
	return this->theArray;
}
inline int MyArray::getSize() {
	return this->size;
}
/*
int main() {

	int static_array[] = { 1,2,3,4 };
	//a
	MyArray obj(static_array);
	//b
	MyArray * copiedArray = new MyArray(obj);
	//c
	std::cout << "Contents in the array:" << std::endl;
	for (int i = 0; i < copiedArray->getSize(); i++) {
		std::cout << copiedArray->getArray()[i] << ", ";
	}
	std::cout << std::endl;

	//d
	delete[] copiedArray;

	system("pause");
	return EXIT_SUCCESS;
}
*/
