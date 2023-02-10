//It is an OOP concept that binds data with functionalities(which manipulate the data)
#include<iostream>
using namespace std;

class Rectangle{
	int width, height;
public:
	void set_values(int x, int y){
		width = x; height = y;
	}

	int area(){
		return width * height;
	}
};

int main(){
	Rectangle obj;
}