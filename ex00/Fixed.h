#ifndef CPP_MODULE_02_FIXED_H
#define CPP_MODULE_02_FIXED_H


class Fixed {
public:
	Fixed();
	~Fixed();
	Fixed(int cost n);
	Fixed(Fixed const &number);
	
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int number;
	static const int bits = 8;
};


#endif
