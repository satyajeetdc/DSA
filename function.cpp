#include <iostream>
using namespace std;

int sumOfeven(int n) {
  int sum = 0;
  for (int i = 2; i <= n; i += 2) {
    sum += i;
  }
  return sum;
}

void prime(int n) {
  int factors = 0;
  for (int i = 2; i <= n; i++) {
    if (n % i == 0) {
      factors++;
    }
  }
  if(factors != 1) {
    cout << "Not Prime" << endl;
  } else {
    cout << "Prime" << endl;
  }
}

void count(int n) {
  for (int i = 1; i <= n; i++) {
    cout << i << endl;
  }
}

int max(int a, int b, int c) {
  if (a > b && a > c) {
    return a;
  } else if (b > a && b > c) {
    return b;
  } else {
    return c;
  }
}

int add(int a, int b) {
  return (a + b);
}

void printStr(string str) {
  for(int i = 0; i < 5; i++) {
    cout << str << endl;
  }
}

int main() {

  printStr("Hello World");
  cout << add(2,3) << endl;
  cout << max(21, 223, 34) << endl;
  count(10);
  prime(13);
  cout << sumOfeven(100) << endl;

  return 0;
}