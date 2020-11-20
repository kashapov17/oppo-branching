#include <iostream>
#include <cmath>

double my_pow(double n, int p) 
{
    double r=1;
    bool sbit = std::signbit(p);
    if(sbit) p*=-1;

    while(p > 0) 
    {
	if(p%2)
	    if(sbit) 
	        r/=n;
	    else 
	        r*=n;
	n*=n;
	p/=2;
    }

    return r;
}

int main() 
{
    double n;
    int p;

    std::cout << "N=";
    std::cin >> n;
    std::cout << "power of: ";
    std::cin >> p;

    std::cout << n << " to the power of " 
	<< p << " is " << my_pow(n,p) << std::endl;
    
    return 0;
}
