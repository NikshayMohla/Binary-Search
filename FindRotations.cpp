
#include <climits>
int findKRotation(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int m = INT_MAX;
    int index = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[s] <= arr[e])
        {
            if (arr[s] < m)
            {
                index = s;
                m = arr[s];
            }

            break;
        }
        if (arr[s] <= arr[mid])
        {
            if (arr[s] < m)
            {
                index = s;
                m = arr[s];
            }
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
            if (arr[mid] < m)
            {
                index = mid;
                m = arr[mid];
            }
        }
    }
    return index;
}