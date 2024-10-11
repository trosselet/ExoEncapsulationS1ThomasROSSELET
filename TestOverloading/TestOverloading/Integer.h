#ifndef INTEGER_H__
#define INTEGER_H__
#include <iostream>

class Integer
{
private:
	int m_x;

public:
	Integer();
	Integer(int _x);

public:
	Integer operator+ (const Integer& x);
	void operator+= (const Integer& x);
	Integer operator- (const Integer& x);
	void operator-= (const Integer& x);
	Integer operator* (const Integer& x);
	void operator*= (const Integer& x);
	Integer operator/ (const Integer& x);
	void operator/= (const Integer& x);
	Integer operator% (const Integer& x);
	void operator%= (const Integer& x);
	Integer operator^(const Integer& x);
	friend std::ostream& operator<< (std::ostream& os, const Integer& x);
};

#endif // !INTEGER_H__