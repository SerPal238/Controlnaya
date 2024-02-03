#include <iostream>
#include <vector>
#include <string>
void fillarr(int rows, int cols, int **arr) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 100 + 1;
        }
    }
}
void printarr(int rows, int cols, int **arr) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int sumdiagonal(int rows, int cols, int **arr){
    int sumdiagonal = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j){
                sumdiagonal += arr[i][j];
            }
        }
    }
    return sumdiagonal;
}

struct Employee {
    std::string name;
    int id;
    std::string position;
};

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows: " << std::endl;
    std::cin >> rows;
    std::cout << "Enter the number of columns: " << std::endl;
    std::cin >> cols;
    int **arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    fillarr(rows, cols, arr);
    printarr(rows, cols, arr);
    std::cout <<"summa glavnoi diagonali ravna " <<sumdiagonal(rows, cols, arr) << std::endl;
    // Освобождаем память после работы с массивом
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    /* Task 2 */

    int choice;
    do {
        std::cout << "1. Add employee" << std::endl;
        std::cout << "2. Delete employee" << std::endl;
        std::cout << "3. Update employee information" << std::endl;
        std::cout << "4. Print all employees" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice >= 1 && choice <= 4) {
            
        } else if (choice != 0) {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 0);
    return 0;
}
