#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <map>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int ReverseInterger(int x)
{
  long reversedInteger = 0;
  int number = x;
  int digit = 0;
  while (number != 0) {
     digit = number % 10;
     reversedInteger*= 10;
     reversedInteger+= digit;
     number /= 10;

    if (reversedInteger < INT_MIN || reversedInteger > INT_MAX)
      return 0;
  }

  return (int)reversedInteger;
}

int main()
{
  cout << ReverseInterger(-123);
}