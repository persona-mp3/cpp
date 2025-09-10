/*
 * If num is divisible by 5, return "Yes", otherwiser "No"
 * https://app.programiz.pro/community-challenges/preview/cpp-is-number-divisible-by-five/info
 * */

#include <iostream>
using namespace std;

string isDivisible(int n, int divisior) {
  if (n % divisior == 0) {
    return "Yes";
  }

  return "No";
}

int main() {
  string canDivide = isDivisible(20, 7);
  cout << canDivide << '\n';
  return 0;
}
