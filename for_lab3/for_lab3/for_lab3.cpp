#include <iostream>
#include "Header.h"

using namespace std;
void menu();

void menu() {
    cout << "1. Task 1 summ(int n)\n";
    cout << "2. Task 2 summ2(double eps)\n";
    cout << "3. Task 3 print(int n ,int k)\n";
    cout << "4. Task 4 findFirstElement(double eps)\n";
    cout << "5. Task 5 findFirstNegativeElement(double eps)\n";
    cout << "6. Vihod\nVvedite nomer=";
}

int main()
{
    int n, k, p;
    double eps;
    do {
        menu();
        cout << "Input number task" << endl;
        cin >> p;
        system("cls");
        switch (p) {
        case 1:
            cout << "Input n\n";
            cin >> n;
            cout << "Sum = " << sum(n) << endl;
            break;
        case 2:
            cout << "Input eps\n";
            cin >> eps;
            cout << "Sum2 = " << summ2(eps) << endl;
            break;
        case 3:
            cout << "Input n i k\n";
            cin >> n;
            cin >> k;
            print(n, k);
            break;
        case 4:
            cout << "Input eps\n";
            cin >> eps;
            cout << "First number chlena s tocnhostiu = " << findFirstElement(eps) << endl;
            break;
        case 5:
            cout << "Input eps\n";
            cin >> eps;
            cout << "First negative number chlena s tocnhostiu = " << findFirstNegativeElement(eps) << endl;
            break;
        case 6:
        exit:
            system("cls");
            p = 7;
            break;
        }
    } while (p < 6 && p > 0);
    
    return 0;
}