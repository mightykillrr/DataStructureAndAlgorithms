#include <cmath>
#include <iostream>

using namespace std;
int findIndex(int a[], int start, int end, int q);

int main() {
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int query;
  cout << "Enter the searching number: ";
  cin >> query;

  cout << "Index: " << findIndex(a, 0, 9, query) << endl;
}

int findIndex(int a[], int start, int end, int q) {
  int middle = round((start + end) / 2);

  if (a[middle] == q)
    return middle;
  if (q > a[middle])
    return findIndex(a, middle, end, q);
  return findIndex(a, start, middle, q);

  return 0;
};