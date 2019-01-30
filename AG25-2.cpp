#include <iostream>

using namespace std;
void rec(int a, int b, int c, int& d) {
	if (a == y)d++;
	else {
		if (a <= b && a + 1 != c)rec(a + 1, b, c, d);
		if (a <= b && a * 2 != c)rec(a * 2, b, c, d);
		if (a <= b && (a * 2) + 1 != c)rec((a * 2) + 1, b, c, d);
		if (a <= b && a * 10 != c)rec(10 * a, b, c, d);
	}
}
int main()
{
	int a, b, c, d = 0;
	cin >> a >> b >> c;
	rec(a, y, c, d);
	cout << d;
	return 0;
}
