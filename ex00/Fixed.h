#ifndef CPP_MODULE_02_FIXED_H
#define CPP_MODULE_02_FIXED_H

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed {
public:
	Fixed();
	~Fixed();
	Fixed(int raw);
	Fixed(float raw);
	Fixed(Fixed const &src); //copy constructor
	Fixed &operator= (const Fixed &src);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

private:
	int value;
	static const int bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif
