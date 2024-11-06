#include<iostream>
#define size 10  // Corrected: removed the extra semicolon
using namespace std;

template<class T>
void sort(T a[size], int &n) {
    T temp;
    cout << "\nEnter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];  // Input elements into the array
    }
  
    // Bubble sort logic to sort the array
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

template <class T>
void display(T a[size], int n) {
    cout << "\nSorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";  // Print each element of the sorted array
    }
    cout << endl;
}

int main() { 
    int ch;
    int a[size];
    float b[size];
    char c[size];
do{
    cout << "\nMenu\n1. Integer\n2. Float\n3. Char";
    cout << "\nEnter your choice: ";
    cin >> ch;

    int n;
    cout << "Enter the total number of elements you want to sort: ";
    cin >> n;
   
    switch(ch) {
        case 1:
            sort(a, n);  // Sort integer array
            display(a, n);  // Display the sorted array
            break;
        case 2:
            sort(b, n);  // Sort float array
            display(b, n);  // Display the sorted array
            break;
        case 3:
            sort(c, n);  // Sort char array
            display(c, n);  // Display the sorted array
            break;
        case 0:
        cout<<"Exiting program:";
        break;
        default:
            cout << "Invalid choice!";
    }
}while(ch!=0);
    return 0;
}
