#include <vector>

#include "sorts.cpp"

void selectionSort(double* num, int size, std::vector <std::pair <int, int > >& vec);
void insertSort(double* arr, int n, std::vector <std::pair <int, int > >& vec);
void bubbleSort(double* arr, int size, std::vector <std::pair <int, int > >& vec);
void cocktailSort(double* arr, int n, std::vector <std::pair <int, int > >& vec);
int partition(double* a, int p, int r, std::vector <std::pair <int, int > >& vec);
void quickSort(double* a, int p, int r, std::vector <std::pair <int, int > >& vec);
void ShellSort(int length, double* arr, std::vector <std::pair <int, int > >& vec);
void gnome_sort(double *arr, int size , std::vector<std::pair<int, int>> &vec);
void stooge_sort(double *arr, int left, int right, std::vector<std::pair<int, int>> &vec);   
void slow_sort(double *arr, int left, int right, std::vector<std::pair<int, int>> &vec);
void odd_even_sort(double *arr, int size, std::vector<std::pair<int, int>> &vec);
