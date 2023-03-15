#include "sort.h"
#include <iostream>

void bubbleSort_1(int array[], const int size)
{
	for(int i=0; i<size-1; i++)
	{
		for(int j=0; j<size-1; j++)
		{
			if(array[j] > array[j+1])
			{
				std::swap(array[j], array[j+1]);
			}
		}
	}
}


void bubbleSort_2(int array[], const int size)
{
	for(int i=size-1; i>0; i--)
	{
		for(int j=0; j<i; j++)
		{
			if(array[j] > array[j+1])
			{
				std::swap(array[j], array[j+1]);
			}
		}
	}
}


void bubbleSort_3(int array[], const int size)
{
	bool swapped = false;
	
	for(int i=size-1; i>0; i--)
	{
		swapped = false;
	
		for(int j=0; j<i; j++)
		{
			if(array[j] > array[j+1])
			{
				std::swap(array[j], array[j+1]);
				swapped = true;
			}
		}
		if(!swapped) break;
	}
}


void bubbleSort_4(int array[], const int size)
{
	int swapPos = 0;
	int swapMin = 0;
	int swapMax = size - 1;
	
	do {
		swapPos = -1;
	
		for(int i=swapMin; i<swapMax; i++)
		{
			if(array[i] > array[i+1])
			{
				std::swap(array[i], array[i+1]);
				if(swapPos < 0) swapMin = i;
				swapPos = i;
			}
		}
		if(swapMin) swapMin--;
		swapMax = swapPos;
	} while(swapPos >= 0);
}


void bubbleSort_5(int array[], const int size)
{
	int swapPos = 0;
	int swapMin = 0;
	int swapMax = size - 2;
	
	do {
		for(int i=swapMin; i<swapMax; i++)
		{
			if(array[i] > array[i+1])
			{
				std::swap(array[i], array[i+1]);
				swapPos = i;
			}
		}
		if(swapPos < 0) break;
		
		swapMax = swapPos - 1;
		swapPos = -1;
	
		for(int i=swapMax; i>=swapMin; i--)
		{
			if(array[i] > array[i+1])
			{
				std::swap(array[i], array[i+1]);
				swapPos = i;
			}
		}
		swapMin = swapPos + 1;
		
	} while(swapPos >= 0);
}


void quickSort(int array[], const int size, int left, int right)
{
	int i, j, piwot;
	
	i = (left + right) / 2;
	piwot = array[i]; array[i] = array[right];
	for(j = i = left; i < right; i++)
	{
		if(array[i] < piwot)
		{
			std::swap(array[i], array[j]);
			j++;
		}
	}
	array[right] = array[j]; array[j] = piwot;
	
	if(left < j - 1)  quickSort(array, size, left, j - 1);
	if(j + 1 < right) quickSort(array, size, j + 1, right);
}


void insertionSort(int array[], const int size)
{
	for(int i=1, j=1; i<size; i++)
	{
		j = i;
	
		while(j && array[j-1] > array[j])
		{
			std::swap(array[j-1], array[j]);
			j--;
		}
	}
}


void shellSort(int arr[], const int N)
{
	// determination of the value of the initial displacement
	int h = 1;
	
	while(h<N/3) h = 3 * h + 1;
	
	// sorting
	while(h)
	{
		for(int i=h, j=h; i<N; i++, j=i)
		{
			int temp = arr[i];
		
			while(j >= h && arr[j-h] > temp)
			{
				arr[j] = arr[j-h];
				j -= h;
			}
			arr[j] = temp;
		}
		h /= 3;
	}
}


void log(int array[], const int size)
{
	for(int i=0; i<size; i++)
	{
		std::cout << array[i] << ' ';
	}
}

//  MADE BY:
//   _______       ___   ____    ____  _______        ______              
//  |       \     /   \  \   \  /   / |   ____|      /      |   _     _   
//  |  .--.  |   /  ^  \  \   \/   /  |  |__        |  ,----' _| |_ _| |_ 
//  |  |  |  |  /  /_\  \  \      /   |   __|       |  |     |_   _|_   _|
//  |  '--'  | /  _____  \  \    /    |  |____      |  `----.  |_|   |_|  
//  |_______/ /__/     \__\  \__/     |_______|      \______|             
//
