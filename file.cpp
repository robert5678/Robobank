#include <iostream> 
#include <iomanip> 
#include <math.h>
using namespace std;
int main()
{
	float  h, y;
	int min, max, x;
	cout << "Enter min = ";
	cin >> min;
	cout << "Enter max = ";
	cin >> max;
	cout << "Enter h = ";
	cin >> h;
	x = min;
	cout << "While" << endl;
	while (x <= max)
	{
		y = (log(sin(x)));
		cout << setw(10) << "x= " << x  << setw(10) << "y= " <<setprecision(3) << y << endl;
		x += h;
	}
	cout << "do while" << endl;
	x = min;
	do {
		y = ((log(sin(x))));
		cout << setw(10) << "x= " << x << setw(10) << "y= " <<setprecision(3)<< y << endl;
		x += h;
	} while (x <= max);
	cout << "Hello";
	return 0;
}