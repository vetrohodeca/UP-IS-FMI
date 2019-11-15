#include<iostream>
#include<string>

using namespace std;

bool intersection(double start1[2], double end1[2],
	double start2[2], double end2[2])
{
	double ax = end1[0] - start1[0];
	double ay = end1[1] - start1[1];

	double bx = start2[0] - end2[0];
	double by = start2[1] - end2[1];

	double dx = start2[0] - start1[0];
	double dy = start2[1] - start1[1];

	double det = ax * by - ay * bx;

	if (det == 0) return false;

	float r = (dx * by - dy * bx) / det;
	float s = (ax * dy - ay * dx) / det;

	return !(r < 0 || r > 1 || s < 0 || s > 1);
}

int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	cout << intersection(new double[2]{ x1, y1 }, new double[2]{ x2, y2 }, new double[2]{ x3, y3 }, new double[2]{ x4, y4 }) << endl;
	return 0;
}
