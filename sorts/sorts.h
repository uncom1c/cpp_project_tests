#include <vector>

#include "sorts.cpp"

void selectionSort(int* num, int size, std::vector <std::pair <int, int > >& vec);
void insertSort(int* arr, int n, std::vector <std::pair <int, int > >& vec);
void bubbleSort(int* arr, int size, std::vector <std::pair <int, int > >& vec);
void cocktailSort(int* arr, int n, std::vector <std::pair <int, int > >& vec);
int partition(int* arr, int left, int right, std::vector <std::pair <int, int > >& vec);
void quickSort(int* arr, int left, int right, std::vector <std::pair <int, int > >& vec);
void ShellSort(int* arr, int size, std::vector <std::pair <int, int > >& vec);
void gnome_sort(int *arr, int size , std::vector<std::pair<int, int>> &vec);
void stooge_sort(int *arr, int left, int right, std::vector<std::pair<int, int>> &vec);   
void slow_sort(int *arr, int left, int right, std::vector<std::pair<int, int>> &vec);
void odd_even_sort(int *arr, int size, std::vector<std::pair<int, int>> &vec);
