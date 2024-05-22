#include <bits/stdc++.h>
using namespace std;
int search(vector<int> v, int key)
{
    int lo = 0;
    int hi = v.size() - 1;
    while (hi >= lo)
    {
        int mid = (hi + lo) / 2;
        if (v[mid] == key)
            return mid;
        else if (key > v[mid])
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return 0;
}

int bsearch(vector<int> v, int key)
{
    int lo = 0;
    int hi = v.size() - 1;
    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (v[mid] < key)
            lo = mid + 1;
        else
            hi = mid;
    }
    if (v[lo] == key)
        cout << lo;
    else if (v[hi] == key)
        cout << hi;
    else
        cout << "NOT FOUND";
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;
    cin >> key;
    if (search(v, key))
        cout << search(v, key);
    else
        cout << "NOT FOUND";

    return 0;
}