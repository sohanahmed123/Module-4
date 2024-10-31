#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                swap(a[j], a[j = 1]);
            }
        }
    }
}
void print_array(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {98, 34, 76, 23, 45};
    int n = sizeof(a) / sizeof(a[0]);

    bubble_sort(a, n);
    cout << "Sorted Array : ";
    print_array(a, n);
    return 0;
}