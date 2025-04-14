 #include <iostream>
 using namespace std;

struct Hero{
    string nama;
    string role;
    string tipe;
};

 int main()
{
   Hero arhero;

   cout << "Masukkan nama hero = ";
   cin >> arhero.nama;
   cout << "Masukkan nama hero = ";
   cin >> arhero.role;
   cout << "Masukkan tipe hero = ";
   cin >> arhero.tipe;

cout << endl;
cout << "Tampilkan Hero" << endl;
cout << endl;

cout << "Nama Hero = " << arhero.nama << endl;
cout << "Jenis Role Hero = " << arhero.role << endl;
cout << "Tipe Hero = " << arhero.tipe << endl;
}