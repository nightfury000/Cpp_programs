#include<iostream>
#include<string>
using namespace std;

class Phone{
	string p_name;		//Attributes
	string p_size;		//Attributes

public:					//Access specifier
	
	Phone(string name, string size){	//Constructor
		p_name = name;
		p_size = size;

	}


	void makeCall(){	//Functions
		cout << "Making Call Using " << p_name << endl;
	}

	void receiveCall(){	 //Functions
		cout << "Receive Call Using " << p_size << endl;
	}



};


int main() {
	Phone Mi("Redmi_note_12", "1000x500");
	Mi.makeCall();
	Mi.receiveCall();
	cout << endl;




	return 0;
}
