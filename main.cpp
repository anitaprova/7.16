/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E7.16
Finds the distance between two points.
*/

#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
	double x;
	double y;
};

double distance(Point a, Point b) {
	return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}


int main() {	
	Point p1;
	Point p2;
	double a, b, c, d = 0.0;
	
	cin >> a >> b >> c >> d;
	p1.x = a;
	p1.y = b;
	p2.x = c;
	p2.y = d;
	
	cout << distance(p1, p2) << endl;
	
	return 0;
}
