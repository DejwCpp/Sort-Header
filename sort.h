#pragma once

// From least to most optimized version of bubble sort
void bubbleSort_1(int array[], const int size); // O(n^2)
void bubbleSort_2(int array[], const int size); // O(n^2)
void bubbleSort_3(int array[], const int size); // O(n) - O(n^2)
void bubbleSort_4(int array[], const int size); // O(n) - O(n^2)
void bubbleSort_5(int array[], const int size); // O(n) - O(n^2)

// [WARNING]: use it wisely, 'cause level of recursive calls can cause stack overflows !!!
void quickSort(int array[], const int size, int left, int right);

void insertionSort(int array[], const int size);

void shellSort(int arr[], const int N);


void log(int array[], const int size);


//  COMPUTATIONAL COMPLEXITY:
//
//  ########################################################
//  #   ---------   | PESIMISTIC |   AVERAGE  | OPTIMISTIC #
//  #------------------------------------------------------#
//  # bubbleSort_5  | O(n^2)     | O(n^2)     | O(n)       #
//  #------------------------------------------------------#
//  # quickSort     | O(n^2)     | O(n log n) | O(n log n) #
//  #------------------------------------------------------#
//  # insertionSort | O(n^2)     | O(n^2)     | O(n)       #
//  #------------------------------------------------------#
//  # shellSort     | O(n^2)     | O(n log n) | O(n log n) #
//  ########################################################
