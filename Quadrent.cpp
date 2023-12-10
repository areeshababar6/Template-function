#include <iostream>
#include <string>
using namespace std;

template<class T>
void quad(T x, T y)
{
	if (x == 0 && y == 0)
		cout << " Lies on origin:" << endl;
	else if (x > 0 && y > 0)
		cout << "lies in 1st Q" << endl;
	else if (x < 0 && y>0)
		cout << "lies in 2nd Q" << endl;
	else if (x < 0 && y < 0)
		cout << "lies in 3rd Q" << endl;
	else if (x > 0 && y < 0)
		cout << "lies in 4th Q" << endl;
	else if (x < 0 && y == 0)
		cout << "lies on negative x-axis" << endl;
	else if (x > 0 && y==0)
		cout << "lies on positive x-axis" << endl;
	else if (x == 0 && y < 0)
		cout << "lies on negative y-axis" << endl;
	else if (x == 0 && y>0)
		cout << "lies on positive y-axis" << endl;
}

int main()
{
	double x, y;
	cin >> x >> y;

	quad<double>(x, y);

	return 0;
}