//The terms polymorphism is a combination of two words "poly" + "morphs" which means many forms.
//There are two types compile time polymorphism and runtime polymorphism
//Runtime polymorphism: It is achieved by method overriding.
//Compile time polymorphism: It is achieved by function overloading and operator overloading

//   RUNTIME POLYMORPHISM

#include<iostream>
using namespace std;

class Animal{
public:
	void eat(){
		cout << "Eating...";
	}
};

class Dog:public Animal
{
public:
	void eat(){
		cout << "Eating bread...";
	}
};

int main(void){
	Dog d = Dog();
	d.eat();
	return 0;
}


//   COMPILE TIME POLYMORPHISM

#include<iostream>
using namespace std;
class Shape{
public:
	virtual void draw(){
		cout << "drawing..." << endl;
	}
};

class Rectangle:public Shape{
public:
	void draw(){
		cout << "drawing rectangle..." << endl;
	}

};


class Circle:public Shape
{
public:
	void draw(){
		cout << "drawing circle..." << endl;
	}
};


int main(void){
	Shape*s;
	Shape sh;
	Rectangle rec;
	Circle cir;
	s=&rec;
	s->draw();
	s=0;
	s->draw();
}