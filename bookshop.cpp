#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> book_titles;
    int n;
    
    cout << "masukkan jumlah buku : ";
    cin >> n;
    
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        string title;
        cout << "masukkan judul buku " << i + 1 << ": ";
        getline(cin, title);
        book_titles.push_back(title);
    }
    
    sort(book_titles.begin(), book_titles.end());
    
    cout << "\nsusunan judul buku[Alphabet a-z]:\n";
    for (vector<string>::iterator it = book_titles.begin(); it != book_titles.end(); ++it) {
        cout << *it << endl;
    }
    
    return 0;
}
