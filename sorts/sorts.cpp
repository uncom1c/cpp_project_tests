#include <iostream>
#include <list>
#include <vector>


//Свапы
/// \brief Функция перемены местами
void swap(double* a, double* b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}
/// \brief Функция перемены значениями
void swapint(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
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
            vec.emplace_back(std::pair<int, int>(-1, -1));
            if (num[j] < num[min]) {
                min = j;
            }
        }
        if (min == i) continue;  
        swap(&num[i], &num[min]);
        vec.emplace_back(std::pair<int, int>(i, min));

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
            vec.emplace_back(std::pair<int, int>(j, j-1));
            swap(&arr[j-1], &arr[j]);
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
                vec.emplace_back(std::pair<int, int>(j, j + 1));
                swap(&arr[j], &arr[j + 1]);
            }
            else
                vec.emplace_back(std::pair<int, int>(-1, -1));
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
                vec.emplace_back(std::pair<int, int>(i, i + 1));
                swap(&arr[i], &arr[i + 1]);
                flag = true;
            }
            else
                vec.emplace_back(std::pair<int, int>(-1, -1));
        }
        if (!flag) { //if nothing has changed simply break the loop
            break;
        }
        flag = false;
        end--; //decrease the end pointer
        for (int i = end - 1; i >= start; i--) { //scan from right to left
            if (arr[i] > arr[i + 1]) {
                vec.emplace_back(std::pair<int, int>(i, i + 1));
                swap(&arr[i],&arr[i + 1]);
                flag = true;
            }
            else
                vec.emplace_back(std::pair<int, int>(-1, -1));
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
            vec.emplace_back(std::pair<int, int>(i, j));
        }
        else
            vec.emplace_back(std::pair<int, int>(-1, -1));
    }
    tmp = *(a + r);
    *(a + r) = *(a + i + 1);
    *(a + i + 1) = tmp;
    vec.emplace_back(std::pair<int, int>(r, i+1));
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
//КРУГОВАЯ СОРТИРОВКА
/// \brief Круговая сортировка
/// \param arr - рандомное распределение
/// \param n - размер arr
/// \param vec - вектор, хранящий все итерации, чтобы впоследствии их визуализировать
int circlesort(double* arr, int lo, int hi, int swaps, std::vector <std::pair <int, int > >& vec) {
    if (lo == hi) {
        return swaps;
    }
    int high = hi;
    int low = lo;
    int mid = (high - low) / 2;
    while (lo < hi) {
        if (arr[lo] > arr[hi]) {
            vec.emplace_back(std::pair<int, int>(lo, hi));
            swap(&arr[lo], &arr[hi]);
            swaps++;
        }
        vec.emplace_back(std::pair<int, int>(-1, -1));
        lo++;
        hi--;
    }

    if (lo == hi) {
        if (arr[lo] > arr[hi + 1]) {
            vec.emplace_back(std::pair<int, int>(lo, hi+1));
            swap(&arr[lo], &arr[hi+1]);
            swaps++;
        }
    }
    vec.emplace_back(std::pair<int, int>(-1, -1));
    swaps = circlesort(arr, low, low + mid, swaps, vec);
    swaps = circlesort(arr, low + mid + 1, high, swaps, vec);
    return swaps;
}

void circlesortDriver(double* arr, int n, std::vector <std::pair <int, int > >& vec) {
    do {
    } while (circlesort(arr, 0, n - 1, 0, vec));
}
//СОРТИРОВКА СЛИЯННИЕМ
void mergeSort(double* a, int l, int r, std::vector <std::pair <int, int > >& vec, std::vector <std::pair <double, double > >& vec1, double*X, double*Y)
{
    if (l == r) return; // границы сомкнулись
    int mid = (l + r) / 2; // определяем середину последовательности
    // и рекурсивно вызываем функцию сортировки для каждой половины
    mergeSort(a, l, mid, vec, vec1, X, Y);
    mergeSort(a, mid + 1, r, vec, vec1, X, Y);
    int i = l;  // начало первого пути
    int j = mid + 1; // начало второго пути
    double* tmpX = (double*)std::malloc(r * sizeof(double));
    double* tmpY = (double*)std::malloc(r * sizeof(double));
    double* tmp = (double*)std::malloc(r * sizeof(double)); // дополнительный массив
    int s = vec1.size();
    for (int step = 0; step < r - l + 1; step++) // для всех элементов дополнительного массива
    {
        // записываем в формируемую последовательность меньший из элементов двух путей
        // или остаток первого пути если j > r
        if ((j > r) || ((i <= mid) && (a[i] < a[j])))
        {
            tmp[step] = a[i];
            tmpX[step] = X[i];
            tmpY[step] = Y[i];
            vec1.emplace_back(std::pair<int, int>(X[i], Y[i]));
            i++;
        }
        else
        {
            tmpX[step] = X[j];
            tmpY[step] = Y[j];
            vec1.emplace_back(std::pair<int, int>(X[j], Y[j]));
            tmp[step] = a[j];
            j++;
        }
    }
    // переписываем сформированную последовательность в исходный массив
    for (int step = 0; step < r - l + 1; step++) {
        X[l + step] = tmpX[step];
        Y[l + step] = tmpY[step];
        vec.emplace_back(std::pair<int, int>(s + step, l + step));
        a[l + step] = tmp[step];

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
                    swap(&arr[j], &arr[j + step]);
                    vec.emplace_back(std::pair<int, int>(j, j + step));
                }
                else {
                    vec.emplace_back(std::pair<int, int>(-1, -1));
                }
            }
        }
    }
}