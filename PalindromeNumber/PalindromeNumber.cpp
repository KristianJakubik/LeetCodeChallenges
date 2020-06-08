#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <map>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
  if (x < 0 || (x % 10 == 0 && x != 0))
    return false;

  int number = x;
  int reversedNumber = 0;

  while (number > reversedNumber) {
     reversedNumber = reversedNumber*10 + number % 10;
     number /= 10;
  }
    
  return number == reversedNumber || number == reversedNumber/10;
}

int main()
{
  int n;
  
  while (1)
  {
    cin >> n;
    cout << isPalindrome(n) << endl;
  }
}