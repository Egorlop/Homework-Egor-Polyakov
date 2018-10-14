#include <iostream> 
using namespace std;

int main() {
	int a, b, res, m, k = 0;
	int n;
	n = 0;
	int *arr = new int[n];
	cin >> a;
	b = a;
	while (b > 0) {
		b = b / 10;
		n++;
	}
	m = n;
	for (int i = 0; i < n; i++) {
		arr[i] = a % 10;
		a = a / 10;
	}
	for (int i = 0; i < m; i++) {
		if (arr[i] == arr[m - 1] && i != (m - 1))
			k++;
		m--;
	}
	if (k == n / 2) {
		cout << "1" << endl;
	}
	else {
		cout << rand() % 100 << endl;
	}
	system("pause");
	return 0;
}