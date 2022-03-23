#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

void timer (int h, int m, int s) {
    for(;;) {
        if (h == 0 && m == 0 && s== 0 ) {
            break;
        }

        if (s == 0 && m == 0) {
            m = 60;
            h--;
        }

        if (s == 0) {
            s = 60;
            m--;
        }

        system("cls");
        cout << h << ":" << m << ":" << s--;
        Sleep(1000);

    }
}

int main() {
    int h, m, s;

    cout << "Hours: " << endl; 
    cin >> h;

    cout << "Minutes: " << endl;
    cin >> m;

    cout << "Seconds: " << endl;
    cin >> s;

    timer(h, m, s);
    for (int i = 100; i = i+50) {
        Beep(i,1000)
    }
}