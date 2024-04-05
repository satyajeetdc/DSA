#include <iostream>
using namespace std;

bool isPrime(int num) {
  if (num <= 1)
    return false;
  for (int i = 2; i <= sqrt(num); ++i)
    if (num % i == 0)
      return false;
  return true;
}

int evenORodd(int num) {
  return ((num & 1) == 0);
}

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
  if (a >= b && a >= c) {
    return a;
  } else if (b >= a && b >= c) {
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

  // even or odd using bitwise operator
  int number;
  cout << "Enter a number: ";
  cin >> number;
  if (evenORodd(number))
    cout << number << " is even." << endl;
  else
    cout << number << " is odd." << endl;

  // Prime number
  int number;
  cout << "Enter a number: ";
  cin >> number;
  cout << number << (isPrime(number) ? " is prime." : " is not prime.") << endl;
  
  return 0;
}
