#include <iostream>
using namespace std;

int main() {
	int n, n1, n2 = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> n1;
		if (n1 % 2 == 1 and n1 % 3 == 0) {
		n2 *= n1;
		}
	}
	cout << n2;
}
