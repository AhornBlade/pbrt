#pragma once

#include <glm/vec3.hpp>
#include <glm/ext/quaternion_geometric.hpp>

class Point;

class Vector
{
public:
	constexpr Vector();
	constexpr explicit Vector(const glm::vec3& v);
	constexpr Vector(float x, float y, float z);
	
	constexpr Vector operator+(const Vector& v) const;
	constexpr Vector& operator+=(const Vector& v);
	constexpr Vector operator-(const Vector& v) const;
	constexpr Vector& operator-=(const Vector& v);
	constexpr Point operator+(const Point& p)const;
	constexpr Vector operator*(float f) const;
	constexpr Vector& operator*=(float f);
	constexpr Vector operator/(float f) const;
	constexpr Vector& operator/=(float f);

	constexpr float dot(const Vector& v) const;
	constexpr Vector cross(const Vector& v) const;
	constexpr float lenth() const;
	constexpr void normalize();

	glm::vec3 data;
};

constexpr Vector operator*(float f, const Vector& v);
constexpr Vector operator/(float f, const Vector& v);

class Point
{
public:
	constexpr Point();
	constexpr explicit Point(const glm::vec3& v);
	constexpr Point(float x, float y, float z);
	
	constexpr Point operator+(const Vector& v) const;
	constexpr Point& operator+=(const Vector& v);
	constexpr Point operator-(const Vector& v) const;
	constexpr Point& operator-=(const Vector& v);
	constexpr Vector operator-(const Point& p) const;

	constexpr float distance(const Point& p) const;

	glm::vec3 data;
};