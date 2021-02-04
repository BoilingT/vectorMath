#include <iostream>
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
	cout << "Dot product (radians): " << dotProduct(v1, v2) << endl;

	Vec3 v3 = (v1 / 3);
	cout <<  v3.toString() << endl;

	Vec4 vec;
	for (int i = 0; i < 10; i++)
	{
		vec = vec + 1;
		cout << vec.toString() << " = " << Vec3(vec.x, vec.y, vec.z).abs() << endl;
	}
	
	system("PAUSE");
	return 0;
}