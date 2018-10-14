#include <iostream> 
using namespace std;

int main()
{
	int a, b, c, d;
	cout << "First cell coordinate: " << endl;
	cin >> a >> b;
	cout << "Second cell coordinate: " << endl;
	cin >> c >> d;
	if (a == c || b == d) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	system("pause");
	return 0;
}