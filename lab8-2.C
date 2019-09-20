using namespace std;
#include <iostream>

bool isFibonacci(int num);
int fibonacci(int n);

int main()
{
  int num;

  cout << "Enter a number (enter a negative number to quit): ";
  cin >> num;

  while(num >= 0)
    {
      if(isFibonacci(num))
        {
	  cout << "Yes, you got it, 13 is a Fibonacci number" << endl;
        }
      else
        {
	  cout << "!!!!! Sorry " << num << " is not a Fibonacci number" << endl;
        }
      cout << "Enter a number (enter a negative number to quit): ";
      cin >> num;
    }

  cout << "(*Thanks - Have a good Day*)" << endl;
  return 0;
}

bool isFibonacci(int num)
{
  int n = 0;
  int fib = 0;

  while(fib <= num)
  {
    fib = fibonacci(n);
    if(fib == num)
      return true;
    else if(fib > num)
      return false;
    else
      n++;
  }
}

int fibonacci(int n)
{
  if(n == 0)
    return 0;
  else if(n==1)
    return 1;

  int a = fibonacci(n-1);
  int b = fibonacci(n-2);

  return(a+b);
}


