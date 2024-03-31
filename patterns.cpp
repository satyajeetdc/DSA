#include <iostream>
using namespace std;

int main() {

  // Fancy Pattern

  int n;
  cin >> n;
  for(int r=0; r<n; r++) {
    for(int c=0;c<2*r+1; c++) {
      if(c%2 !=0) {
        cout << "*";
      } else {
        cout << r+1;
      }
    }
    cout << endl;
  }

  // // Flipped solid dimond

  // int num;
  // cin >> num;
  // int n = num / 2;

  // for (int row = 0; row < n; row++) {

  //   // inverted pyramid 1

  //   for (int column = 0; column < n - row; column++) {
  //     cout << "*";
  //   }

  //   // full pyramid 1

  //   for (int column = 0; column < 2 * row + 1; column++) {
  //     cout << " ";
  //   }

  //   // inverted pyramid 2
  //   for (int columns = 0; columns < n - row; columns++) {
  //     cout << "*";
  //   }

  //   cout << endl;
  // }

  // for (int row = 0; row < n; row++) {

  //   for (int column = 0; column < row + 1; column++) {
  //     cout << "*";
  //   }

  //   for (int column = 0; column < 2 * n - 2 * row - 1; column++) {
  //     cout << " ";
  //   }

  //   for (int column = 0; column < row + 1; column++) {
  //     cout << "*";
  //   }

  //   cout << endl;
  // }

  // // Hollow diamond

  // int num;
  // cin >> num;
  // int n = num / 2;

  // for (int rows = 0; rows < n; rows++) {
  //   for (int columns = 0; columns < n - rows - 1; columns++) {
  //     cout << " ";
  //   }

  //   for (int columns = 0; columns < rows + 1; columns++) {
  //     if (columns == 0 || columns == rows) {
  //       cout << "* ";
  //     } else {
  //       cout << "  ";
  //     }
  //   }
  //   cout << endl;
  // }
  // for (int rows = 0; rows < n; rows++) {
  //   for (int columns = 0; columns < rows; columns++) {
  //     cout << " ";
  //   }
  //   for (int columns = 0; columns < n - rows; columns++) {
  //     if (columns == 0 || columns == n - rows - 1) {
  //       cout << "* ";
  //     } else {
  //       cout << "  ";
  //     }
  //   }
  //   cout << endl;
  // }

  // Reverse hollow pyramid

  // int n;
  // cin >> n;

  // for (int rows = 0; rows < n; rows++) {
  //   for (int columns = 0; columns < rows; columns++) {
  //     cout << " ";
  //   }
  //   for (int columns = 0; columns < n - rows; columns++) {
  //     if (columns == 0 || columns == n - rows - 1) {
  //       cout << "* ";
  //     } else {
  //       cout << "  ";
  //     }
  //   }
  //   cout << endl;
  // }

  // // Hollow Pyramid

  // int n;
  // cin >> n;

  // for (int rows = 0; rows < n; rows++) {
  //   for (int columns = 0; columns < n - rows - 1; columns++) {
  //     cout << " ";
  //   }

  //   for (int columns = 0; columns < rows + 1; columns++) {
  //     if (columns == 0 || columns == rows) {
  //       cout << "* ";
  //     }
  //     else {
  //       cout << "  ";
  //     }
  //   }
  //   cout << endl;
  // }

  // // Diamond

  // int num;
  // cin >> num;
  // int n = num/2;

  // for(int rows=0; rows<n; rows++) {
  //   for(int columns=0; columns<n-rows-1; columns++) {
  //     cout << " ";
  //   }
  //   for(int columns=0; columns<rows+1; columns++){
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }
  // for(int rows=0; rows<n; rows++) {
  //     for(int columns=0; columns<rows; columns++) {
  //       cout << " ";
  //     }
  //     for(int columns=0; columns<n-rows; columns++){
  //       cout << "* ";
  //     }
  //     cout << endl;
  // }

  // // Reverse Full Pyramid

  // int n;
  // cin >> n;

  // for(int rows=0; rows<n; rows++) {
  //   for(int columns=0; columns<rows; columns++) {
  //     cout << " ";
  //   }
  //   for(int columns=0; columns<n-rows; columns++){
  //     cout << "* ";
  //   }
  //   //   cout << endl;
  // }

  // // Full Pyramid

  // int n;
  // cin >> n;

  // for(int rows=0; rows<n; rows++) {
  //   for(int columns=0; columns<n-rows-1; columns++) {
  //     cout << " ";
  //   }
  //   for(int columns=0; columns<rows+1; columns++){
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // int n;
  // cin >> n;

  // for(int rows=0; rows<n; rows++) {
  //   for(int columns=0; columns<n-rows; columns++) {
  //     cout << "  ";
  //   }
  //   for(int columns=0; columns<rows+1; columns++) {
  //     cout << " *  ";
  //   }
  //   cout << endl;
  // }

  // int n = 10;
  // if(cout<<n){
  //     cout << "satya";
  // }

  // int n;
  // if(cin>>n){
  //     cout << "satya";
  // }

  // // Inverted Numeric half pyramid

  // int n;
  // cin >> n;

  // for(int row=0; row<n; row++) {
  //   for(int column=0; column<n-row; column++) {
  //     cout << column+1 << " ";
  //   }
  //   cout << endl;
  // }

  // // Numeric half pyramid

  // int n;
  // cin >> n;

  // for(int row=0; row<n; row++) {
  //   for(int column=0; column<row+1; column++) {
  //     cout << column+1 << " ";
  //   }
  //   cout << endl;
  // }

  // // Inverted Half Pyramid

  // int n;
  // cin >> n;

  // for(int row=0; row<n; row++) {
  //   for(int col=0; col<n-row; col++) {
  //       cout << "* ";
  //   }
  //   cout << endl;
  // }

  // // Half Pyramid

  // int n;
  // cin >> n;

  // for(int row=0; row<n; row++) {
  //   for(int col=0; col<row+1; col++) {
  //       cout << "* ";
  //   }
  //   cout << endl;
  // }

  // // Half Pyramid

  // for(int row=0; row<5; row++) {
  //   for(int col=0; col<5; col++) {
  //     if(row >= col) {
  //       cout << "* ";
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  // // hollow pattern -> GENERIC

  // int ROWS = 10;
  // int COLS = 17;

  // for (int row = 0; row < ROWS; row++) {
  //   for (int col = 0; col < COLS; col++) {
  //     if (row == 0 || row == ROWS - 1) {
  //       cout << "* ";
  //     } else {
  //       if (col == 0 || col == COLS - 1) {
  //         cout << "* ";
  //       } else {
  //         cout << "  ";
  //       }
  //     }
  //   }
  //   cout << endl;
  // }

  // // hollow pattern

  // for(int row=0; row<5; row++) {
  //   for(int col=0; col<5; col++) {
  //     if(row == 0 || row == 4) {
  //       cout << "* ";
  //     } else {
  //       if(col == 0 || col == 4) {
  //         cout << "* ";
  //       } else {
  //         cout << "  ";
  //       }
  //     }
  //   } cout << endl;
  // }

  // // hollow pattern

  // for(int i=0; i<5; i++) {
  //   if(i == 0 || i ==4) {
  //     for(int j=0; j<5; j++) {
  //       cout << "* " ;
  //     }
  //     cout << endl;
  //   } else {
  //     cout << "* ";
  //     for(int j=0; j<3; j++ ) {
  //       cout << "  ";
  //     }
  //     cout << "*" << endl;
  //   }

  // }

  // for(int i=0; i<3; i++) {
  //    for(int j=0; j<6; j++) {
  //      cout << "* ";
  //    }
  //    cout << endl;
  //  }

  // for(int i=0; i<3; i++) {
  //   for(int j=0; j<5; j++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // for(int i=0; i<4; i++) {
  //   for(int j=0; j<4; j++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // int n = 19;
  // for(int i=1; i<=10; i++) {
  //   cout << n << " * "<< i << " = " << (n*i) << endl;
  // }

  // int num = 12;
  // if(num%2 == 0){
  //   cout << "Even";
  // } else {
  //   cout << "Odd";
  // }

  // int balance = 11;

  // if (balance > 10) {
  //   cout << "You can go to the movies" << endl;
  // } else {
  //   cout << "You can't go to the movies" << endl;
  // }

  // char ch = "213456";
  // cout << ch << endl;

  // cout << "Enter the number : " << endl;
  // int number;
  // cin >> number;
  // cout << "The number is : " << number << endl;

  // int num;
  // cout << num << endl;

  // // int -> 4byte
  // int num = 50;
  // cout << num << endl;
  // cout << sizeof(num) << endl;

  // // char -> 1byte
  // char ch = 'k';
  // cout << ch << endl;
  // cout << sizeof(ch);

  // // float -> 4byte
  // float point = 1.69;
  // cout << point << endl;
  // cout << sizeof(point);
  // cout << endl;

  // // long -> 8byte
  // long number = 23;
  // cout << number << endl;
  // cout << sizeof(number);

  // cout << "Satyajeet" << endl;
  // cout << "Das" << "\n";
  // cout << "Chowdhury";

  return 0;
}