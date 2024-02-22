#include <iostream>
#include "sortowania.hpp"
using namespace std;


#include <iostream>
using namespace std;

// Funkcje sortujące i wyszukujące (search functions) zostają zdefiniowane i dodane tutaj.

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 64;

    cout << "Unsorted array: \n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    // Sortowanie Bąbelkowe
    bubbleSort(arr, n);
    cout << "Sorted array using Bubble Sort: \n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    // Sortowanie przez Wstawianie
    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    insertionSort(arr2, n);
    cout << "Sorted array using Insertion Sort: \n";
    for(int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    cout << "\n";

    // Sortowanie Koktajlowe
    int arr3[] = {64, 34, 25, 12, 22, 11, 90};
    cocktailSort(arr3, n);
    cout << "Sorted array using Cocktail Sort: \n";
    for(int i = 0; i < n; i++)
        cout << arr3[i] << " ";
    cout << "\n";

    // Sortowanie Szybkie
    int arr4[] = {64, 34, 25, 12, 22, 11, 90};
    quickSort(arr4, 0, n - 1);
    cout << "Sorted array using Quick Sort: \n";
    for(int i = 0; i < n; i++)
        cout << arr4[i] << " ";
    cout << "\n";

    // Sortowanie przez Scalanie
    int arr5[] = {64, 34, 25, 12, 22, 11, 90};
    mergeSort(arr5, 0, n - 1);
    cout << "Sorted array using Merge Sort: \n";
    for(int i = 0; i < n; i++)
        cout << arr5[i] << " ";
    cout << "\n";

    return 0;
}
