#include <iostream> 
using namespace std;
int main()
{
	int k = 1;
	int i = 0;
	int arr[100];
	for (int i = 0; i < 100; i++)
	{
		cin >> arr[i];
		if (arr[i] == 0)
			break;
	}
	for (int i = 0; i < 100; i++) {
		if (arr[i] == arr[i + 1]) {
			k++;
		}
		if (arr[i] == 0) {
			break;
		}

	}
	cout << k << endl;

	system("pause");
	return 0;

}