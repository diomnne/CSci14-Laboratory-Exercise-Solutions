#include <iostream>

using namespace std;

int main()
{
    int n=1, ctr1000, ctr500, ctr200, ctr100, ctr50, ctr20, ctr10, ctr5, ctr1;

    while(1)
    {
        cout << "\n";
        cin >> n;

        if (n<0)
        {
            break;
        }
        else
        {
            ctr1000 = n / 1000;
            n = n % 1000;

            ctr500 = n / 500;
            n = n % 500;

            ctr200 = n / 200;
            n = n % 200;

            ctr100 = n / 100;
            n = n % 100;

            ctr50 = n / 50;
            n = n % 50;

            ctr20 = n / 20;
            n = n % 20;

            ctr10 = n / 10;
            n = n % 10;

            ctr5 = n / 5;
            n = n % 5;

            ctr1= n / 1;
            n = n % 1;

            cout <<"("<< ctr1000 <<")" << "1000, ";
            cout <<"("<< ctr500 <<")" << "500, ";
            cout <<"("<< ctr200 <<")" << "200, ";
            cout <<"("<< ctr100 <<")" << "100, ";
            cout <<"("<< ctr50 <<")" << "50, ";
            cout <<"("<< ctr20 <<")" << "20, ";
            cout <<"("<< ctr10 <<")" << "10, ";
            cout <<"("<< ctr5 <<")" << "5, ";
            cout <<"("<< ctr1 <<")" << "1";
        }
    }

    return 0;
}
