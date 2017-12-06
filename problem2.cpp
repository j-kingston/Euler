//Find the difference between the sum of the squares of the first one
//hundred natural numbers and the square of the sum
//This is my solution using recursion in C++
#include <iostream>
using namespace std;

int sum = 0;
int sqrOfsum = 0;

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
    sqrOfsum += m;
    m++;
    return squareOfSums(m);
  }
  if (m == 100) {
    sqrOfsum += m;
    return sqrOfsum * sqrOfsum;
  }

}

int main() {
  int i = 1;
  sumOfSquares(i);
  cout << "Sum of squares is: " << sum << endl;
  sqrOfsum = squareOfSums(i);
  cout << "Square of sums is: " << sqrOfsum << endl;
  cout << "Difference of the sum of squares and the square of sums is :" << sqrOfsum - sum << endl;
  cin.get();
  return 0;
}
