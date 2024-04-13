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

void print2Darray(int arr[][3], int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

void colWisePrint(int arr[][4], int row, int col) {
  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++) {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
}

bool findTarget(int arr[][4], int row, int col, int target) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
     if(arr[i][j] == target) {
       return true;
     }
    }
  }
  return false;
} 

void maxElement(int arr[][4], int row, int col) {
  int max = INT_MIN;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
     if(arr[i][j] > max) {
       max = arr[i][j];
     }
    }
  }
  cout << "Max element is: " << max << endl;
}


void minElement(int arr[][4], int row, int col) {
  int min = INT_MAX;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
     if(arr[i][j] < min) {
       min = arr[i][j];
     }
    }
  }
  cout << "Min element is: " << min << endl;
}

void rowSum(int arr[][4], int row, int col) {
  int sum = 0;
  for (int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      sum += arr[i][j];
    }
    cout << "Sum of row " << i << " is: " << sum << endl;
    sum = 0;
  }
}

void colSum(int arr[][4], int row, int col) {
  int sum = 0;
  for (int i = 0; i < col; i++) {
    for(int j = 0; j < row; j++) {
      sum += arr[j][i];
    }
    cout << "Sum of col " << i << " is: " << sum << endl;
    sum = 0;
  }
}








int main() {


   // Column-wise sum of a 2D array
  int b[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  int row = 3;
  int col = 4;
  colSum(b, row, col);


  // Row-wise sum of a 2D array
  int b[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  int row = 3;
  int col = 4;
  rowSum(b, row, col);


  
  //Min element in a 2D array
  int b[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {900, 10, 110, 12}};
  int row = 3;
  int col = 4;
  minElement(b, row, col);
  

  
  //Max element in a 2D array
  int b[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {900, 10, 110, 12}};
  int row = 3;
  int col = 4;
  maxElement(b, row, col);

  // Linear search in a 2D array
  int b[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  int row = 3;
  int col = 4;
  int target = 100;
  if(findTarget(b, row, col, target)) {
    cout << "Found" << endl;
  } else {
    cout << "Not Found" << endl;
  }
  

  int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  int brr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  // atleast column size is required and same applies when
  // we pass the 2D array as a function parameter

  print2Darray(arr, 3, 4);
  colWisePrint(arr, 3, 4);

  // Input in a 2-D array row-wise

  int a[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a[i][j];
    }
  }
  

  // Input in a 2-D array column-wise

  int a[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a[j][i];
    }
  }

  print2Darray(a, 3, 3);


  

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
