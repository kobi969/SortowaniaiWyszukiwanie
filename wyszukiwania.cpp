#include <iostream>
#include <vector>
#include <cmath>
#include "wyszukiwania.hpp"

int search_linear(std::vector<int>& arr, int x) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}


int search_linear_sentinel(std::vector<int>& arr, int x) {
    int n = arr.size();
    arr.push_back(x);  // dodajemy x na koniec tablicy
    int i = 0;
    while (arr[i] != x) {
        i++;
    }
    arr.pop_back();  // usuwamy dodany wartownik
    if (i < n) {
        return i;
    } else {
        return -1;
    }
}


int search_jump(std::vector<int>& arr, int x) {
    int n = arr.size();
    int step = sqrt(n);
    int prev = 0;
    while (arr[std::min(step, n) - 1] < x) {
        prev = step;
        step += sqrt(n);
        if (prev >= n) {
            return -1;
        }
    }
    while (arr[prev] < x) {
        prev++;
        if (prev == std::min(step, n)) {
            return -1;
        }
    }
    if (arr[prev] == x) {
        return prev;
    }
    return -1;
}


int search_binary(std::vector<int>& arr, int x) {
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < x) {
            low = mid + 1;
        } else if (arr[mid] > x) {
            high = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}


int search_interpolation(std::vector<int>& arr, int x) {
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high && x >= arr[low] && x <= arr[high]) {
        int pos = low + ((high - low) / (arr[high] - arr[low])) * (x - arr[low]);
        if (arr[pos] == x) {
            return pos;
        }
        if (arr[pos] < x) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }
    return -1;
}