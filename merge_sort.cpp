#include <iostream>
#include <string>
#include <vector>

using namespace std;

void merge(vector<int> &v, const int left, const int right) {
    auto mid = (left + right) / 2;
    auto v1 = vector<int>(v.begin() + left, v.begin() + mid + 1);
    auto v2 = vector<int>(v.begin() + mid + 1, v.begin() + right + 1);
    auto size1 = v1.size();
    auto size2 = v2.size();
    int i = left, i1 = 0, i2 = 0;
    while (i1 < size1 && i2 < size2) {
        if (v1[i1] < v2[i2]) {
            v[i] = v1[i1];
            i1++;

        } else {
            v[i] = v2[i2];
            i2++;
        }
        i++;
    }
    while (i1 < size1) {
        v[i] = v1[i1];
        i1++;
        i++;
    }
    while (i2 < size2) {
        v[i] = v2[i2];
        i2++;
        i++;
    }
}

void mergeSort(vector<int> &v, const int left, const int right) {
    if (left >= right) {
        return;
    }
    auto mid = (left + right) / 2;
    mergeSort(v, left, mid);
    mergeSort(v, mid + 1, right);
    merge(v, left, right);
}

int main() {
    vector<int> testVec({5, 10, 1, 23, 3, 7, 9, 100, 8, 11});
    mergeSort(testVec, 0, testVec.size() - 1);
    for (const auto &value : testVec) {
        cout << value << ",";
    }
    cout << endl;
}