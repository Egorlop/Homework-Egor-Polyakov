#include <iostream> 
using namespace std;
int main()
{
	int f = 0, n, f1 = 0, f2 = 1;
	cin >> n;
	while (n > 1) {
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		n--;
	}
	if (n == 1) {
		cout << f2 << endl;
	}
	else {
		cout << f << endl;

	}

	system("pause");
	return 0;

}