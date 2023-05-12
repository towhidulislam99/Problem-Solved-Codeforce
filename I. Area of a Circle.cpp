#include<iostream>
#include <iomanip>

using namespace std;

int main()

{
// your code.
 long double r,area,p=3.141590000;
cin>>r;
area= p*(r*r);
std::cout << std::fixed << std::setprecision(9)<< "Area = "<<area;
return 0;
}
