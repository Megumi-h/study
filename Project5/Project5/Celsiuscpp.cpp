#include <iostream>
using namespace std;

float Fahrenheit(float);
int main()
{
	cout << "Please enter a Celsius value: ";
	float degrees;
	cin >> degrees;
	float a = Fahrenheit(degrees);
	cout << degrees << " degrees Celsius is " << a << " degrees Fahrenheit" << endl;
	return 0;
}

float Fahrenheit(float b)
{
	return 1.8 * b + 32.0;
}