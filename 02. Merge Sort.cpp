#include <iostream>
using namespace std;

void merge(int A[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int lArr[n1], rArr[n2]; 

    for (int i = 0; i < n1; i++) {
        lArr[i] = A[l + i];
    }
    for (int i = 0; i < n2; i++) {
        rArr[i] = A[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (lArr[i] <= rArr[j]) {
            A[k] = lArr[i];
            i++;
        } else {
            A[k] = rArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        A[k] = lArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        A[k] = rArr[j];
        j++;
        k++;
    }
}

void mergeSort(int A[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;

        mergeSort(A, l, mid);
        mergeSort(A, mid + 1, r);
        merge(A, l, mid, r);
    }
}

int main() {
    int A[] = {1, 0, 100, 11, 13, 5, 6, 8};
    int size = sizeof(A) / sizeof(A[0]);
    mergeSort(A, 0, size - 1);

    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
   cout << endl;

    return 0;
}
