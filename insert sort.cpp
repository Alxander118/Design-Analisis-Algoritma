#include<iostream>
using namespace std;

int main() {
    int arr[50], tot, i, j, key;

    cout << "Masukkan Banyak Array: ";
    cin >> tot;

    cout << "Enter " << tot << " Array Elements: \n";
    for(i = 0; i < tot; i++) {
        cout << "masukkan angka ke-" << i << ": ";
        cin >> arr[i];
    }

    for(i = 1; i < tot; i++) {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;

        cout << "\nproses sorting " << i << ": ";
        for(j = 0; j < tot; j++)
            cout << arr[j] << "  ";
    }

    cout << "\n\nHasil Akhir:\n";
    for(i = 0; i < tot; i++)
        cout << arr[i] << "  ";
    cout << endl;

    return 0;
}
