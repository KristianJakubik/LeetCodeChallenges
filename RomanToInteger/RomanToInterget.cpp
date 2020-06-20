#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int translateToInterger(char s)
{
  switch (s)
  {
  case 'I':
    return 1;
  case 'V':
    return 5;
  case 'X':
    return 10;
  case 'L':
    return 50;
  case 'C':
    return 100;
  case 'D':
    return 500;
  case 'M':
    return 1000;
  }
  throw "Invalid roman number";
}

int romanToInt(string s)
{
  int num = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (i < (s.size() - 1) && translateToInterger(s[i + 1]) > translateToInterger(s[i]))
      num -= translateToInterger(s[i]);
    else
      num += translateToInterger(s[i]);
  }
  return num;
}

int main()
{
  string input;
  while (true)
  {
    cin >> input;
    cout << romanToInt(input) << endl;
  }
}