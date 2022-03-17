// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
	int left = 0, right = size;
	int mid = (left + right) / 2;
	while (left <= right) {
		if (arr[mid] == value) {
			count++;
			break;
		}
		if (arr[mid] < value) {
			left = mid + 1;
			mid = (left + right) / 2;
		}
		if (arr[mid] > value) {
			right = mid - 1;
			mid = (left + right) / 2;
		}
	}
	int l = 1;
	while ((mid - l >= left) && (arr[mid - l] == value)) {
		count++;
		l++;
	}
	int r = 1;
	while ((mid + r <= right) && (arr[mid + r] == value)) {
		count++;
		r++;
	}
	return count;
}
