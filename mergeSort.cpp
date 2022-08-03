#include<iostream>
#include <conio.h>
 
void ImplMerge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 =  right - mid;
 
    int* L = new int[n1];
    int* R = new int [n2];
 
    for (int ii = 0; ii < n1; ii++)
        L[ii] = arr[left + ii];
    for (int jj = 0; jj < n2; jj++)
        R[jj] = arr[mid + 1+ jj];
 
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left +(right -left)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        ImplMerge(arr, left, mid, right);
    }
}
 
 
void Show(int A[], int size)
{
   for (int i=0; i < size; ++i)
      std::cout << A[i] << " ";
}
 
int main()
{
    int arr[] = {312, 311, 313, 35, 36, 37};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
 
    mergeSort(arr, 0, arr_size - 1);
 
    std::cout < "\nSorted array is \n";
    Show(arr, arr_size);
 
    _getch();
    return 0;
}
