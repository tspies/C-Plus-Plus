#include <iostream>

template <typename S>
void swap(S &a, S&b)
{
    S x = a;
    a = b;
    b = x;
}

template <typename MN>
MN const &min(MN &a, MN &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

template <typename MX>
MX const &max(MX &a, MX &b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main(void)
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}