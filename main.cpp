#include <iostream>
#include <string>
#include "vec.h";

using namespace std;

int main() {
	Vec3 v1(3, 4, 0);
	Vec3 v2(5, 12, 0);

	cout << "Vec product: " << vectorProduct(v1, v2) << endl;
	cout << "Magnitude: " << magnitude(v1) << endl;
	cout << "Magnitude #2: " << magnitude(v2) << endl;
	cout << "Dot product: " << dotProduct(v1, v2) << endl;
}