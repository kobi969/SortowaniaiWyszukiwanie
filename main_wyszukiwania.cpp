#include <iostream>
#include <cmath>
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

    int liniowy = search_linear(arr,n, x);
    int linowe_wartownikiem = search_linear_sentinel(arr,n, x);
    int skokowe = search_jump(arr,n, x);
    int binarny = search_binary(arr,n, x);
    int interpolacyjne = search_interpolation(arr,n, x);


    cout << "wyszukiwanie liniowe index: \n";
    cout << liniowy << " ";
    cout << "\n";

    cout << "wyszukiwanie linowe_wartownikiem index: \n";
    cout <<  linowe_wartownikiem << " ";
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

