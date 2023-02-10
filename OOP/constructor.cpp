//Constructor is a special method which is invoked automatically at the time object creation. It is used to initialize the members of new object.
//It has same name as that of class or structure
//There are 3 types Default, Parameterized, Copy Constructor


// DEFAULT CONSTRUCTOR

#include<iostream>
using namespace std;

/*
class Employee{
public:
	Employee(){											//default constructor
		cout << "Default Constructor invoked" << endl;
	}
};

int main() {
	Employee e1; 										//creating an object of Employee
	Employee e2;

	return 0;
}

*/


// PARAMETERIZED CONSTRUCTOR

/*
class Employee{
public:
	int id;
	string name;
	float salary;

	Employee(int i, string n, float s){
		id = i;
		name = n;
		salary = s;

	}

	void display(){
		cout << id <<" " <<name<< " " <<salary<< endl;
	}

};

int main(){

	Employee e1 = Employee(101, "Peter", 30000);
	Employee e2 = Employee(102, "John", 15000);

	e1.display();
	e2.display();


	return 0;
}
*/


//		COPY CONSTRUCTOR
// A copy constructor is a member function that initializes an object using another object of same class. 
// A constructor which creates an object by initializing it with an object of the same  class, which has been created previously is known as copy constructor.

class Point(){
private:
	int x, y;

public:
	Point(int x1, int y1){
		x = x1, y = y1;
	}

	Point(const Point& p1){
		x = p1.x;
	}

	int getX()
};

