#include <iostream>
using namespace std;

int main()
{

  // TYPE CASTING-IMPLICIT

  // INT -> FLOAT
  int num1 = 10;
  float num2 = 5.5;
  float result = num1 + num2;

  cout << result << endl;
  cout << num1 + num2 << endl;

  // FLOAT -> INT
  int result1 = num1 + num2;
  cout << result1 << endl;

  // CHAR -> INT
  char ch = 'A';
  int a = ch + 1;
  cout << a << endl;

  // INT -> CHAR
  char ch1 = ch + 1;
  cout << ch1 << endl;

  // TYPE CASTING-EXPLICIT

  // FLOAT -> INT
  int num1 = 10;
  float num2 = 5.5;
  float result = num1 + (int)num2;
  cout << result << endl;

  // DOUBLE -> INT
  double pi = 3.141592;
  int pie = (int)pi;
  cout << pie << endl;

  // FLOAT -> CHAR
  float g = 65.1456;
  char gg = (char)g;
  cout << gg << endl;

  // INT -> FLOAT
  int a = 11;
  int b = 5.0;
  float c = ((float)a) / b;
  cout << c << endl;

  return 0;
}