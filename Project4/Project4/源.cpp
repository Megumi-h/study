#include <iostream>
using namespace std;

int howmonths(int);
int main()
{
	cout << "Enter your age: ";
	int age;
	cin >> age;
	int months = howmonths(age);
	cout << "Your age in months is: " << months << endl;
	return 0;
}

int howmonths(int n)
{
	return n * 12;
}