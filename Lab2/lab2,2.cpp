#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n % 2 == 0 && 2 <= n && n <= 5)
	{
		cout << "Not Super" << endl;
	}
	else if (n % 2 == 0 && 6 <= n && n <= 20)
	{
		cout << "Super" << endl;
	}
	else if (n % 2 == 1)
	{
		cout << "Super" << endl;
	}
	else
	{
		cout << "Not Super" << endl;
	}

	return 0;
}
