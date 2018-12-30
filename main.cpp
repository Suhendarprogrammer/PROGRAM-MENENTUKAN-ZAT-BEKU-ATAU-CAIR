#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"**********PROGRAM MENENTUKAN SUATU ZAT BEKU / CAIR**********\n";
    cout<<"============================================================\n";
    cout<<"\nMasukkan Nilai Suhunya : ";
    cin>>a;
    cout<<"=============================================";
    if (a>0)
        cout<<"\nMaka Zat Tersebut Dalam Keadaan Cair : ";
    else
        cout<<"Maka Zat Tersebut Dalam Keadaan Beku : ";
    return 0;
}
