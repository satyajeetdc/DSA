#include <iostream>
#include <vector>
using namespace std;

void funPrint(int a[], int size) {
  cout << "Array elements are: [";
  for (int i = 0; i < size; i++) {
    cout << a[i] << " ";
  }
  cout << "]" << endl;
}

// STL - Standard Template Library

void printVector(vector<int> v) {
  int size = v.size();
  cout << "Array elements are: [ ";
  for (int i = 0; i < size; i++) {
    cout << v[i] << " ";
  }
  cout << "]" << endl;
}

void printVectorWay(vector<int> v) {
  for (auto it : v) {
    cout << it << " ";
  }
  cout << endl;
}

int main() {

  vector<int> v; // Vector initialisation with 0 data

  vector<int> arr(10, -2); // Initial size 10 with all elements -2 by default
  arr.push_back(100);
  printVector(arr);

  vector<int> arr1 = {1, 2, 3, 4, 5}; // Initalised with given data
  printVector(arr1);
  printVectorWay(arr1);

  vector<int> arr2{1, 2, 3, 4, 5}; // Initalised with given data

  // COPY a vector
  vector<int> arr3(arr2);

  // Front and last element
  cout << "Front element: " << arr1[0] << endl;
  cout << "Front element: " << arr1.front() << endl;
  cout << "Last element: " << arr1[arr1.size() - 1] << endl;
  cout << "Last element: " << arr1.back() << endl;

  while (1) {
    int n;
    cin >> n;
    v.push_back(n);
    cout << "Capacity : " << v.capacity() << " "
         << " Szie : " << v.size() << endl;
  }

  // POP -> Delete one item at a time
  v.pop_back();

  v.clear(); // Clear the vector fully at a time

  vector<int> v; // Vector initialisation

  v.push_back(10); // Vector Insertion
  v.push_back(20);
  printVector(v);

  int n;
  cin >> n;
  int *arr = new int[n]; // dynamic memory allocation
  for(int i = 0; i<n; i++) {
    int data;
    cin >> data;
    arr[i] = data;
  }
  funPrint(arr, n);

  int ar[5] = {1,2,3,4,5}; // static memory allocation
  funPrint(ar, 5);

  return 0;
}
