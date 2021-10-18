//Radix Sort C++ Implementaion
#include <iostream>
using namespace std;
int retrieveLargest(int radixArr[], int n)
{
        int largestNo = radixArr[0];
        for (int i = 1; i < n; i++)
                if (radixArr[i] > largestNo)
                        largestNo = radixArr[i];
        return largestNo;
}
void countingSort(int radixArr[], int size, int place)
{
        int finalResult[size + 1];
        int largestNo = (radixArr[0] / place) % 10;
        for (int i = 1; i < size; i++)
        {
                if (((radixArr[i] / place) % 10) > largestNo)
                        largestNo = radixArr[i];
        }
        int count[largestNo + 1];
        for (int i = 0; i < largestNo; ++i)
                count[i] = 0;
        for (int i = 0; i < size; i++)
                count[(radixArr[i] / place) % 10]++;
        for (int i = 1; i < 10; i++)
                count[i] += count[i - 1];
        for (int i = size - 1; i >= 0; i--)
        {
                finalResult[count[(radixArr[i] / place) % 10] - 1] = radixArr[i];
                count[(radixArr[i] / place) % 10]--;
        }
        for (int i = 0; i < size; i++)
                radixArr[i] = finalResult[i];
}
void radixsort(int radixArr[], int size)
{
        int largestNo = retrieveLargest(radixArr, size);
        for (int place = 1; largestNo / place > 0; place *= 10)
                countingSort(radixArr, size, place);
}
void displayradixArr(int radixArr[], int size)
{
        for (int i = 0; i < size; ++i)
        {
                cout<<radixArr[i]<<" ";
        }
        cout<<"\n";
}
int main()
{
        int radixArr[] = {121, 432, 564, 23, 1, 45, 788};
        int n = sizeof(radixArr) / sizeof(radixArr[0]);
        radixsort(radixArr, n);
        displayradixArr(radixArr, n);
        return 0;
}
