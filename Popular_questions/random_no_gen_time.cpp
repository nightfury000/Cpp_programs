//As we have observed in previous example that random numbers generate the same so we need to consider a unique factor
//and that is time so we will consider wrt time
//Basically we use rand() function to generate random values but there is also a function called srand() which generates pseudo random 
//values when we give unique seed value.
//A seed value holds key to the series of random numbers. So same random numbers will be repeated if same seed value is given.

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	int n;
	cin >> n;
	
	
	srand((unsigned) time(NULL));	//Here we pass time as seed value, unsigned: so the value should be non-negative, NULL: null pointer constant which evaluates to zero.

	for(int i=0; i<n; i++){
		int random = rand();
		cout << random << " " ;
		}

	return 0;
}
