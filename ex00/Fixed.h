#ifndef CPP_MODULE_02_FIXED_H
#define CPP_MODULE_02_FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(const int raw);
	Fixed(const float raw);
	Fixed(Fixed const &src); //copy constructor
	~Fixed();

	Fixed &operator=(const Fixed &src);

	int getRawBits(void) const;
	void setRawBits(const int raw);

	float toFloat(void) const;
	int toInt(void) const;

private:
	int value;
	static const int bits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &f);

#endif
