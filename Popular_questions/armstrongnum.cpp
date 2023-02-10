
// armstrong number means e.g 371 = (3x3x3) + (7x7x7) + (1x1x1)

#include<iostream>
using namespace std;
int main() {
	int n, r, sum=0, temp;
	cout << "Enter number:" << endl;
	cin >> n;
	temp = n;

	while(n>0)
	{
		r = n%10;
		sum = sum + (r*r*r);
		n = n/10;
	}

	if(temp == sum){
		cout << "Armstrong no." << endl;
	}
	else
		cout << "Not Armstrong no." << endl;


	return 0;
}
