#include <iostream>
#include <cstdlib>

using namespace std;

void initArrayRandInt (int x[], int s);
bool isPrime(int x);
bool isEven(int x);
void printGoldbachsPairInArray (int x[], int s);

int main()
{
    int s = 15;
    int x[s];

    initArrayRandInt (x, s);
    printGoldbachsPairInArray (x, s);

    return 0;
}

void initArrayRandInt (int x[], int s)
{
    for(int i=0; i<s; i++)
    {
        x[i] = rand()%50 + 1;

        cout << x[i] << ", ";
    }
    cout << "\n\n";
}

bool isPrime(int x)
{
    if(x <= 1)
        return 0;

    for(int i=2; i<=x/2; i++)
    {
        if(x%i == 0)
            return 0;
    }

    return 1;
}

bool isEven(int x)
{
    if(x%2==0 && x>4)
        return 1;

    else
        return 0;
}

void printGoldbachsPairInArray (int x[], int s)
{
    for(int i=0; i<s; i++)
    {
        if(isEven(x[i]))
        {
            for(int j=2; j<x[i]/2; j++)
            {
                if(isPrime(j) && isPrime(x[i]-j))
                {
                    cout << x[i] << " = " << j << " + " << x[i]-j << endl;
                    break;
                }

            }
        }

    }
}
