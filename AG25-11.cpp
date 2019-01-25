#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int A[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	int ans = 0;
	for (int i = 1; i < n; i++) {
		if ((A[i] / 2) < A[i - 1] and A[i] > A[i - 1]) {
			ans++;
		}
	}
	cout << ans;
}