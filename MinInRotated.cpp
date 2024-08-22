int findMin(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int m = INT_MAX;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[s] <= arr[e])
        {
            m = min(m, arr[s]);
            break;
        }
        if (arr[mid] >= arr[s])
        {
            m = min(m, arr[s]);
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
            m = min(m, arr[mid]);
        }
    }
    return m;
}