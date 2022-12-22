#include <iostream>
#include <Windows.h>
int main() {
    /* Ввести два масиви і визначити кількість неоднакових елементів у них, а ті елементи першого масиву, яких немає у другому–замінити нулями.
     * Впорядкувати масивитак, щоб всі додатні числа були розміщені спочатку за зростанням, а всі від’ємні –наприкінці за спаданням(функція).
     * */

    int n;
    int m;
    std::cout << "Enter the size of the first array: ";
    std::cin >> n;
    std::cout << "Enter the size of the second array: ";
    std::cin >> m;
    auto* arr1 = new int[n];
    auto* arr2 = new int[m];
    std::cout << "Enter the first array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }
    std::cout << "Enter the second array: ";
    for (int i = 0; i < m; i++) {
        std::cin >> arr2[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                count++;
            }
        }
    }
    std::cout << "The number of different elements: " << n + m - 2 * count << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                arr1[i] = 0;
            }
        }
    }
    std::cout << "The first array with zeros: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    int* arr3 = new int[n];
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (arr1[i] > 0) {
            arr3[k] = arr1[i];
            k++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr1[i] < 0) {
            arr3[k] = arr1[i];
            k++;
        }
    }
    std::cout << "The first array with sorted elements: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    return 0;
}