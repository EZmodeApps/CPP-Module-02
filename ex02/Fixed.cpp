#include "Fixed.h"

Fixed::Fixed(): value(0) {
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int raw):  value(raw << bits) {
//	std::cout << "Int constructor called" << std:: endl;
}

Fixed::Fixed(const float raw)  {
//	std::cout << "Float constructor called" << std:: endl;
	int pow = 1 << bits;
	value = roundf(raw * pow);
}

Fixed::~Fixed() {
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator = (const Fixed &src) {
//	std::cout << "Copy assigment operator called" << std::endl;
	value = src.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
//	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(const int raw) {
	value = raw;
}

int Fixed::toInt(void) const {
	return value >> bits;
}

float Fixed::toFloat(void) const {
	int pow = 1 << bits; // 1 << 8 = 256
	return (float)value / pow;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f) { //out - cout
	out << f.toFloat();
	return out;
}

bool Fixed::operator==(const Fixed &src) {
	return (this->getRawBits() == src.getRawBits());
}

bool Fixed::operator!=(const Fixed &src) {
	return (this->getRawBits() != src.getRawBits());
}

bool Fixed::operator>(const Fixed &src) {
	return (this->getRawBits() > src.getRawBits());
}

bool Fixed::operator>=(const Fixed &src) {
	return (this->getRawBits() >= src.getRawBits());
}

bool Fixed::operator<(const Fixed &src) {
	return (this->getRawBits() < src.getRawBits());
}

bool Fixed::operator<=(const Fixed &src) {
	return (this->getRawBits() <= src.getRawBits());
}

Fixed Fixed::operator+(const Fixed &src) {
	Fixed result(this->toFloat() + src.toFloat());
	return result;
}

Fixed Fixed::operator-(const Fixed &src) {
	Fixed result(this->toFloat() - src.toFloat());
	return result;
}

Fixed Fixed::operator/(const Fixed &src) {
	Fixed result(this->toFloat() / src.toFloat());
	return result;
}

Fixed Fixed::operator*(const Fixed &src) {
	Fixed result(this->toFloat() * src.toFloat());
	return result;
}

Fixed &Fixed::operator++() {
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed result(*this);
	value++;
	return result;
}

Fixed &Fixed::operator--() {
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed result(*this);
	result.value--;
	return result;
}

Fixed &Fixed::max(Fixed &src1, Fixed &src2) {
	if (src1 > src2)
		return src1;
	else
		return src2;
}

const Fixed &Fixed::max(const Fixed &src1, const Fixed &src2) {
	if (src1.getRawBits() > src2.getRawBits())
		return src1;
	else
		return src2;
}

Fixed &Fixed::min(Fixed &src1, Fixed &src2) {
	if (src1 < src2)
		return src1;
	else
		return src2;
}

const Fixed &Fixed::min(const Fixed &src1, const Fixed &src2) {
	if (src1.getRawBits() > src2.getRawBits())
		return src1;
	else
		return src2;
}