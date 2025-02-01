#include <iostream>

using namespace std;

bool czy_pierwsza(int n) {
    	if (n < 2) return false;   
	
	for (int i = 2; i * i <= n; i++) {
		
		if (n % i == 0) return false;
    		}   
	
	return true;
	
	}


int main()
        int liczba;
        cout << "Podaj liczbę: ";
        cin >> liczba;
        if (liczba <= 0) {
        cout << "Podana liczba nie jest dodatnia!" << endl;
        return 1;
         }

	cout << (czy_pierwsza(liczba) ? "jest liczba pierwsza" : "nie jest liczba pierwsza" << endl;

                                                                             return 0;
                                                                             }

