#ifndef FIXED_HPP
 #define FIXED_HPP
	class Fixed
	{
		private:
			int _fixedPointVlaue;
			static const int _fractionalBits;

		public:			
			Fixed();
			~Fixed();
			Fixed(const Fixed &obj);
			Fixed &operator=(const Fixed &obj);
			int getRawBits(void) const;
			void setRawBits(int const raw);
	};
#endif