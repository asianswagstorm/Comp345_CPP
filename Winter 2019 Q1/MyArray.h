#pragma once
class MyArray {

public:

	MyArray();
	MyArray(int arr []);
	MyArray(MyArray &copy);
	const MyArray& operator=(const MyArray &right);
	bool isInArray(int index);
	inline int * getArray();
	inline int getSize();
	~MyArray();

private:
	int size;
	int * theArray;

};

/*
By: Andy Nguyen (27333870)
*/