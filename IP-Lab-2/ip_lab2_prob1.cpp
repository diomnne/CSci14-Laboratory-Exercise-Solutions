#include <iostream>

using namespace std;

int main()
{
    // needs working solution

    int prev, maxSum;

    for(int i=10; i<1000; i++)
    {
        int sum=0, temp=i;

        while(temp>1)
        {
            if(temp%2==0)
            {
                sum += temp;
                temp /= 2;
            }
            else
            {
                sum += temp;
                temp = (3*i+1);
            }

        }

        if(sum>prev)
        {
            maxSum = i;
            prev = sum;
        }
    }

    cout << maxSum;

    return 0;
}
