#include <iostream>
using namespace std;
int main()
{
  int n, i;
  bool isPrime = true;
  cout<<"number";
  cin >> n;
 for(i = 2; i <= n/2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (true)
      cout << "yes";
  else
      cout << "no";
  return 0;
}  
