// i221943_Lab01Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void inputMatrix(int A[][100], int m, int n) {
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> A[i][j];
        }
    }
}

void displayMatrix(const int A[][100], int m, int n) {
    cout << "Matrix elements:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}


int sumOfMatrix(const int A[][100], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}
void rowWiseSum(const int A[][100], int m, int n) {
    cout << "Row-wise sum of the matrix:\n";
    for (int i = 0; i < m; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += A[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
}

void columnWiseSum(const int A[][100], int m, int n) {
    cout << "Column-wise sum of the matrix:\n";
    for (int j = 0; j < n; ++j) {
        int colSum = 0;
        for (int i = 0; i < m; ++i) {
            colSum += A[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
}

void transposeMatrix(const int A[][100], int m, int n) {
    if (m != n) {
        cout << "matrix has no transpose.";
    }
    else{
    int transpose[100][100];

 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            transpose[i][j] = A[j][i];
        }
    }


    cout << "Transpose of the matrix:\n";
    displayMatrix(transpose, n, m);
    }
}

int main() {
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    int matrix[100][100];
    /* int** matrix = new int* [m];

  for (int i = 0; i < m; i++) {


      matrix[i] = new int[n];
  }*/

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Input elements into the matrix\n";
        cout << "2. Display elements of the matrix\n";
        cout << "3. Sum of all elements of the matrix\n";
        cout << "4. Display row-wise sum of the matrix\n";
        cout << "5. Display column-wise sum of the matrix\n";
        cout << "6. Create transpose of the matrix\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            inputMatrix(matrix, m, n);
            break;
        case 2:
            displayMatrix(matrix, m, n);
            break;
        case 3:
            cout << "Sum of all elements: " << sumOfMatrix(matrix, m, n) << endl;
            break;
        case 4:
            rowWiseSum(matrix, m, n);
            break;
        case 5:
            columnWiseSum(matrix, m, n);
            break;
        case 6:
            transposeMatrix(matrix, m, n);
            break;
        case 0:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
