﻿// СП_6.cpp : Этот файл содержит практические задание из ДЗ_6
//

#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <cmath>
using namespace std;

// задание 1
//int square(int a)
//{   
//    int s = a * a;
//    return s;
//}
//int main()
//{
//    setlocale(LC_ALL, "");
//    int x;
//    cout << "Введите число: ";
//    cin >> x;
//    int result = square(x);
//    cout << "Квадрат числа: " << result << endl;
//    
//    return 0;
//}
// задание 2
//int sqrti(int a)
//{   
//    if (a > 0) {
//        float s = sqrt(a);
//        return s;
//    }
//    else {
//        exit(0);
//    }
//    
//}
//int main()
//{
//    setlocale(LC_ALL, "");
//    float x;
//    cout << "Введите число: ";
//    cin >> x;
//    if (x > 0) {
//        float result = sqrti(x);
//        cout << "Квадратный корень числа: " << result << endl;
//    }
//    else {
//        cout << "Negative argument" << endl;
//    }
//
//    return 0;
//}
// задание 3 / версия 1
//int multiplyOrAdd(float a, float b, bool add = true)
//{
//    if (add) {
//        float s = a * b;
//        return s;
//    }
//    else {
//        float s = a + b;
//        return s;
//    }
//    // при использовании этой версии, в функции main{}
//    // необходимо убрать переменную flag при объявлении 
//    // и при вызове multiplyOrAdd()
//}
// задание 3 / версия 2
//int multiplyOrAdd(float a, float b, bool add)
//{
//    if (add) {
//        float s = a * b;
//        return s;
//    }
//    else {
//        float s = a + b;
//        return s;
//    }
//
//}
//int main()
//{
//    setlocale(LC_ALL, "");
//    float x;
//    float y;
//    bool flag = false;
//    cout << "Введите число a: ";
//    cin >> x;
//    cout << "Введите число b: ";
//    cin >> y;
//    float result = multiplyOrAdd(x, y, flag);
//    cout << "Ваш ответ: " << result << endl;
//
//    return 0;
//}
// задание 4
//int countOdd(int *a, int size)
//{
//    int c = 0;
//    for (int i = 0; i < size; ++i) {
//        if (a[i] % 2 == 0) {
//            c += 1;
//        }
//        else {
//            c += 0;
//        }
//    }
//    return c;
//}
//int main()
//{
//    setlocale(LC_ALL, "");
//    /*int array[5] = { 2,3,4,5,6 };*/
//    int s;
//    cout << "Введите размер массива: ";
//    cin >> s;
//    int *array = new int[s];
//    cout << "Введите значения массива: ";
//    for (int i = 0; i < s; i++)
//    {
//        cin >> array[i];
//    }
//    int count = countOdd(array, 5);
//    cout << "Количество четных элементов массива: " << count << endl;
//
//    delete []array;
//    return 0;
//}
// задание 5
//int sumNthElementAndN(int n, int arr[], int size) 
//{
//    return arr[n] + n;
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    int arr[] = { 1, 2, 3, 4 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int n = 2;
//    int result = sumNthElementAndN(n, arr, size);
//    if (result != -1) {
//        std::cout << "Результат: " << result << std::endl;
//    }
//    return 0;
//}
// задание 6
//void modifyArrayAndN(int& n, int arr[], int size) {
//    arr[n] = 0;
//    n += 1;
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    int arr[] = { 1, 2, 3, 4 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int n = 2;
//
//    cout << "До изменения: " << endl;
//    cout << "n = " << n << endl;
//    cout << "Массив: ";
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    modifyArrayAndN(n, arr, size);
//
//    cout << "После изменения: " << endl;
//    cout << "n = " << n << endl;
//    cout << "Массив: ";
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
// задание 7
//int compareStrings(const char* str1, const char* str2) {
//    while (*str1 != '\0' && *str2 != '\0') {
//        if (*str1 < *str2) {
//            return -1;
//        }
//        else if (*str1 > *str2) {
//            return 1;
//        }
//        str1++;
//        str2++;
//    }
//
//    if (*str1 == '\0' && *str2 == '\0') {
//        return 0;
//    }
//    else if (*str1 == '\0') {
//        return -1;
//    }
//    else {
//        return 1;
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    const char* str1 = "hello";
//    const char* str2 = "hello";
//    const char* str3 = "world";
//    const char* str4 = "hell";
//
//    cout << "Сравниваем \"" << str1 << "\" и \"" << str2 << "\": " << compareStrings(str1, str2) << endl;
//    cout << "Сравниваем \"" << str1 << "\" и \"" << str3 << "\": " << compareStrings(str1, str3) << endl;
//    cout << "Сравниваем \"" << str3 << "\" и \"" << str1 << "\": " << compareStrings(str3, str1) << endl;
//    cout << "Сравниваем \"" << str1 << "\" и \"" << str4 << "\": " << compareStrings(str1, str4) << endl;
//    cout << "Сравниваем \"" << str4 << "\" и \"" << str1 << "\": " << compareStrings(str4, str1) << endl;
//
//    return 0;
//}

// задание 8
//int* findCommonElements(const int* arr1, int size1, const int* arr2, int size2, int& commonSize) {
//    int* commonElements = new int[size1 < size2 ? size1 : size2]; 
//    commonSize = 0;
//    for (int i = 0; i < size1; ++i) {
//        for (int j = 0; j < size2; ++j) {
//            if (arr1[i] == arr2[j]) {
//                commonElements[commonSize++] = arr1[i];
//                break; 
//            }
//        }
//    }
//    return commonElements;
//}
//
//int main() {
//    int arr1[] = { 1, 2, 3, 4, 5 };
//    int size1 = sizeof(arr1) / sizeof(arr1[0]);
//
//    int arr2[] = { 3, 4, 5, 6, 7 };
//    int size2 = sizeof(arr2) / sizeof(arr2[0]);
//
//    int commonSize;
//    int* commonElements = findCommonElements(arr1, size1, arr2, size2, commonSize);
//
//    cout << "Похожие элементы: ";
//    for (int i = 0; i < commonSize; ++i) {
//        cout << commonElements[i] << " ";
//    }
//    cout << endl;
//
//    delete[] commonElements; 
//
//    return 0;
//}
// задание 9
//void rotateArray(int* arr, int size, int positions) {
//    positions = positions % size; 
//    if (positions < 0) {
//        positions += size; 
//    }
//    int* temp = new int[size];
//    for (int i = 0; i < size; ++i) {
//        temp[i] = arr[(i + positions) % size];
//    }
//    for (int i = 0; i < size; ++i) {
//        arr[i] = temp[i];
//    }
//    delete[] temp; 
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    int arr[] = { 1, 2, 3, 4, 5 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int positions = 4;
//
//    cout << "Оригинальный массив: ";
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    rotateArray(arr, size, positions);
//
//    cout << "Перевернутый: ";
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

// 
// задание 10

int* mergeAndCompare(const int* arr1, int size1, const int* arr2, int size2, int& mergedSize) {
    if (size1 != size2) {
        mergedSize = -1; // указать на разные размеры
        return nullptr; // указать на ошибку
    }

    mergedSize = size1 + size2;
    int* mergedArray = new int[mergedSize];
    for (int i = 0; i < size1; ++i) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < size2; ++i) {
        mergedArray[size1 + i] = arr2[i];
    }
    return mergedArray; 
}

int main() {
    setlocale(LC_ALL, "");
    int size1 = 3;
    int size2 = 3;
    int* arr1 = new int[size1] {1, 2, 3};
    int* arr2 = new int[size2] {4, 5, 6};

    int mergedSize;
    int* mergedArray = mergeAndCompare(arr1, size1, arr2, size2, mergedSize);

    if (mergedSize == -1) {
        std::cout << "У массивов разные размеры" << std::endl;
    }
    else {
        std::cout << "Объединенный массив: ";
        for (int i = 0; i < mergedSize; ++i) {
            std::cout << mergedArray[i] << " ";
        }
        std::cout << std::endl;
    }
    delete[] arr1;
    delete[] arr2;
    if (mergedArray != nullptr) {
        delete[] mergedArray;
    }

    return 0;
}
