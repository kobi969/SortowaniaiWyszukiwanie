#include <iostream>
#include "sortowania.hpp"
using namespace std;


int main() {
    srand( time( NULL ) );
  const int n = 12
    int arr[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = std::rand() % 100; 
    }

    //wyswietlanie nieposortowanej tablicy
    cout << "Unsorted array: \n";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    //* Oznacza, że zmienna jest wskaźnikiem do liczby całkowitej.Posortowana tablica za pomaca sortowania babelkowego.
int* bubble = bubbleSort(arr, n);

    cout << "Sorted array: \n";
    for(int i=0; i<n; i++)
        cout << bubble[i] << " ";
    cout << "\n";
    //Posortowana tablica za pomaca sortowania wstawiania.
    int* wstawianie = insertionSort(arr, n);

    cout << "Sorted array: \n";
    for(int i=0; i<n; i++)
        cout << wstawianie[i] << " ";
    cout << "\n";
//Posortowana tablica za pomaca sortowania koktajlowe.
    int* koktajl = cocktailSort(arr, n);

    cout << "Sorted array: \n";
    for(int i=0; i<n; i++)
        cout << koktajl[i] << " ";
    cout << "\n";

    int* szybki = quickSort(arr, 0,n);

    cout << "Sorted array: \n";
    for(int i=0; i<n; i++)
        cout << szybki[i] << " ";
    cout << "\n";

    int* scalanie = mergeSort(arr, 0,n);

    cout << "Sorted array: \n";
    for(int i=0; i<n; i++)
        cout << scalanie[i] << " ";
    cout << "\n";

    return 0;
}