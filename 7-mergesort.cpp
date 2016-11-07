#include <iostream>
#include <cstdlib>

using namespace std;

extern void mergeSort(int [], int, int);
extern void merge(int [], int, int, int);
extern void debugPrintMerge(int [], int, int, int);
extern void debugPrintMergeSort(int [], int, int);
extern void printArray(int [], int, int);

void mergeSort(int a[], int start, int end)
{
    debugPrintMergeSort(a, start, end);

    if(end <= start) return;
    unsigned mid = (start+end)/2;
    mergeSort(a, start, mid);
    mergeSort(a, mid+1, end);
    merge(a, start, mid, end);
}

void merge(int a[], int s, int m, int e) {
    debugPrintMerge(a, s, m, e);

    if(m < s || e < m) return;
    int b[e-s+1]; // Will contain result
    int leftidx = s, rightidx = m+1, bidx = 0;

    while(leftidx <= m && rightidx <= e) {
	if(a[leftidx] < a[rightidx]) {
	    b[bidx++] = a[leftidx++];
	}
	else {
	    b[bidx++] = a[rightidx++];
	}
    }

    while(leftidx <= m) {
	b[bidx++] = a[leftidx++];
    }

    while(rightidx <= e) {
	b[bidx++] = a[rightidx++];
    }

    for(int i = 0; i < e-s+1; i++) {
	a[i+s] = b[i];
    }

    cout << "After merge: ";
    printArray(a, s, e);
    cout << endl;
}

void debugPrintMergeSort(int a[], int s, int e) {
    cout << "mergeSort(";
    printArray(a, s, e);
    cout <<", " << s << ", " << e;
    cout << ")" << endl;
}

void debugPrintMerge(int a[], int s, int m, int e) {
    cout << "merge(";
    printArray(a, s, e);
    cout <<", " << s << ", " << m << ", " << e;
    cout << ")" << endl;
}

void printArray(int a[], int s, int e) {
    cout << "[";
    for(int i = s; i <= e; i++) {
	cout << a[i];
	if(i < e) cout << ", ";
    }
    cout << "]";
}

int main(int c, char *v[]) {
    if(c < 2) return 0;

    int a[c-1];
    for(int i = 1; i < c; i++) {
	a[i-1] = atoi(v[i]);
    }

    mergeSort(a, 0, c-2);
    return 0;
}
