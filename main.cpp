#include <iostream>
#include "wyszukiwania.hpp"
#include "sortowania.hpp"
using namespace std;


int main() {
    
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    //zliczanie elementow w tablicy
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 64;
    //wyswietlanie nieposortowanej tablicy
    cout << "Unsorted array: \n";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    //Search
    // * Oznacza, że zmienna jest wskaźnikiem do liczby całkowitej.Posortowana tablica za pomaca sortowania babelkowego.
    int* liniowy = search_linear(arr, x);

    cout << "wyszukiwanie liniowe index: \n";
    cout << liniowy << " ";
    cout << "\n";
    //
    int* linowe_wartownikiem = search_linear_sentinel(arr, x);

    cout << "wyszukiwanie linowe_wartownikiem index: \n";
    cout <<  linowe_wartownikiem << " ";
    cout << "\n";
    //
    int* skokowe = search_jump(arr, x);

    cout << "wyszukiwanie skokowe index: \n";
    cout << skokowe << " ";
    cout << "\n";
    //
    int* binarny = search_binary(arr, x);

    cout << "wyszukiwanie binarne index: \n";
    cout << binarny << " ";
    cout << "\n";
    //
    int* interpolacyjne = ssearch_interpolation(arr, x);

    cout << "wyszukiwanie interpolacyjne index: \n";
    cout << interpolacyjne << " ";
    cout << "\n";

    //Sort
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