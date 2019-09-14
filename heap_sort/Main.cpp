#include<iostream>
void swap(int& x, int& y)
{
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
}
int get_parents(int x)
{
	return ((x + 1) >> 1)-1;
}
int get_left_child(int x)
{
	return ((x + 1) << 1) - 1;
}
int get_right_child(int x)
{
	return (x + 1) << 1; 
}
void max_heapify(int* arr, int size, int i)
{
	int left = get_left_child(i);
	int right = get_right_child(i);
	int max = 0;
	int tag = 0;
	if (left >= size || right >= size)
	{
		return;
	}
	if (arr[left] > arr[right])
	{
		max = left;
	}
	else
	{
		max = right;
	}
	if (arr[i] < arr[max])
	{
		swap(arr[max], arr[i]);
		tag = 1;
	}
	if (tag == 1)
	{
		max_heapify(arr, size, max);
	}
}
void bulid_max_heap(int* arr, int size)
{

}
int main()
{
	int arr[] = { 27,17,3,16,13,10,1,5,7,12,4,8,9,0 };
	int size = sizeof(arr) / sizeof(int);
	max_heapify(arr, size, 2);
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	std::cout << get_left_child(7);
}