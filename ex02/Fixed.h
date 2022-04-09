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

	bool operator==(const Fixed &src);
	bool operator!=(const Fixed &src);
	bool operator>(const Fixed &src);
	bool operator<(const Fixed &src);
	bool operator>=(const Fixed &src);
	bool operator<=(const Fixed &src);

	Fixed operator+(const Fixed &src);
	Fixed operator-(const Fixed &src);
	Fixed operator*(const Fixed &src);
	Fixed operator/(const Fixed &src);

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	static Fixed &max(Fixed &src1, Fixed &src2);
	static const Fixed &max(const Fixed &src1, const Fixed &src2);
	static Fixed &min(Fixed &src1, Fixed &src2);
	static const Fixed &min(const Fixed &src1, const Fixed &src2);

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
