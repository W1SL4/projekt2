#include <iostream>

using namespace std;

 bool czy_pierwsza(int n) {
     if (n < 2) return false;
         for (int i = 2; i * i <= n; i++) {
                 if (n % i == 0) return false;
                     }
                         return true;
                         }

                         int main() {
                             int liczba;
                                 cout << "Podaj liczbę: ";
                                     cin >> liczba;

                                         // Sprawdzanie, czy liczba jest dodatnia
                                             if (liczba <= 0) {
                                                     cout << "Podana liczba nie jest dodatnia!" << endl;
                                                             return 1;
                                                                 }

                                                                     // Wypisanie liczby i informacji, czy jest pierwsza
         cout << liczba << " " << (czy_pierwsza(liczba) ? "jest liczbą pierwszą" : "nie jest liczbą pierwszą") << endl;

                                                                             return 0;
                                                                             }

