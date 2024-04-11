#include <iostream>
#include <limits.h>
using namespace std; 

// void printArray(int arr[], int size) {
//   for(int i = 0; i < size; i++) {
//     cout << arr[i] << " ";
//   }
// }

// bool linearSearch(int arr[], int size, int target) {
//   for(int i = 0; i < size; i++) {
//       if(arr[i] == target) {
//         return true;
//       }
//     }
//   return false;
// }

void countOnesAndZeros(int arr[], int size) {
  int one = 0;
  int zero = 0;
  for(int i = 0; i < size; i++) {
    if(arr[i] == 0) {
      zero++;
    } else {
      one++;
    }
  }
  cout << "The number of ones are: " << one << endl;
  cout << "The number of zeros are: " << zero << endl;
}

// MINIMUM NUMBER IN AN ARRAY
void findMin(int arr[], int size) {
  int min = INT_MAX;
  for(int i=0; i<size; i++) {
    if(arr[i] < min) {
      min = arr[i];
    }
  }
  cout << "Mininmum number is array is : " << min << endl;
}

// REVERSE AN ARRAY

void reverseArray(int arr[], int size) {
  int returnArray[size];
  for(int i = 0; i<size; i++) {
    returnArray[i] = arr[size-i-1];
  }
  for(int i = 0; i<size; i++) {
    cout << returnArray[i] << endl;
  }
}

void reverseArray1(int arr[], int size) {
  int left = 0;
  int right = size-1;
  while(left <= right) {
    swap(arr[left], arr[right]);  
    left++;
    right--;
  }
  for(int i = 0; i<size; i++) {
    cout << arr[i] << endl;
  }
}


void reverseArray2(int arr[], int size) {
  for(int left = 0, right = size-1; left <= right; left++, right--){
    swap(arr[left], arr[right]);
  }
  for(int i = 0; i<size; i++) {
    cout << arr[i] << endl;
  }
}

// EXTREME PRINT IN AN ARRAY
void extremePrint(int arr[], int size) {
  for (int left = 0, right = size - 1; left <= right; left++, right--) {
    if(left == right) {
      cout << arr[left] << endl;
      return;
    }
    cout << arr[left] << " " << arr[right] << " ";
  }
}

// UNIQUE ELEMENT IN AN ARRAY
int getUnique(int a[], int size) {
  int ans = 0;
  for (int i = 0; i < size; i++) {
    ans = ans ^ a[i];
  }
  return ans;
}

// PRINT ALL PAIRS

void printAllPairs(int a[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << "( " << a[i] << ", " << a[j] << " )" << endl;
    }
  }
}

// TRIPLETS

void printTriplets(int a[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      for (int k = 0; k < size; k++) {
        cout << "(" << a[i] << ", " << a[j] << ", " << a[k] << ")" << endl;
      }
    }
  }
}

// Sort 0's and 1's
void sortZeroandOne(int arr[], int size) {
  int zeroCount = 0;
  int oneCount = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == 0) {
      zeroCount++;
    }
    if (arr[i] == 1) {
      oneCount++;
    }
  }
  int i = 0;
  for (; i < zeroCount; i++) {
    arr[i] = 0;
  }

  for (int j = i; j < size; j++) {
    arr[j] = 1;
  }
}


// RIGHT SHIFT BY 1
void rightShiftByOne(int arr[], int size){
  int temp = arr[size - 1];
  for(int i = size - 1; i >= 1; i--) {
    arr[i] = arr[i - 1];  
  }
  arr[0] = temp;
}







int main() {


    int arr[] = {10, 11, 12, 13, 14, 15};
  int size = 6;
  rightShiftByOne(arr, size);
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

    int arr[] = {0, 1, 0, 1, 0, 0, 1, 0, 0, 1};
  int size = 10;
  sortZeroandOne(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  // int a[] = {10, 20, 30};
  // int size = 3;
  // printTriplets(a, size);

  // int a[] = {10, 20, 30};
  // int size = 3;
  // printAllPairs(a, size);

  // int a[] = {1, 1, 2, 2, 3, 3, 10, 5, 5};
  // int size = 9;
  // int n = getUnique(a, size);
  // cout << "The unique element is : " << n << endl;

  // ARRAYS & FUNCTIONS

    int a[] = {22, 23, 24, 25, 26, 27, 28, 29, 10, 23};
  int size = sizeof(a) / sizeof(int);

  extremePrint(a, size);
  
  reverseArray2(a, size);
  reverseArray1(a, size);
  reverseArray(a, size);

  
  // findMin(a, size);

  
  // int arr[] = {1,0,1,0,1,0,1,0,1,0,1};
  // int size = sizeof(arr) / sizeof(int);
  // countOnesAndZeros(arr, size);
  



  
  // int target = 10;
  // int arr[] = {22, 23, 24, 25, 26, 27, 28, 29, 10, 23};
  // int size = sizeof(arr) / sizeof(int);
  // bool check = linearSearch(arr, size, target);
  // if(check) { 
  //   cout << "Target found" << endl;
  // } else {
  //   cout << "Target not found" << endl;
  // }
  
  
  // int arr[5] = {1, 2, 3, 4, 5};
  // int size = 5;
  // printArray(arr, size);



  

  // LINEAR SEARCH IN AN ARRAY
  // int target = 10;
  // int arr[] = {22, 23, 24, 25, 26, 27, 28, 29, 10, 23};
  // bool flag = false;
  // int position = 0;

  // for(int i = 0; i < 10; i++) {
  //   if(arr[i] == target) {
  //     flag = true;
  //     position = i;
  //     break;
  //   }
  // }

  // if(flag) {
  //   cout << "Target found at index " << position << endl;
  // } else {
  //   cout << "Target not found" << endl;
  // }

  

  // // Question 
  // int arr[10];
  // int n = 10;
  // // taking input
  // for(int i = 0; i<n; i++) {
  //   cin >> arr[i];
  // }
  // // double-up
  // for(int i = 0; i<n; i++) {
  //   arr[i] = 2 * arr[i];
  // }
  // // output
  // for(int i = 0; i<n; i++) {
  //   cout << arr[i] << " ";
  // }

    


  // INDEXING IN ARRAY : 0 to (N-1)
  
  // int a[] = {1,2,3,4,5};
  // cout << a[3] << endl;
  // for(int i=0;i<5;i++) {
  //   cout << a[i] << " ";
  // }

  // int arr[5];
  // int n = 5;
  // for(int i = 0; i<n; i++) {
  //   cin >> arr[i];
  // }

  // cout << arr[3];



  
  // int n;
  // cin >> n;
  // int arr[n]; // BAD PRACTICE
  // cout << sizeof(arr) << endl;

  
  // int a[] = {};
  // cout << sizeof(a) << endl;

  // int ab[2] = {2,3,4,5,6}; // excess element error
  // int a[] = {1,2,3,4,5};
  // int abc[5] = {1,2,3}; // rest of places will be filled with 0
  
  // int a[50];
  // cout << "Address of a : " << &a << endl;
  // int arr[0];
  // cout << "Address of a : " << arr << endl;
  // cout << sizeof(arr) << endl;
  

  // int num[10];
  // char ch[10];
  // bool b[10];
  // float f[10];
  // short s[10];
  // cout << sizeof(num) << endl;
  // cout << sizeof(ch) << endl;
  // cout << sizeof(b) << endl;
  // cout << sizeof(f) << endl;
  // cout << sizeof(s) << endl;

  return 0;
}
