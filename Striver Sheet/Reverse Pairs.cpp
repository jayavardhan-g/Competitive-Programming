// https://leetcode.com/problems/reverse-pairs/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int result = 0;
int bs(vector<int> &v, int lo, int hi, int x)
{
    int l = lo;
    int h = hi;
    // int n=0;
    int mid;
    int ix = lo - 1;
    while (l < h)
    {
        mid = l + (h - l) / 2;
        if (v[mid] < x)
        {
            // n= mid - lo +1;
            ix = mid;
            l = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return ix;
}
void merge(vector<int> &v, int lo, int mid, int hi)
{
    vector<int> a;
    // int i=lo;
    int x = lo;
    int y = mid + 1;

    int l = lo;
    int c = 0;
    for (int i = lo; i <= mid; i++)
    {
        int ix = bs(v, l, hi, v[i]/2);
        c += ix - l + 1;
        result += c;
        l = ix + 1;
    }
    while (x <= mid && y <= hi)
    {
        if (v[x] < v[y])
        {
            a.push_back(v[x]);
            // a[i]=v[x];
            // i++;
            x++;
        }
        else
        {
            a.push_back(v[y]);
            // a[i]=v[y];
            // i++;
            y++;
        }
    }
    while (x <= mid)
    {
        a.push_back(v[x]);
        x++;
    }
    while (y <= hi)
    {
        a.push_back(v[y]);
        y++;
    }
    for (int i = lo; i <= hi; i++)
    {
        v[i] = a[i - lo];
    }
    return;
}
void mergesort(vector<int> &v, int lo, int hi)
{
    if (lo == hi)
        return;

    int mid = lo + (hi - lo) / 2;
    mergesort(v, lo, mid);
    mergesort(v, mid + 1, hi);
    merge(v, lo, mid, hi);
}
int reversePairs(vector<int> &nums)
{
    mergesort(nums, 0, nums.size() - 1);
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << ' ';
    return result;
}
int32_t main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    reversePairs(v);
}