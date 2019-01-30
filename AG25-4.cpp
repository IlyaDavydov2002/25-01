#include <iostream>
#include <cmath>
using namespace std;
bool check(int a) {
	double b = a;
	if (sqrt(b) == sqrt(a))return true;
	else return false;
}
void rec(int a, int b, int& c) {
	if (a == b) {
		c++;
	}
	else {
		if (b >= a + 5)rec(a, b - 5, c);
		if (check(b) == true)rec(a, sqrt(b), c);
		if (b % 3 == 0 && b / 3 >= a)rec(a, b / 3, c);
		if (b % 10 == 2 && (b - 2) / 10 >= a)rec(a, (b - 2) / 10, c);
	}
}
int main()
{
	int a, b, c = 0;
	cin >> a >> b;
	rec(a, b, c);
	if (c > 0)cout << "YES";
	else cout << "NO";
	return 0;
}
