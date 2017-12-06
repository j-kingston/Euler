#include <iostream>
using namespace std;

int sum = 0;

int sumOfSquares(int n) {
  while (n <= 100) {
    int N = n * n;
    sum += N;
    if (n == 100) {
      return sum;
    }
    n++;
    return sumOfSquares(n);
  }
 
}

int squareOfSums(int m) {
  if (m < 100) {
    sum += m;
    m++;
    return squareOfSums(m);
  }
  if (m == 100) {
    sum += m;
    return sum * sum;
  }

}

int main() {
  int i = 1;
  sumOfSquares(i);
  cout << "Sum of squares is: " << sum << endl;
  sum = 0;
  cout << "Square of sums is: " << squareOfSums(i) << endl;
  cin.get();
  return 0;
}
