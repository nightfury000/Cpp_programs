//Inheritance is a process in which one object acquires all the properties and behaviours of its parent object automatically. Code reusability
//The class which inherits the members of another class  is called derived class and the class whose members are inherited is called the base class.
//Two types Single level inheritance and Multilevel inheritance.

#include<iostream>
using namespace std;

class Animal{
public:
	void eat(){
		cout << "Eating ..." << endl;
	}
};

class Dog: public Animal
{
	public:
		void bark(){
			cout << "Barking..."<< endl;

	}
};

class BabyDog: public Dog{
public:
	void weep(){
		cout << "Weeping..."<<endl;
	}
};

int main(){
	BabyDog d1;
	d1.eat();
	d1.bark();
	d1.weep();

	return 0;
}
