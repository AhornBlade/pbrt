#include "geometry.hpp"

constexpr Vector::Vector() : data{ 0.0f, 0.0f, 0.0f } {}

constexpr Vector::Vector(const glm::vec3& v) : data{ v } {}

constexpr Vector::Vector(float x, float y, float z) : data{ x, y, z } {}

constexpr Vector Vector::operator+(const Vector& v) const
{
	return Vector{ data + v.data };
}

constexpr Vector& Vector::operator+=(const Vector& v)
{
	data += v.data;
	return *this;
}

constexpr Vector Vector::operator-(const Vector& v) const
{
	return Vector{ data - v.data };
}

constexpr Vector& Vector::operator-=(const Vector& v)
{
	data -= v.data;
	return *this;
}

constexpr Point Vector::operator+(const Point& p) const
{
	return p + *this;
}

constexpr Vector Vector::operator*(float f) const
{
	return Vector{ data * f };
}

constexpr Vector& Vector::operator*=(float f)
{
	data *= f;
	return *this;
}

constexpr Vector Vector::operator/(float f) const
{
	return Vector{ data / f };
}

constexpr Vector& Vector::operator/=(float f)
{
	data /= f;
	return *this;
}

constexpr float Vector::dot(const Vector& v) const
{
	return glm::dot(data, v.data);
}

constexpr Vector Vector::cross(const Vector& v) const
{
	return Vector{ glm::cross(data, v.data) };
}

constexpr float Vector::lenth() const
{
	glm::length(data);
}

constexpr void Vector::normalize()
{
	data /= lenth;
}

constexpr Vector operator*(float f, const Vector& v)
{
	return v * f;
}

constexpr Vector operator/(float f, const Vector& v)
{
	return Vector{ v.data * f };
}

constexpr Point::Point() : data{ 0.0f, 0.0f, 0.0f } {}

constexpr Point::Point(const glm::vec3& v) : data{ v } {}

constexpr Point::Point(float x, float y, float z) : data{ x, y, z } {}

constexpr Point Point::operator+(const Vector& v) const
{
	return Point{ data + v.data };
}

constexpr Point& Point::operator+=(const Vector& v)
{
	data += v.data;
	return *this;
}

constexpr Point Point::operator-(const Vector& v) const
{
	return Point{ data + v.data };
}

constexpr Point& Point::operator-=(const Vector& v)
{
	data += v.data;
	return *this;
}

constexpr Vector Point::operator-(const Point& p) const
{
	return Vector{ data - p.data };
}

constexpr float Point::distance(const Point& p) const
{
	return (*this - p).lenth();
}
