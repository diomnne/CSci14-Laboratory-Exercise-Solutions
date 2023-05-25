#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = pow(10, 1);
    int y = pow(10, 6);

    for(int i=x; i<y; i++)
    {
        int digit, sum=0, temp=i;

        while(temp>0)
        {
            digit = temp%10;

            int f=1;
            while(digit>0)
            {
                f *= digit;
                digit -= 1;
            }
            sum += f;
            temp /= 10;
        }

        if(sum==i)
        {
            cout << i << " ";
        }

    }
    cout << endl;

    return 0;
}
