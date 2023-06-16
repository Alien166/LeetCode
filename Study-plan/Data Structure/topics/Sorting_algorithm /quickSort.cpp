int partition1(int arr[], int l, int h)
{
	int p = arr[l];
	int i = l;
	int j = h;
	while (i < j)
	{
		do
		{
			i++;
		} while (arr[i] <= p);
		do
		{
			j--;
		} while (arr[j] > p);

		if (i < j)
			swap(arr[i], arr[j]);
	}
	swap(arr[l], arr[j]);
	return j;
}

void quickSort1(int arr[], int l, int h)
{

	if (l < h) {
		int piv = partition1(arr, l, h);
		quickSort1(arr, l, piv);
		quickSort1(arr, piv + 1, h);
	}

}



int partition2(int arr[], int iBegin, int jEnd) {
	int i = iBegin;
	int j = jEnd;
	int pivLoc = i;
	while (true)
	{
		while (arr[pivLoc] <= arr[j] && pivLoc != j)
		{
			j--;
		}
		if (pivLoc == j)
			break;
		else if (arr[pivLoc] > arr[j])
		{
			swap(arr[j], arr[pivLoc]);
			pivLoc = j;
		}

		while (arr[pivLoc] >= arr[i] && pivLoc != i)
		{
			i++;
		}
		if (pivLoc == i)
			break;
		else if (arr[pivLoc] < arr[i])
		{
			swap(arr[i], arr[pivLoc]);
			pivLoc = i;
		}
	}
	return pivLoc;
}


void quickSort2(int arr[], int l, int h)
{

	if (l < h) {
		int piv = partition2(arr, l, h);
		quickSort2(arr, l, piv - 1);
		quickSort2(arr, piv + 1, h);
	}

}
