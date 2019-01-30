#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int A[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	int x = A[0] + A[5];
	for (int i = 0; i < n; i++) {
		for (int j = i + 5; j < n; j++) {
			if (x > A[i] + A[j]) {
				x = A[i] + A[j];
			}
		}
	}
	cout << x;
}
