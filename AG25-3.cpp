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
		if (b >= a + 9)rec(a, b - 9, c);
		if (check(b) == true)rec(a, sqrt(b), c);
		if (b % 7 == 0 && b / 7 >= a)rec(a, b / 7, c);
		if (b % 10 == 1 && (b - 1) / 10 >= a)rec(a, (b - 1) / 10, c);
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
