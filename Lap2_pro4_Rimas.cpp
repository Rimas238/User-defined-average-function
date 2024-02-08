#include <iostream>
#include <cmath>
using namespace std;
double mean(double a, double b, double c, double d, double e)
{
  double Mean;
  Mean=(a+b+c+d+e)/5;
  return Mean;
}
 double Standerd_deviation(double a, double b, double c, double d, double e)
{
  double Standard_deviation;
  Standard_deviation= sqrt((pow(a - mean(a, b, c, d, e), 2) + pow(b - mean(a, b, c, d, e), 2) +
   pow(c - mean(a, b, c, d, e), 2) + pow(d - mean(a, b, c, d,e), 2) +
   pow(e - mean(a, b, c, d, e), 2))/5);
  return Standard_deviation;
}
    
int main() {
   double a,b,c,d,e;
  cout<<"Enter five numbers :"<<endl;
  cin>>a>>b>>c>>d>>e;
  cout<<"Mean :"<< mean(a,b,c,d,e)<<endl;
  
   cout<<"Standerd devation :"<<Standerd_deviation(a,b,c,d,e)<<endl; 
  
    return 0;
}