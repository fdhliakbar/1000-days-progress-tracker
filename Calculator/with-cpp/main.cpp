#include <iostream>
using namespace std;

int main(){
    cout << "Pilih operasi matematika: " << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Masukkan pilihan (1-4): ";

    int choice;
    cin >> choice;

    cout << "Masukkan dua angka: ";
    float num1, num2;
    cin >> num1 >> num2;

    string result;

    while (true) {
        switch (choice) {
            case 1:
                result = to_string(num1 + num2);
                cout << "Hasil Penjumlahan: " << result << endl;
                return 0;
            case 2:
                result = to_string(num1 - num2);
                cout << "Hasil Pengurangan: " << result << endl;
                return 0;
            case 3:
                result = to_string(num1 * num2);
                cout << "Hasil Perkalian: " << result << endl;
                return 0;
            case 4:
                if (num2 != 0) {
                    result = to_string(num1 / num2);
                    cout << "Hasil Pembagian: " << result << endl;
                } else {
                    cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
                }
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                return 0;
        }
        
    }
    return 0;
}