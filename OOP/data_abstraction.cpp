//public private data members are example of data abstraction
//It is concept that is used to show only necessary things. Hiding the implementation part.

#include<iostream>
using namespace std;
class Sum{
private:
	int x, y, z;
public:
	void add(){
		cout << "Enter two numbers:" << endl;
		cin >> x >> y;
		z = x + y;
		cout << "Sum of two numbers is:" << z << endl;
	}
};

int main() {
	Sum sm;
	sm.add();

	return 0;
}