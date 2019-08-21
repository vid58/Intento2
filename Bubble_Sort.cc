#include<iostream>

using namespace std;

int main()
{
    int a[50],n,temp;
    cout<<"Ingrese el tamaño del Arreglo: ";
    cin>>n;
    cout<<"Ingrese los elementos de la Arreglo: ";

    for(int i=0;i<n;++i) {
        cin >> a[i];
    }

    cout<<"\nArreglo: ";
    for(int i=0;i<n;++i) {
        cout << " " << a[i];
    }
    return 0;
}

