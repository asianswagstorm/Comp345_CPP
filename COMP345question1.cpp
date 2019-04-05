#include "List.h";
#include<iostream>
#include <string>

using namespace std;

/*int main(){
	List obj;
	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);
	
	std::cout<<"\n--------------------------------------------------\n"
	<< std::endl <<"---------------Displaying All nodes---------------"
	<< std::endl<<"\n--------------------------------------------------\n";
	
	obj.display();
	std::cout << std::endl << std::endl <<"Size of list is: " << obj.countNode() << std::endl;

	
	cout<<"\n--------------------------------------------------\n"
	<< std::endl << "-----------------Inserting At End-----------------"
	<< std::endl << "\n--------------------------------------------------\n";
	
	obj.createnode(55);
	obj.display();
	
	std::cout<<"\n--------------------------------------------------\n"
	<< std::endl <<"----------------Inserting At Start----------------"
	<< std::endl <<"\n--------------------------------------------------\n";
	
	obj.insert_start(50);
	obj.display();
	
	cout<<"\n--------------------------------------------------\n"
	<< std::endl <<"-------------Inserting At Particular--------------"
	<< std::endl <<"\n--------------------------------------------------\n";
	
	obj.insert_position(5,60);
	obj.display();
	
	std::cout<<"\n--------------------------------------------------\n"
	<< std::endl <<"----------------Deleting At Start-----------------"
	<< std::endl <<"\n--------------------------------------------------\n";
	
	obj.delete_first();
	obj.display();
	std::cout<<"\n--------------------------------------------------\n"
	<< std::endl <<"-----------------Deleting At End-------------------"
	<< std::endl <<"\n--------------------------------------------------\n";
	obj.delete_last();
	obj.display();
	std::cout<<"\n--------------------------------------------------\n"
	<< std::endl <<"--------------Deleting At Particular--------------"
	<< std::endl <<"\n--------------------------------------------------\n";
	
	obj.delete_position(4);
	obj.display();

	std::cout << "\n--------------------------------------------------\n"
	<< std::endl << "--------------Using answer code-----------------"
	<< std::endl << "\n--------------------------------------------------\n";
	
	
	std::cout << "\n--------------------------------------------------\n"
	<< std::endl << "--------------Using copy constructor-----------------"
	<< std::endl << "\n--------------------------------------------------\n";
	
	List obj1(obj);//copy contructor (works)
	
	// overloaded operator<< ostream
	std::cout << obj1 << std::endl; // 0
	
	//obj.display();
	std::cout << std::endl;
	//obj1.display();
	
	std::cout << "\n--------------------------------------------------\n"
	<<std::endl << "--------------Using assignment operator-----------------"
	<< std::endl << "\n--------------------------------------------------\n";
	List obj2; //default object
	obj2 = obj1; //List &List::operator=(const List &), created when created the copy contructor???
	//obj2.display(); //obj2.display();
	std::cout << obj2 << std::endl;
	
	std::cout << "\n--------------------------------------------------\n"
	<<std::endl << "--------------Using stream input-----------------"
	<< std::endl << "\n--------------------------------------------------\n";
	
	cin >> obj1 >> obj1;
	cout << obj1 << endl;

	//operator overloading
	std::cout << "\n--------------------------------------------------\n"
	<<std::endl << "--------------Using operator+-----------------"
	<< std::endl << "\n--------------------------------------------------\n";
	
	List obj3, obj4;
	obj3.createnode(1);
	obj3.createnode(2);
	obj3.createnode(3);
	obj3.createnode(3);

	obj4.createnode(4);
	obj4.createnode(5);
	obj4.createnode(6);
	std::cout << "obj3 List: " << std::endl << obj3 << std::endl;
	std::cout << "obj4 List: " << std::endl << obj4 << std::endl;
	std::cout << "obj3 + obj4: " << std::endl << (obj3 + obj4) << std::endl; 

	system("PAUSE");
	return EXIT_SUCCESS;
}*/