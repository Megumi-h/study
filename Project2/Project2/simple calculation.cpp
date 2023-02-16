#include <iostream>

int main()
{
	using namespace std;
	double distance;
	cout << "Please enter how long: ";
	cin >> distance;
	double yard = distance * 220;
	cout << distance << " long= " << yard << " yard";
	cout << endl;
	return 0;
}