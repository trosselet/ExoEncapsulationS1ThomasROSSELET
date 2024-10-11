#include "Integer.h"
#include <cmath>

Integer::Integer() : m_x(0)
{
}

Integer::Integer(int _x) : m_x(_x)
{
}

Integer Integer::operator+ (const Integer& x)
{
	Integer tmp(this->m_x + x.m_x);
	return tmp;
}

void Integer::operator+= (const Integer& x)
{
	this->m_x += x.m_x;
}

Integer Integer::operator- (const Integer& x)
{
	Integer tmp(this->m_x - x.m_x);
	return tmp;
}

void Integer::operator-= (const Integer& x)
{
	this->m_x -= x.m_x;
}

Integer Integer::operator* (const Integer& x)
{
	Integer tmp(this->m_x * x.m_x);
	return tmp;
}

void Integer::operator*= (const Integer& x)
{
	this->m_x *= x.m_x;
}

Integer Integer::operator/ (const Integer& x)
{
	Integer tmp(this->m_x / x.m_x);
	return tmp;
}

void Integer::operator/= (const Integer& x)
{
	this->m_x /= x.m_x;
}

Integer Integer::operator% (const Integer& x)
{
	Integer tmp(this->m_x % x.m_x);
	return tmp;
}

void Integer::operator%= (const Integer& x)
{
	this->m_x %= x.m_x;
}

Integer Integer::operator^(const Integer& x)
{
	Integer tmp(std::pow(this->m_x, x.m_x));
	return tmp;
}

std::ostream& operator<< (std::ostream& os, const Integer& x)
{
	os << x.m_x << std::endl;
	return os;
}
