#include <vector>

#include "sorts.cpp"

void swap(double* a, double* b);
void swapint(int* a, int* b);
void selectionSort(double* num, int size, std::vector <std::pair <int, int > >& vec);
void insertSort(double* arr, int n, std::vector <std::pair <int, int > >& vec);
void bubbleSort(double* arr, int size, std::vector <std::pair <int, int > >& vec);
void cocktailSort(double* arr, int n, std::vector <std::pair <int, int > >& vec);
int partition(double* a, int p, int r, std::vector <std::pair <int, int > >& vec);
void quickSort(double* a, int p, int r, std::vector <std::pair <int, int > >& vec);
void ShellSort(int length, double* arr, std::vector <std::pair <int, int > >& vec);
int circlesort(double* arr, int lo, int hi, int swaps, std::vector <std::pair <int, int > >& vec);
void circlesortDriver(double* arr, int n, std::vector <std::pair <int, int > >& vec);
void mergeSort(double* a, int l, int r, std::vector <std::pair <int, int > >& vec, std::vector <std::pair <double, double > >& vec1, double*X, double*Y);
