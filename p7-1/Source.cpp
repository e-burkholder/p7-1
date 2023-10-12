#include <iostream>
#include <cmath>

using namespace std;

/**
   Computes the volume of a cube.
   @param side_length the side length of the cube
   @return the volume
*/
double smallest(double x, double y, double a)
{
	double smallestNum;
	if (x <= y && x <= a)
		smallestNum = x;
	else if (y <= x && y <= a)
		smallestNum = y;
	else if (a <= x && a <= y)
		smallestNum = a;
	return smallestNum;
}

double average(double x, double y, double a)
{
	double averageNum = (x + y + a) / 3;
	return averageNum;
}

int main()
{
	double x, y, a, smallestNum, averageNum;
	cout << "Enter three numbers: ";
	cin >> x >> y >> a;
	smallestNum = smallest(x, y, a);
	averageNum = average(x, y, a);
	cout << "Smallest value is " << smallestNum<<endl;
	cout << "Average is " << averageNum<<endl;

	return 0;
}