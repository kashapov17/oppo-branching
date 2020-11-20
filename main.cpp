#include <iostream>

double my_pow(double n, uint p) 
{
    double r=1;
    do 
	r*=n;
    while(--p);
    return r;
}

int main() 
{
    double n;
    uint p;

    std::cout << "N=";
    std::cin >> n;
    std::cout << "power of: ";
    std::cin >> p;

    std::cout << n << " to the power of " 
	<< p << " is " << my_pow(n,p) << std::endl;
    
    return 0;
}
