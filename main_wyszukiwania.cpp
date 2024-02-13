#include <iostream>
#include "wyszukiwania.hpp"
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
    return 0;
}
    
