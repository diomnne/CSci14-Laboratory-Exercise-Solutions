#include <iostream>

using namespace std;

bool isFib(int x);
void dispFibsInRange(int s=1, int e=10);
void dispFibsReciprocalInRange(int s=1, int e=10);
double FibsReciprocalSumInRange(int s=0, int e=10);

int main()
{
    int x=5;

    cout << isFib(x) << endl;
    cout << isFib(y) << endl;

    dispFibsInRange();
    cout << endl;

    dispFibsReciprocalInRange();
    cout << endl;

    cout << FibsReciprocalSumInRange() << endl;

    return 0;
}

bool isFib(int x)
{
    int n1=0, n2=1, n3;

    if(x==0 || x==1)
    {
        return true;
    }

    while(n2<=x)
    {
        n3 = n1+n2;
        n1=n2;
        n2=n3;

        if(n2==x)
        {
            return true;
        }
    }

    return false;
}

void dispFibsInRange(int s, int e)
{
   for(int x=s; x<=e; x++)
   {
       if(isFib(x))
       {
           cout << x << ", ";
       }
   }
}

void dispFibsReciprocalInRange (int s, int e)
{
    double rec;

    for(int x=s; x<=e; x++)
    {
       if(isFib(x))
       {
           rec = 1.0/static_cast<double>(x);
           cout << rec << ", ";
       }
    }
}

double FibsReciprocalSumInRange(int s, int e)
{
    double sum=0;
    double rec;

    for(int x=s; x<=e; x++)
    {
       if(isFib(x) && x>0)
       {
           rec = 1.0/static_cast<double>(x);
           sum += rec;
       }
    }

    return sum;
}
