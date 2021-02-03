#include <iostream>
#include <string>
#include "vec.h";
# define M_PI           3.14159265358979323846  /* pi */
using namespace std;

int main() {
	Vec3 v1(3, 4, 0);
	Vec3 v2(5, 12, 0);

	cout << "Vector product: " << v1*v2 << endl;
	cout << "Magnitude: " << v1.abs() << endl;
	cout << "Magnitude #2: " << v2.abs() << endl;
	cout << "Dot product (degrees): " << dotProduct(v1, v2)*(180/M_PI) << endl;

	Vec3 v3 = (v1 / 2);
	cout <<  v3.toString() << endl;
}