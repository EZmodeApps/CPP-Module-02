#ifndef CPP_MODULE_02_FIXED_H
#define CPP_MODULE_02_FIXED_H

#include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(int const n);
	Fixed(Fixed const &src); //copy constructor
	~Fixed();

	Fixed &operator= (const Fixed &src);

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int value;
	static const int bits = 8;
};


#endif
