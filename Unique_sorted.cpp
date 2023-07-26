#include <bits/stdc++.h>
using namespace std;
bool descend(int a, int b)
{
    return a > b;
}
void removeD(int arr[], int &n)
{
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || arr[i] != arr[i - 1])
        {
            arr[p++] = arr[i];
        }
    }
    n = p;
}

void sort_print(int arr[], int n)
{
    sort(arr, arr + n, descend);
    removeD(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        sort_print(A, N);
    }
    return 0;
}
