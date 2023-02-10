//It destructs the objects of classes. It can be defined only once in a class.
//It has same name as that of class but is prefixed with ~

#include<iostream>
using namespace std;

class Employee{
public:
	Employee(){
		cout << "Constructor invoked" << endl;
	}

	~Employee(){
		cout << "Destructor invoked" << endl;
	}
};


int main(){

	Employee e1;
	Employee e2;

	return 0;
}