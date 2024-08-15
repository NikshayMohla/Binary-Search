int searchInsert(vector<int>& arr, int m)
{
	int s=0;
	int e=arr.size()-1;
	int ans=arr.size();
	while(s<=e){
		int mid=s+(e-s)/2;
		if(arr[mid]>=m){
			ans=mid;
			e=mid-1;
		}
		else s=mid+1;
	}
	return ans;
}