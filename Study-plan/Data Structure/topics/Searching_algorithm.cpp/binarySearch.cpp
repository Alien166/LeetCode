int binarySearch(int arr[], int l, int h, int element)
{
	while (l <= h) {
		
		int m = (l + h) / 2;//both=>m = l + (r - l) / 2 both=>m = (2 l + r -l)/2

		
		if (arr[m] == element)
			return m;
        
		if (arr[m] > element)
			
		h = m - 1;

		else

		l = m + 1;

	}

	return -1;
}
