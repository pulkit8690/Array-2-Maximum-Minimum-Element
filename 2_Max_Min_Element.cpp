#include <iostream>
using namespace std;
int max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
int min(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int main()
{
    int n;
    cout << "Enter Size Of Array: ";
    cin >> n;
    int arr[n];
    cout << "Entering Elements Of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_element = max(arr, n);
    int min_element = min(arr, n);
    cout << "Maximum element is " << max_element << endl;
    cout << "Minnimum element is " << min_element << endl;
    return 0;
}