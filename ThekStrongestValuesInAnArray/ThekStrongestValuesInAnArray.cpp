#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <map>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int getMedian(vector<int>& arr) {
  int index = (arr.size() - 1) / 2;
  return arr[index];
}

vector<int> getStrongest(vector<int>& arr, int k)
{
  sort(arr.begin(), arr.end());
  int median = getMedian(arr);

  int size = arr.size();
  vector<int> result = vector<int>(k);
  for (int i = 0, j = size - 1, p = 0; p < k; p++) {
    if (arr[j] - median >= median - arr[i]) {
      result[p] = arr[j];
      j--;
    }
    else {
      result[p] = arr[i];
      i++;
    }
  }

  return result;
}

int main()
{
  int n;
  vector<int> v {1,2,3,4,5};
  int k = 2;
  vector<int> result = getStrongest(v, k);
}