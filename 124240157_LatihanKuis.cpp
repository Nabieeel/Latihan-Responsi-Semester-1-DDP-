#include <iostream>
#include <string>

using namespace std;

// Struktur untuk menyimpan data barang
struct Barang
{
    string tanggal_masuk;
    string nama_barang;
    int stok;
};

// Fungsi untuk login
bool login()
{
    string username, password;
    string correct_username = "Nabil";
    string correct_password = "157";

    cout << "=== Login ===" << endl;
    cout << "Masukkan Username: ";
    cin >> username;
    cout << "Masukkan Password (NIM): ";
    cin >> password;

    if (username == correct_username && password == correct_password)
    {
        cout << "Login berhasil!\n";
        return true;
    }
    else
    {
        cout << "Login gagal. Program keluar.\n";
        return false;
    }
}

int main()
{
    Barang barang1, barang2;
    string cari_barang;
    bool loggedIn = login();

    if (!loggedIn)
    {
        return 0; // Keluar jika login gagal
    }

    // Halaman utama
    int kesempatan = 5;

    for (int i = 0; i < kesempatan; i++)
    {
        cout << "\n=== Menu Utama ===" << endl;
        cout << "1. Input Barang dan Stok" << endl;
        cout << "2. Pengecekan Barang dan Stok" << endl;
        cout << "3. Pencarian Barang yang Masuk" << endl;
        cout << "Pilih menu (1-3): ";
        int pilihan;
        cin >> pilihan;

        if (pilihan == 1)
        {
            // Input barang dan stok
            cout << "\nInput Barang 1" << endl;
            cout << "Masukkan Tanggal Masuk (hh/bb): ";
            cin >> barang1.tanggal_masuk;
            cout << "Masukkan Nama Barang: ";
            cin >> barang1.nama_barang;
            cout << "Masukkan Stok Barang: ";
            cin >> barang1.stok;

            cout << "\nInput Barang 2" << endl;
            cout << "Masukkan Tanggal Masuk (hh/bb): ";
            cin >> barang2.tanggal_masuk;
            cout << "Masukkan Nama Barang: ";
            cin >> barang2.nama_barang;
            cout << "Masukkan Stok Barang: ";
            cin >> barang2.stok;
        }
        else if (pilihan == 2)
        {
            // Pengecekan barang dan stok
            cout << "\n=== Data Barang yang Masuk ===" << endl;
            cout << "Barang 1: " << barang1.nama_barang << ", Tanggal Masuk: " << barang1.tanggal_masuk << ", Stok: " << barang1.stok << endl;
            cout << "Barang 2: " << barang2.nama_barang << ", Tanggal Masuk: " << barang2.tanggal_masuk << ", Stok: " << barang2.stok << endl;
        }
        else if (pilihan == 3)
        { 
            // Pencarian barang yang masuk
            cout << "\nMasukkan Nama Barang yang Ingin Dicari: ";
            cin >> cari_barang;

            if (cari_barang == barang1.nama_barang)
            {
                cout << "Barang 1: " << barang1.nama_barang << ", Tanggal Masuk: " << barang1.tanggal_masuk << ", Stok: " << barang1.stok << endl;
            }
            else if (cari_barang == barang2.nama_barang)
            {
                cout << "Barang 2: " << barang2.nama_barang << ", Tanggal Masuk: " << barang2.tanggal_masuk << ", Stok: " << barang2.stok << endl;
            }
            else
            {
                cout << "Barang tidak ditemukan!" << endl;
            }
        }
        else
        {
            cout << "Pilihan tidak valid!" << endl;
        }

        if (i < kesempatan - 1)
        {
            cout << "\nAnda masih memiliki " << (kesempatan - i - 1) << " kesempatan untuk mengakses menu utama.\n";
        }
        else
        {
            cout << "\nKesempatan habis! Program selesai.\n";
        }
    }

    return 0;
}