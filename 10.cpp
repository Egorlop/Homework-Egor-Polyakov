#include <iostream> 
using namespace std;
int main()
{
	int A, f = 0, f1 = 0, f2 = 1, n = 0;
	cin >> A;
	while (A > f) {
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		n++;

	}
	n++;
	if (A == 1)
		cout << "1 or 2 ";
	else {
		if (A == f)
			cout << n;
		else
			cout << "-1";
	}
	system("pause");
	return 0;
}