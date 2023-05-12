#include<iostream>

#include<iomanip>

using namespace std;

int main()

{

cout « fixed « setprecision(9);

// your code.
long double r,area=0,p=3.141592653;
cin>>r;
area= p*r*r;
cout<<"Area = "<<area;
return 0;
}
