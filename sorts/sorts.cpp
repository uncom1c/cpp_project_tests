#include <iostream>
#include <list>
#include <vector>


/// \brief Сортировка выбором
/// \brief Выбираем минимальный элемент -> переносим его в начало
/// \param num - рандомное распределение
/// \param size - размер num
/// \param vec - вектор, хранящий все итерации, чтобы впоследствии их визуализировать
void selectionSort(double* num, int size, std::vector <std::pair <int, int > >& vec)
{   
    int min;
    for (int i = 0; i < size - 1; i++)
    {
        min = i; 
        for (int j = i + 1; j < size; j++) 
        {   
            vec.emplace_back(-1, -1);
            if (num[j] < num[min]) {
                min = j;
            }
        }
        if (min == i) continue;  
        std::swap(num[i], num[min]);
        vec.emplace_back(i, min);

    }
}
/// \brief Сортировка вставкой
/// \brief Прохождение по каждому элементу и перемещение элеменета туда, где он будет отсортирован
/// \param arr - рандомное распределение
/// \param n - размер arr
/// \param vec - вектор, хранящий все итерации, чтобы впоследствии их визуализировать
void insertSort(double* arr, int n, std::vector <std::pair <int, int > >& vec) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
            vec.emplace_back(j, j-1);
            std::swap(arr[j-1], arr[j]);
        }
    }
}
/// \brief Сортировка пузырьком
/// \brief Прохождение по каждому элементу и сравнение каждой последующей пары. Если они не удовлетворяют сортировке то менять местами
/// \param arr - рандомное распределение
/// \param size - размер arr
/// \param vec - вектор, хранящий все итерации, чтобы впоследствии их визуализировать
void bubbleSort(double* arr, int size, std::vector <std::pair <int, int > >& vec)
{

    for (int i = 0; i < size - 1; ++i) // i - номер прохода
    {
        for (int j = 0; j < size - 1; ++j) // внутренний цикл прохода
        {
            if (arr[j + 1] < arr[j])
            {
                vec.emplace_back(j, j + 1);
                std::swap(arr[j], arr[j + 1]);
            }
            else
                vec.emplace_back(1, -1);
        }
    }
}
/// \brief Сортировка шейкером
/// \brief Алгоритм очень похож на пузырек, но при завершении обхода списка этот алгоритм не начинает все время с одного и того же конца, как пузырёк, а ходит туда-сюда
/// \param arr - рандомное распределение
/// \param n - размер arr
/// \param vec - вектор, хранящий все итерации, чтобы впоследствии их визуализировать
void cocktailSort(double* arr, int n, std::vector <std::pair <int, int > >& vec) {
    bool flag = true;
    int start = 0, end = n - 1;
    while (flag) {
        flag = false;
        for (int i = start; i < end; i++) { //scan from left to right as bubble sort
            if (arr[i] > arr[i + 1]) {
                vec.emplace_back(i, i + 1);
                std::swap(arr[i], arr[i + 1]);
                flag = true;
            }
            else
                vec.emplace_back(1, -1);
        }
        if (!flag) { //if nothing has changed simply break the loop
            break;
        }
        flag = false;
        end--; //decrease the end pointer
        for (int i = end - 1; i >= start; i--) { //scan from right to left
            if (arr[i] > arr[i + 1]) {
                vec.emplace_back(i, i + 1);
                std::swap(arr[i],arr[i + 1]);
                flag = true;
            }
            else
                vec.emplace_back(1, -1);
        }
        start++;
    }
}
int partition(double* a, int p, int r, std::vector <std::pair <int, int > >& vec)
{
    double x = *(a + r);
    int i = p - 1;
    int j;
    double tmp;
    for (j = p; j < r; j++)
    {
        if (*(a + j) <= x)
        {
            i++;
            tmp = *(a + i);
            *(a + i) = *(a + j);
            *(a + j) = tmp;
            vec.emplace_back(i, j);
        }
        else
            vec.emplace_back(1, -1);
    }
    tmp = *(a + r);
    *(a + r) = *(a + i + 1);
    *(a + i + 1) = tmp;
    vec.emplace_back(r, i+1);
    return i + 1;
}
/// \brief Быстрая сортировка
/// \param a - рандомное распределение
/// \param p - размер a
/// \param vec - вектор, хранящий все итерации, чтобы впоследствии их визуализировать
void quickSort(double* a, int p, int r, std::vector <std::pair <int, int > >& vec)
{
    int q;
    if (p < r) {
        q = partition(a, p, r, vec);
        quickSort(a, p, q - 1, vec);
        quickSort(a, q + 1, r, vec);
    }
}

//СОРТИРОВКА ШЕЛЛА
void ShellSort(int length, double* arr, std::vector <std::pair <int, int > >& vec)
{
    for (int step = length / 2; step > 0; step = step / 2)  // Расстояние между элементами
    {
        for (int i = step; i < length; i++)                 // Проходим по массиву
        {
            for (int j = i - step; j >= 0; j = j - step)    // Проходим по элементам массива
            {
                if (arr[j] > arr[j + step])                 // Сравниваем элементы
                {
                    std::swap(arr[j], arr[j + step]);
                    vec.emplace_back(j, j + step);
                }
                else {
                    vec.emplace_back(1, -1);
                }
            }
        }
    }
}


void gnome_sort(double *arr, int size , std::vector<std::pair<int, int>> &vec)
{
    int i = 1;
    int j=2;   
	while(i< size)  
    {
        if (arr[i-1] < arr[i]){
            i=j;
            j++;

            vec.emplace_back(-1, -1);
        }
        else{
            std::swap(arr[i-1], arr[i]);
            vec.emplace_back(i, i-1);
            i=i-1;
            if (i==0){
                i=j; 
                j++;
            }
        }
    }
}
void stooge_sort(double *arr, int left, int right, std::vector<std::pair<int, int>> &vec){
    if(arr[left]> arr[right]){
        std::swap(arr[left], arr[right]);
        vec.emplace_back(left, right);
    }
    else{
        vec.emplace_back(-1, -1);
    }
    if(left+1 >= right){
        return ;
    }
    int temp;
    temp = (right-left+1)/3;
    stooge_sort(arr, left, right - temp, vec);
    stooge_sort(arr, left + temp, right, vec);
    stooge_sort(arr, left, right - temp, vec);

}


void slow_sort(double *arr, int left, int right, std::vector<std::pair<int, int>> &vec){
    if (left>=right){
        return;
    }
    int middle = (left+right)/2;
    slow_sort(arr, left, middle, vec);
    slow_sort(arr, middle+1, right, vec);
    if (arr[right]< arr[middle]){
        std::swap(arr[right], arr[middle]);
        vec.emplace_back(right, middle);
    }
    else{
        vec.emplace_back(-1, -1);
    }
    slow_sort(arr, left, right-1, vec);
}


void odd_even_sort(double *arr, int size, std::vector<std::pair<int, int>> &vec){
    bool is_sorted =false;
    while (!is_sorted){
        is_sorted=true;
        for (int i =1; i<=size-2; i=i+2){
            if (arr[i]> arr[i+1]){
                std::swap(arr[i], arr[i+1]);
                vec.emplace_back(i, i+1);
                is_sorted=false;
            }
            else {
                vec.emplace_back(-1, -1);
            }
        }
        for (int i =0; i<=size-2; i=i+2){
            if (arr[i]> arr[i+1]){
                std::swap(arr[i], arr[i+1]);
                vec.emplace_back(i, i+1);
                is_sorted=false;
            }
            else {
                vec.emplace_back(-1, -1);
            }
        }
    }
    return;
}
