#pragma once

#include <iostream>;
#include <string>;
#include <math.h>;

using namespace std;

class Vec4 {
public:
	float x = 0, y = 0, z = 0, w = 0;
	Vec4(float _x, float _y, float _z, float _w) {
		x = _x;
		y = _y;
		z = _z;
		w = _w;
	}

	static Vec4 add(Vec4 vec1, Vec4 vec2) {
		Vec4 result = { vec1.x + vec2.x, vec1.y + vec2.y, vec1.z + vec2.z, vec1.w + vec2.w };
		return result;
	}

	string toString() {

		string result = "{" + to_string(x) + " " + to_string(y) + " " + to_string(z) + " " + to_string(w) + "}";

		return result;
	}
};

class Vec3 {
public:
	float x = 0, y = 0, z = 0;
	Vec3(float _x, float _y, float _z) {
		x = _x;
		y = _y;
		z = _z;
	}

	string toString() {

		string result = "{" + to_string(x) + " " + to_string(y) + " " + to_string(z) + "}";

		return result;
	}
};

Vec3 add(Vec3 vec1, Vec3 vec2) {
	Vec3 result = { vec1.x + vec2.x, vec1.y + vec2.y, vec1.z + vec2.z };
	return result;
}

float vectorProduct(Vec3 vec1, Vec3 vec2) {
	Vec3 vectorProducts = { vec1.x * vec2.x, vec1.y * vec2.y, vec1.z * vec2.z };

	float result = vectorProducts.x + vectorProducts.y + vectorProducts.z;

	return result;
}

float magnitude(Vec3 vec1) {
	float result = sqrt(
		(powf(vec1.x, 2)+ powf(vec1.y, 2) + powf(vec1.z, 2))
	);
	return result;
}

//Find the angle between two vectors
float dotProduct(Vec3 u, Vec3 v) {
	/*
		u * v = ||u|| * ||v|| * cos(x)

		find cos(x):

		a = b * cos(x)

		cos(x) = a/b
		x = acos(a/b)
		
	*/
	float result = 0;
	float uMag = magnitude(u), vMag = magnitude(v);
	float quota = vectorProduct(u, v) / (uMag * vMag);
	float x = acosf(quota);

	return x;
}
