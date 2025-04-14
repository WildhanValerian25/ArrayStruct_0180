#include <iostream>
using namespace std;

struct Hero
{
    string nama;
    string role;
    string tipe;
};

int main()
{
    Hero arhero[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Hero ke- " << i + 1 << endl;
        cout << "Masukkan nama hero = ";
        cin >> arhero[i].nama;
        cout << "Masukkan nama hero = ";
        cin >> arhero[i].role;
        cout << "Masukkan tipe hero = ";
        cin >> arhero[i].tipe;
    }

    cout << endl;
    cout << "Tampilkan Hero" << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Hero ke- " << i + 1 << endl;
        cout << "Nama Hero = " << arhero[i].nama << endl;
        cout << "Jenis Role Hero = " << arhero[i].role << endl;
        cout << "Tipe Hero = " << arhero[i].tipe << endl;
    }
}