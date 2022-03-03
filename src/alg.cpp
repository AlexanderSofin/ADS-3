// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int count = 0;
	for (int i = 1; i < size; i++) {
		if (*(arr + i) == value) {
			count += 1;
		}
	}
	//  поместить сюда реализацию алгоритма
	return count; // если ничего не найдено
}
