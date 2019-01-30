#include <iostream>
using namespace std;
void rec(int a, int b, int &k)
{
	if (x == b) k++;
	else
	{
		if (a <= b) rec(a + 1, b, k);
		if (a <= b) rec(a * 2, b, k);
		if (a <= b) rec(a * 3, b, k);
	}
}
int main()
{
	int a, b, k = 0;
	cin >> a >> b;
	rec(a, b, k);
	cout << k;
	return 0;
}
