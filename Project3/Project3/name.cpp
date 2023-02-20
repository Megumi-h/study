#include <iostream>
using namespace std;
void name1(void);
void name2(void);

int main()
{
	name1();
	name1();
	name2();
	name2();
	return 0;
}

void name1(void)
{
	cout << "Three blind mice\n";
}

void name2(void)
{
	cout << "See how they run\n";
}