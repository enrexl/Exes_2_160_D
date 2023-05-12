#include <iostream>
using namespace std;


int sa[5]; //jumlah array maksimum 
int n; // number of element in the array
int i; // index of array element

void input() {
    while (true) {
        cout << "Enter the numner of element in the array = ";
        cin >> n;
        if ((n > 0) && (n <= 29))
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

void SelectionSort() {
    for (int ER = 0; ER < n - 1; ER++)
    {
        int min_index = ER;
        for (int i = ER + 1; i <= n - 1; i++)
        {
            
            if (sa[i] < sa[min_index]) {
                min_index = i;
                int temp;
                temp = sa[ER];
                sa[ER] = sa[min_index];
                sa[min_index] = temp;
                
            }
        }
    }
}

void search() {
    int ersa = 0;
    int rohman = n - 1;
    int element;

    cout << "\nMasukkan Angka yang ingin dicari = ";
    cin >> element;

    while (ersa <= rohman) {
        int mid = (ersa + rohman) / 2;
        if (sa[mid] == element) {
            cout << "\nFound" << endl;
            return;
        }
        else if (element < sa[mid]) 
            rohman = mid - 1;
        
        else 
            ersa = mid + 1;
    }
    cout << "\nNot Found" << endl;;
}

int main(){
    input();
    SelectionSort();
    search();
 }
