#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("--------------------------------------------------------------------");
    printf("--------------------------------------------------------------------");
    // Praktikum 3, no. 1
    // Program untuk mengubah bilangan bulat menjadi nama hari
    printf("Bilangan bulat jadi hari\n");
    int hari;

    // Meminta input bilangan bulat untuk menentukan hari
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &hari);

    // Menggunakan switch-case untuk menampilkan hari berdasarkan input
    switch(hari) {
        case 1:
            printf("Minggu\n\n\n");
            break;
        case 2:
            printf("Senin\n\n\n");
            break;
        case 3:
            printf("Selasa\n\n\n");
            break;
        case 4:
            printf("Rabu\n\n\n");
            break;
        case 5:
            printf("Kamis\n\n\n");
            break;
        case 6:
            printf("Jumat\n\n\n");
            break;
        case 7:
            printf("Sabtu\n\n\n");
            break;
        default:
            printf("Bilangan tidak valid, mohon coba lagi\n\n");
            break;
    }

    printf("--------------------------------------------------------------------");
    printf("--------------------------------------------------------------------");
    
    // Praktikum 3, no. 2
    // Program kalkulator dengan operator yang dapat dipilih
    printf("Percobaan nomor 2\n");
    int valid_operator = 1;  // Flag untuk memastikan operator valid
    char operator;
    float angka1_2, angka2_2, hasil_2;

    // Meminta input dua bilangan dan sebuah operator
    printf("Masukkan 2 buah bilangan & sebuah operator\n");
    printf("dengan format : number1 operator(+, -, *, /) number2\n\n");
    scanf("%f %c %f", &angka1_2, &operator, &angka2_2);

    // Menggunakan switch-case untuk menentukan operasi berdasarkan operator
    switch(operator) {
        case '+':
            hasil_2 = angka1_2 + angka2_2;
            break;
        case '-':
            hasil_2 = angka1_2 - angka2_2;
            break;
        case '*':
            hasil_2 = angka1_2 * angka2_2;
            break;
        case '/':
            hasil_2 = angka1_2 / angka2_2;
            break;
        default:
            printf("Invalid operator!\n");
            valid_operator = 0;  // Jika operator tidak valid, set flag menjadi 0
            break;
    }

    // Jika operator valid, tampilkan hasil operasi
    if(valid_operator)
        printf("%g %c %g adalah %g\n\n\n", angka1_2, operator, angka2_2, hasil_2);

    printf("--------------------------------------------------------------------");
    printf("--------------------------------------------------------------------");
    
    // Praktikum 3, no. 3
    // Program untuk menghitung volume kubus, luas lingkaran, atau volume silinder
    printf("Percobaan nomor 3\n");
    int pilihan;
    float sisi, jari_jari, tinggi, hasil_3, phi = 3.14;

    // Meminta input untuk menentukan perhitungan yang ingin dilakukan
    printf("Pengen hitung apa?\n1. Menghitung volume kubus\n2. Menghitung luas lingkaran\n3. Menghitung volume silinder\nMasukkan pilihan anda: ");
    scanf("%d", &pilihan);

    // Menggunakan switch-case untuk memilih perhitungan berdasarkan pilihan pengguna
    switch(pilihan) {
        case 1:
            printf("Masukkan panjang sisi kubus: ");
            scanf("%f", &sisi);
            hasil_3 = sisi * sisi * sisi;  // Rumus volume kubus
            printf("Jadi volume kubus adalah %g\n", hasil_3);
            break;
        case 2:
            printf("Masukkan panjang jari-jari lingkaran: ");
            scanf("%f", &jari_jari);
            hasil_3 = phi * jari_jari * jari_jari;  // Rumus luas lingkaran
            printf("Jadi luas lingkaran adalah %g\n", hasil_3);
            break;
        case 3:
            printf("Masukkan panjang jari-jari lingkaran: ");
            scanf("%f", &jari_jari);
            printf("Masukkan tinggi silinder: ");
            scanf("%f", &tinggi);
            hasil_3 = phi * jari_jari * jari_jari * tinggi;  // Rumus volume silinder
            printf("Jadi volume silinder adalah %g\n", hasil_3);
            break;
        default:
            printf("Pilihan anda tidak valid!!\n");
            break;
    }

    // Program selesai
    return 0;
}
