#include <iostream>
using namespace std;

void swag(int* A, int b, int c) {
	for (int i = 1; i < b; i++) {
		A[i - 1] = A[i];
	}
	A[n - 1] = c;
}
int main() {
	int A[5];
	for (int i = 0; i < 5; i++) {
		cin >> A[i];
	}
	int x = A[0] * A[4], c, b;
	cin >> b;
	for (int i = 0; i < b - 5; i++) {
		cin >> c;
		if (i - 1 < i) {
			if (A[i - 1] * c < x) {
				x = A[i - 1] * c;
			}
		}
		else {
			if (A[i] * c < x) {
				x = A[i] * c;
			}
		}
		swag(A, 5, c);
	}
	cout << x;
}
