#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int total = 0;
    for (int i=1; i<=n; i++) 
    {
        total += i;
    }
    int total_sum = 0;
    for (int i=0; i<n-1; i++) 
    {
        int x;
        cin >> x;
        total_sum += x;
    }
    cout << total - total_sum << endl;
    return 0;
}