#ifndef FIXED_HPP
 #define FIXED_HPP
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
			std::ostream &operator<<(std::ostream &);
			int getRawBits(void) const;
			void setRawBits(int const raw);
			float toFloat() const;
			float toInt() const;
	};
#endif