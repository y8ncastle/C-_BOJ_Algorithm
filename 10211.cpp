#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1001

int pSum[MAX];

int main()
{
  int t, n, x;

  cin >> t;

  for (int i=0; i<t; i++)
  {
    cin >> n;

    for (int j=1; j<=n; j++)
    {
      cin >> x;

      pSum[j] = pSum[j-1] + x;
    }

    int sum_max = -1000000;

    for (int j=1; j<=n; j++) {
      for (int k=j; k<=n; k++) {
        sum_max = max(sum_max, pSum[k]-pSum[j-1]);
      }
    }

    cout << sum_max << '\n';
  }

  return 0;
}
