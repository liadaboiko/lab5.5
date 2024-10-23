#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int prog(int n, int depth)
{
	int k = 0;
	if (n == 0)
	{
		cout << "Kilkist = " << depth << endl;
		return 0;
	}
	++depth;
	return 1 + prog(n & (n - 1), depth);
}
int main()
{
	int n;
	cout << "n = "; cin >> n;
	cout << endl;
	cout << prog(n, 0) << endl;
	system("pause");
	return 0;
}
