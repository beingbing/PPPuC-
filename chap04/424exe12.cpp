#include "std_lib_facilities.h"
using namespace std;

int main () {
	cout<<"Enter max limit\n";
	int n{0};
	cin>>n;
	cout<<"the prime numbers between 1 to "<<n<<" are (both inclusive)\n";
	cout<<"2 3 ";
	for (int i=1; i<=n; i++) {
		for (int j=2; j<=i/2; j++) {
			if (i%j==0) {
				break;
			} else if (2*j+1>=i) {
				cout<<i<<" ";
			}
		}
	}
	return 0;
}