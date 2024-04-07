#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
          int a[20], l = 0, r = 13, search, i, m, N;
          cout << "Enter a range:";
          cin >> N;
          r = N - 1;
          cout << "Enter " << N << " Numbers:";
          for (i = 0; i < N; i++)
          {
                    cin >> a[i];
          }
          cout << "Enter a number that you want to search:";
          cin >> search;

          while (l <= r)
          {

                    m = (l + r) / 2;
                    if (a[m] == search)
                    {
                              cout << "Number is found at this position " << m + 1;
                              break;
                    }
                    else if (a[m] > search)
                    {
                              r = m - 1;
                    }
                    else if (a[m] < search)
                    {
                              l = m + 1;
                    }
          }
          if (l > r)
          {
                    cout << "NUmber is not found";
          }
          getch();
}
