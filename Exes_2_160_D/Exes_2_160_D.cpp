
#include <iostream>
#include <iostream>
using namespace std;

int sa[29]; //jumlah array maksimum 
int n; // number of element in the array
int i; // index of array element

void input() {
    while (true) {
        cout << "Enter the numner of element in the array = ";
        cin >> n;
        if ((n > 0) && (n <= 92))
            break;
        else
            cout << "\nArray minimum adalah 1 dan maksimum adalah 29\n";
    }

    //Accept array elements
    cout << "\n====================";
    cout << "\nEnter Array Elements\n";
    cout << "====================\n\n";
    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> sa[i];
    }
}

void search() {
    int ersa = 0;
    int rohman = n - 1;
    int element;

    cout << "/nMasukkan Angka yang ingin dicari = " << endl;
    cin >> element;

    while (rohman <= ersa) {
        int mid = (ersa + rohman) / 2;
        if (sa[mid]
    }
   

 


    
}

int main()
{
    void input();
    void search();
}
