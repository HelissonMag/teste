

int Max_Subarray_Sum(int arr[],int n)	
{
	}
	int m = n/2;
	int left_MSS = Max_Subarray_Sum(arr,m);
	int right_MSS = Max_Subarray_Sum(arr+m,n-m);
	int leftsum = INT_MIN, rightsum = INT_MIN, sum=0;
	for(int i=m;i < n; i++)
	{
		sum += arr[i];
		rightsum = max(rightsum,sum);
	}
	sum = 0;
	for(int i= (m-1);i >= 0; i--)
	{
		sum += arr[i];
		leftsum = max(leftsum,sum);
	}
	int ans = max(left_MSS,right_MSS);
	return max(ans,leftsum+rightsum);

 oceedsddas

}



