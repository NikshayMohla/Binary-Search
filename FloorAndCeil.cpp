int find_floor(vector<int> &arr, int n, int x) {
  int low = 0;
  int high = n - 1;
  int ans = -1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] <= x) {
      ans = arr[mid];
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return ans;
}
int find_ciel(vector<int> &arr, int n, int x) {
  int ans = -1;
  int low = 0;
  int high = n - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] >= x) {
      ans = arr[mid];
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
  int f = find_floor(a, n, x);
  int c = find_ciel(a, n, x);
  return make_pair(f, c);
}