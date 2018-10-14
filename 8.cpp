#include <iostream> 
using namespace std;
int main()
{
	int k, n, a;
	cin >> n;
	k = 0;
	a = n;
	if (n < 0) {
		n = -n;
	}
	while (n > 0){
		k = (k * 10) + (n % 10);
		n = n / 10;
	}
	if (a < 0) {
		cout << -k << endl;
	}
	else {
		cout << k << endl;
	}

	system("pause");
	return 0;

}
