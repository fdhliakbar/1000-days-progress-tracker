#include <iostream>

int main() {
    short int birthDate[3], thisYear[3];
    short int ageYears, ageMonths, ageDays;

    std::cout << "Masukkan tanggal lahir anda (tanggal - bulan - tahun):\n";
    for (int i = 0; i < 3; i++) {
        std::cin >> birthDate[i];

        if (birthDate[i] < 0) {
            std::cout << "Mohon masukkan tanggal lahir anda dengan benar." << '\n';
            return 1; // Exit the program with an error code
        }
    }

    std::cout << "Masukkan tanggal saat ini (tanggal - bulan - tahun):\n";
    for (int i = 0; i < 3; i++) {
        std::cin >> thisYear[i];

        if (thisYear[i] < 0) {
            std::cout << "Mohon masukkan tanggal saat ini dengan benar." << '\n';
            return 1; // Exit the program with an error code
        }
    }

    // Calculate age in years
    ageYears = thisYear[2] - birthDate[2];

    // Calculate age in months and adjust for birth month
    ageMonths = thisYear[1] - birthDate[1];
    if (ageMonths < 0) {
        ageYears--;
        ageMonths = 12 - birthDate[1] + thisYear[1];
    }

    // Calculate age in days and adjust for birth day
    ageDays = thisYear[0] - birthDate[0];
    if (ageDays < 0) {
        ageMonths--;
        if (thisYear[1] == 0) {
            thisYear[1] = 12;
            thisYear[2]--;
        }
        int daysInPrevMonth;
        switch (thisYear[1]) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                daysInPrevMonth = 31;
                break;
            case 4: case 6: case 9: case 11:
                daysInPrevMonth = 30;
                break;
            case 2:
                if ((thisYear[2] % 4 == 0 && thisYear[2] % 100 != 0) || thisYear[2] % 400 == 0)
                    daysInPrevMonth = 29;
                else
                    daysInPrevMonth = 28;
                break;
        }
        ageDays = daysInPrevMonth - birthDate[0] + thisYear[0];
    }

    std::cout << "Umur anda saat ini adalah: " << ageYears << " tahun, " << ageMonths << " bulan, dan " << ageDays << " hari." << std::endl;

    return 0;
}
