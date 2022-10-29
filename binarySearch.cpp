//Binary search program in c++ using iterative method

#include <bits/stdc++.h>
using namespace std;

// binary search function
int binarySearch(int a[], int l, int r, int x)
{
    while (l <= r)
    {
        // calculating the middle index
        int mid = l + (r - l) / 2;

        if (a[mid] == x) // if x is present on index 'mid'
            return mid;

        if (a[mid] < x)  // if x is less than the value at index 'mid'
            l = mid + 1; // changing the intial pointer

        else if (a[mid] > x) // if x is more than the value at index 'mid'
            r = mid - 1;     // changing the final pointer
    }
    // if the element in not present in the array
    return -1;
}

// main function
int main()
{
    // Asking user the size of the array
    int size;
    cout << "Please enter the size of the array : ";
    cin >> size;

    int arr[size]; // declaring an array 'arr' of size n

    // taking inputs in the array
    cout << "Please enter the values in the array in sorted order :\n ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int key;
    // Taking input of the key(i.e the number to be searched in the array)
    cout << "Enter the value to be searched : ";
    cin >> key;

    int ans = binarySearch(arr, 0, size - 1, key);

    if (ans == -1)
        cout << key << " is not present in the array\n";
    else
        cout << key << " is present at index " << ans << endl;
}
