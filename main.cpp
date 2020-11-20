#include <iostream>
#include <cmath>

double my_pow(double n, int p) 
{
    double r=1;
    if(!std::signbit(p)) 
    {
	while(p--) 
	    r*=n;
    }
    else {
	while(p++)
	    r/=n;
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
