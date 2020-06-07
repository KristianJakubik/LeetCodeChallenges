#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
  map<int, int> numbers;
  for (int i = 0; i < nums.size(); i++)
  {
    int currentValue = nums[i];
    int valueToLookFor = target - currentValue;
    auto search = numbers.find(valueToLookFor);
    if (search != numbers.end())
    {
      vector<int> result{numbers[valueToLookFor], i};
      return result;
    }
    numbers[currentValue] = i;
  }
}

int main()
{
  vector<int> vect{2, 7, 11, 15};
  vector<int> result = twoSum(vect, 9);
  cout << result[0] << result[1];
}