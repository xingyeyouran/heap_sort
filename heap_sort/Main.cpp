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
void max_heapify(int* arr, int size, int i)
{
	int parent = get_parents(i);
	int max = parent;
	if (arr[i] > parent)
	{

	}
}
void bulid_max_heap(int* arr, int size)
{

}