// C++ program to find the frequency of
// minimum element in the array

#include <bits/stdc++.h>
using namespace std;

// Function to find the frequency of the
// smallest value in the array
int frequencyOfSmallest(int n, int arr[])
{
	int mn = arr[0], freq = 1;

	for (int i = 1; i < n; i++) {

		// If current element is smaller
		// than minimum
		if (arr[i] < mn) {
			mn = arr[i];
			freq = 1;
		}
		// If current element is equal
		// to smallest
		else if (arr[i] == mn)
			freq++;
	}

	return freq;
}

// Driver Code
int main()
{
	int N = 5;
	int arr[] = { 3, 2, 3, 4, 4 };

	cout << frequencyOfSmallest(N, arr);

	return 0;
}
