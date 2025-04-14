 #include <iostream>
 using namespace std;
 
string matkul[] = {"Pemrograman dasar" , "Algoritma"};

float nilaiAkhir[2] = {1 , 2.5};

char grade[5];

 int main()
 {
 cout << "Nama matakuliah : " << matkul[0] << endl;
matkul[0] = "Logika teknik pemrograman";
cout << "Nama matakuliah : " << matkul[0] << endl;

for(int i = 0; i < 2; i++)
{
    cout << "Nilai akhir ke-" << i+1 << "=" << nilaiAkhir[i] << endl;
}

cout << "Input Grade" << endl;
for(int i = 0; i < 5; i++)
{
    cout << "Masukan Grade ";
    cin >> grade[i];
}

cout << endl;
cout << "Tampilkan Grade" << endl;
cout << endl;

for(int i = 0; i < 5; i++)
{
    cout << "Grade = " << grade[i] << endl;
} 
 }