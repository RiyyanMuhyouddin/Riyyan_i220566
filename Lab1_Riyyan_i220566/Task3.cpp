#include <iostream>

using namespace std;

const int Size = 10; // Assuming a maximum size for the matrix

void inputm(int A[Size][Size], int m, int n) {
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> A[i][j];
        }
    }
}

void displaym(const int A[Size][Size], int m, int n) {
    cout << "Matrix elements:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int sumelements(const int A[Size][Size], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}

void rowsum(const int A[Size][Size], int m, int n) {
    cout << "Row-wise sum:" << endl;
    for (int i = 0; i < m; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += A[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
}

void colsum(const int A[Size][Size], int m, int n) {
    cout << "Column-wise sum:" << endl;
    for (int j = 0; j < n; ++j) {
        int colSum = 0;
        for (int i = 0; i < m; ++i) {
            colSum += A[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
}

void transposem(const int A[Size][Size], int m, int n) {
    cout << "Transpose of the matrix:" << endl;
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;

    // Get matrix size
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    int matrix[Size][Size];

    int choice;
    do {
        // Display menu
        cout << "\nMenu:\n"
            << "1. Input elements into matrix\n"
            << "2. Display elements of matrix\n"
            << "3. Sum of all elements of matrix\n"
            << "4. Display row-wise sum of matrix\n"
            << "5. Display column-wise sum of matrix\n"
            << "6. Create transpose of matrix\n"
            << "0. Exit\n"
            << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            inputm(matrix, m, n);
            break;
        case 2:
            displaym(matrix, m, n);
            break;
        case 3:
            cout << "Sum of all elements: " << sumelements(matrix, m, n) << endl;
            break;
        case 4:
            rowsum(matrix, m, n);
            break;
        case 5:
            colsum(matrix, m, n);
            break;
        case 6:
            transposem(matrix, m, n);
            break;
        case 0:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
            break;
        }

    } while (choice != 0);

    return 0;
}
