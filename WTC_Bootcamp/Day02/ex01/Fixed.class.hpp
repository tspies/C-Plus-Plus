#ifndef FIXED_HPP
 #define FIXED_HPP
	#include<iostream>
	#include <string>
	#include <ctime>
	#include <iomanip>
	#include <sstream>
	#include <fstream>
	#include <cmath>

	class Fixed
	{
		private:
			int _fixedPointVlaue;
			static const int _fractionalBits = 8;

		public:			
			Fixed();
			~Fixed();
			Fixed(const Fixed &obj);
			Fixed(const int num);
			Fixed(const float num);
			Fixed &operator=(const Fixed &obj);
			int getRawBits(void) const;
			void setRawBits(int const raw);
			int toInt(void) const;
			float toFloat(void) const;
	};
	std::ostream &operator<<(std::ostream &ostream, Fixed const &rhs);
#endif