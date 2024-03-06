#pragma once

template <class T>
T** appendTOArray(T** arr, int& size, T* newItem) {
	T** newArr = new T * [size + 1];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	delete[] arr;
	newArr[size] = newItem;
	arr = newArr;
	size++;
	return arr;
}