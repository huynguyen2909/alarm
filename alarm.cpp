#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int random(int& n)
{
    int temp;
    switch(n)
    {
        case 2: 
            n = 1; 
            break;
        case 3:
            n = 7;
            break;
        case 4:
            n = 4;
            break;
        case 5:
            temp = rand()%(3 - 1 + 1) + 1;
            switch(temp)
            {
                case 1:
                    n = 2;
                    break;
                case 2:
                    n = 3;
                    break;
                case 3:
                    n = 5;
                    break;
            }
            break;
        case 6: 
            temp = rand()%(3 - 1 + 1) + 1;
            switch(temp)
            {
                case 1:
                    n = 0;
                    break;
                case 2:
                    n = 6;
                    break;
                case 3:
                    n = 9;
                    break;
            }
            break;
        case 7:
            n = 8;
            break;
    }
    return n;
}

int main()
{
    int n, a, b, a1, a2, b1, b2, temp, hh, mm;
    cin >> n;
    if (n > 30 || n < 0) {cout << "wrong input"; return 0;}
    if (n < 8 || n > 26) {cout << "Impossible"; return 0;}
    srand(time(NULL));
    line64:
    a = rand()%(13 - 4 + 1) + 4;
    b = n - a;
    if (b < 4 || b > 13 ) goto line64;
    line68:
    a1 = rand()%(7 - 2 + 1) + 2;
    a2 = a - a1;
    if (a2 < 2 || a2 > 7) goto line68;
    random(a1);
    random(a2);
    hh = a1 * 10 + a2;
    if (hh > 23) goto line68;
    line76:
    b1 = rand()%(7 - 2 + 1) + 2;
    b2 = b - b1;
    if (b2 < 2 || b2 > 7) goto line76;
    random(b1);
    random(b2);
    mm = b1 * 10 + b2;
    if (mm > 59) goto line76;
    if (hh < 10) cout << "0" << hh << ":";
    else cout << hh << ":";
    if (mm < 10) cout << "0" << mm;
    else cout << mm; 
    return 0;
}
