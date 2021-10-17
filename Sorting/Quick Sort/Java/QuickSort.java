package com.practice.sort;

public class QuickSort {

	static void swap(int[] arr, int i, int j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	static int partition(int[] arr, int low, int high) {
		int pivot = arr[high];
		int i = (low - 1);

		for (int j = low; j <= high - 1; j++) {
			if (arr[j] < pivot) {

				i++;
				swap(arr, i, j);
			}
		}
		swap(arr, i + 1, high);
		return (i + 1);
	}

	static void quickSort(int[] arr, int low, int high) {
		if (low < high) {
			int pi = partition(arr, low, high);
			quickSort(arr, low, pi - 1);
			quickSort(arr, pi + 1, high);
		}
	}

	public static void main(String[] args) {
		int[] nums = { 5, 7, 8, 3, 4, 2, 9, 10, 1 };
		quickSort(nums, 0, nums.length - 1);
		System.out.println("Sorted Array: ");
		for (int i = 0; i < nums.length; i++) {
			System.out.print(nums[i]+" ");
		}

	}
}
