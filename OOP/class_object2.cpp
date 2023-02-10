#include<iostream>
//#include<string>
using namespace std;

class Student{
public:
	int id;			//attributes, data members
	string name;

	void insert(int i, string n){	//member functions with parameter
		id = i;
		name = n;
	}

	void display(){
		cout << id << " " << name << endl;
	}

};

int main(){
	Student s1;  //created object
	Student s2;  

	s1.insert(201, "Peter");	//accessed function
	s2.insert(202, "John");

	s1.display();
	s2.display();

	return 0;
}