#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

vector<int> shuffle(vector<int> nums, int n) {
    vector<int> res = vector<int>();

    for (int i = 0; i < n; i++)
    {
      res.push_back(nums[i]);
      res.push_back(nums[n + i]);
    }

    return res;
  }

int main()
{
  string input;
  while (true)
  {
    //cin >> input;
    cout << shuffle(vector<int> {1,2,3,4,4,3,2,1}, 4) << endl;
  }
}