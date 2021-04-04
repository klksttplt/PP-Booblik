#include <assert.h>
#include <time.h>
#include <random>

double dRand(double min, double max) {
    
    double a = double(rand()) / (double(RAND_MAX) + 1.0);
    double res = min + a * (max - min);
    return res;
}
void quickSort(int* array, int l, int h)
{
    int i = l;
    int j = h;
    int curr = array[(i + j) / 2];
    int temp;
    int* arrayCheck = array;
    while (i <= j)
    {
        while (array[i] < curr)
            i++;
        while (array[j] > curr)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > l)
        quickSort(array, l, j);
    if (i < h)
        quickSort(array, i, h);
    int a = 0;
    
    for (int k = 0; k < h;k++) {
        //checking if array is really sorted
        assert(array[k]<=array[k+1] && "Array is not sorted (previous>next)");
       
        for (int m = 0; m < h;m++) {
            
            if (array[k] == arrayCheck[m]) a = 1;
        }
        //checking if there are no missing elements in sorted array
        assert(a==1 && "Arrays aren't equal");
    }
    
}


