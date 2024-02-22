#include <iostream>
#include "wyszukiwania.hpp"
#include "sortowania.hpp"

using namespace std;

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

    // Wyszukiwanie
    int liniowy = search_linear(arr, n, x);
    int linowe_wartownikiem = search_linear_sentinel(arr, n, x);
    int skokowe = search_jump(arr, n, x);
    int binarny = search_binary(arr, n, x);
    int interpolacyjne = search_interpolation(arr, n, x);

    cout << "wyszukiwanie liniowe index: \n";
    cout << liniowy << " ";
    cout << "\n";

    cout << "wyszukiwanie linowe_wartownikiem index: \n";
    cout << linowe_wartownikiem << " ";
    cout << "\n";

    cout << "wyszukiwanie skokowe index: \n";
    cout << skokowe << " ";
    cout << "\n";

    cout << "wyszukiwanie binarne index: \n";
    cout << binarny << " ";
    cout << "\n";

    cout << "wyszukiwanie interpolacyjne index: \n";
    cout << interpolacyjne << " ";
    cout << "\n";

    return 0;
}
