#include <iostream>
#include <list>
#include <vector>

// \brief Сортировка выбором
/// \brief Выбираем минимальный элемент -> переносим его в начало
/// \param arr - массив из int, случайно распределенный
/// \param size - размер arr
/// \param vec - вектор, хранящий все ходы сортировки, чтобы впоследствии их
/// визуализировать
void selectionSort(int *arr, int size, std::vector<std::pair<int, int>> &vec) {

  int min;
  for (int i = 0; i < size - 1; i++) {
    min = i;
    for (int j = i + 1; j < size; j++) {
      vec.emplace_back(-1, -1);
      if (arr[j] < arr[min]) {
        min = j;
      }
   }
    if (min == i)
      continue;
    std::swap(arr[i], arr[min]);
    vec.emplace_back(i, min);
  }
}
/// \brief Сортировка вставкой
/// \brief Прохождение по каждому элементу и перемещение элемента на свое место
/// в отсортированном массиве \param arr - массив из int, случайно
/// распределенный \param size - размер arr \param vec - вектор, хранящий все
/// ходы сортировки, чтобы впоследствии их визуализировать
void insertSort(int *arr, int size, std::vector<std::pair<int, int>> &vec) {
  for (int i = 1; i < size; i++) {
    for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
      vec.emplace_back(j, j - 1);
      std::swap(arr[j - 1], arr[j]);
   }
  }
}
/// \brief Сортировка пузырьком
/// \brief Прохождение по каждому элементу и сравнение каждой последующей пары.
/// Если они не удовлетворяют сортировке то менять местами \param arr - массив
/// из int, случайно распределенный \param size - размер arr \param vec -
/// вектор, хранящий все ходы сортировки, чтобы впоследствии их визуализировать
void bubbleSort(int *arr, int size, std::vector<std::pair<int, int>> &vec) {
  for (int i = 0; i < size - 1; ++i) // i - номер прохода
  {
    for (int j = 0; j < size - 1; ++j) // внутренний цикл прохода
    {
      if (arr[j + 1] < arr[j]) {
        vec.emplace_back(j, j + 1);
        std::swap(arr[j], arr[j + 1]);
      } else
        vec.emplace_back(1, -1);
   }
  }
}
/// \brief Сортировка шейкером
// \brief Алгоритм очень похож на пузырек, но при завершении обхода списка этот
/// алгоритм не начинает все время с одного и того же конца, как пузырёк, а
/// ходит туда-сюда \param arr - массив из int, случайно распределенный \param
/// size
/// - размер arr \param vec - вектор, хранящий все ходы сортировки, чтобы
/// впоследствии их визуализировать
void cocktailSort(int *arr, int size, std::vector<std::pair<int, int>> &vec) {
  bool flag = true;
  int start = 0, end = size - 1;
  while (flag) {
    flag = false;
    for (int i = start; i < end; i++) { // scan from left to right as bubble
                                        // sort
      if (arr[i] > arr[i + 1]) {
        vec.emplace_back(i, i + 1);
        std::swap(arr[i], arr[i + 1]);
        flag = true;
      } else
        vec.emplace_back(1, -1);
   }
    if (!flag) { // if nothing has changed simply break the loop
      break;
    }
    flag = false;
    end--;                                   // decrease the end pointer
    for (int i = end - 1; i >= start; i--) { // scan from right to left
      if (arr[i] > arr[i + 1]) {
        vec.emplace_back(i, i + 1);
        std::swap(arr[i], arr[i + 1]);
        flag = true;
      } else
        vec.emplace_back(1, -1);
    }
    start++;
  }
}
/// \brief вспомогательная фунция для быстрой сортировки
/// \brief возвращает случайный элемент p и меняет массив так, что все, меньшее
/// p - слева от него, а большее - справа \param arr - массив из int, случайно
/// распределенный \param left - левая граница \param right - правая граница
/// \param vec - вектор, хранящий все ходы сортировки, чтобы впоследствии их
/// визуализировать
int partition(int *arr, int left, int right,
              std::vector<std::pair<int, int>> &vec) {
  double x = arr[right];
  int i = left - 1;
  int j;
  for (j = left; j < right; j++) {
    if (arr[j] <= x) {
      i++;
      std::swap(arr[i], arr[j]);
      vec.emplace_back(i, j);
    } else
      vec.emplace_back(1, -1);
  }
  std::swap(arr[right], arr[i + 1]);
  vec.emplace_back(right, i + 1);
  return i + 1;
}
/// \brief Быстрая сортировка
/// \brief Сначала запускает вспомогательную функцию partition, затем
/// относительно двух возвращенных половин вызывает сама себя, пока не
/// отсортируется \param arr - массив из int, случайно распределенный \param
/// left - левая граница \param right - правая граница \param vec - вектор,
/// хранящий все ходы сортировки, чтобы впоследствии их визуализировать
void quickSort(int *arr, int left, int right,
               std::vector<std::pair<int, int>> &vec) {
  int p;
  if (left < right) {
    p = partition(arr, left, right, vec);
    quickSort(arr, left, p - 1, vec);
    quickSort(arr, p + 1, right, vec);
  }
}

// СОРТИРОВКА ШЕЛЛА
/// \brief Сортировка шелла
/// \brief Алгоритм является улучшенной версией алгоритма вставок
/// Сначала сортируются значения, стоящие на расстоянии step друг от друга,
/// затем step уменьшается, пока не станет равен 1
/// \param arr - массив из int, случайно распределенный
/// \param size - размер arr
/// \param vec - вектор, хранящий все ходы сортировки, чтобы впоследствии их
/// визуализировать
void ShellSort(int *arr, int size, std::vector<std::pair<int, int>> &vec) {
  for (int step = size / 2; step > 0;
       step = step / 2) // Расстояние между элементами
  {
    for (int i = step; i < size; i++) // Проходим по массиву
    {
      for (int j = i - step; j >= 0;
           j = j - step) // Проходим по элементам массива
      {
        if (arr[j] > arr[j + step]) // Сравниваем элементы
        {
          std::swap(arr[j], arr[j + step]);
          vec.emplace_back(j, j + step);
        } else {
          vec.emplace_back(1, -1);
        }
      }
    }
  }
}

// ГНОМЬЯ СОРТИРОВКА
/// \brief Гномья сортировка
/// \brief Алгоритм является соединенной версией алгоритма сортировки пузырьком
/// и вставок \brief Алгоритм находит позицию, где элементы в неправильном
/// порядке и меняет их местами, после чего шагает назад, пока не вставит все на
/// свое место, потом идет вперед \param arr - массив из int, случайно
/// распределенный \param size - размер arr \param vec - вектор, хранящий все
/// ходы сортировки, чтобы впоследствии их визуализировать
void gnome_sort(int *arr, int size, std::vector<std::pair<int, int>> &vec) {
  int i = 1;
  int j = 2;
  while (i < size) {
    if (arr[i - 1] < arr[i]) {
      i = j;
      j++;
      vec.emplace_back(-1, -1);
    } else {
      std::swap(arr[i - 1], arr[i]);
      vec.emplace_back(i, i - 1);
      i = i - 1;
      if (i == 0) {
        i = j;
        j++;
      }
    }
  }
}
// ПРИДУРКОВАТАЯ СОРТИРОВКА
/// \brief Придурковатая сортировка
/// \brief Если элемент в начале списка больше, чем элемент в конце - меняем их
/// местами \brief Если в текущем подмножестве списка более трех элементов, то
/// рекурсивно вызывать сортировку относительно первых 2/3 списка затем
/// относительно последних 2/3 списка, а потом опять относительно первых 2/3
/// списка \param arr - массив из int, случайно распределенный \param left -
/// левая граница \param right - правая граница \param vec - вектор, хранящий
/// все ходы сортировки, чтобы впоследствии их визуализировать
void stooge_sort(int *arr, int left, int right,
                 std::vector<std::pair<int, int>> &vec) {
  if (arr[left] > arr[right]) {
    std::swap(arr[left], arr[right]);
    vec.emplace_back(left, right);
  } else {
    vec.emplace_back(-1, -1);
  }
  if (left + 1 >= right) {
    return;
  }
  int temp;
  temp = (right - left + 1) / 3;
  stooge_sort(arr, left, right - temp, vec);
  stooge_sort(arr, left + temp, right, vec);
  stooge_sort(arr, left, right - temp, vec);
}

/// \brief Медленная сортировка
/// \brief 
/// \param arr - массив из int, случайно распределенный
/// \param left - левая граница
/// \param right - правая граница
/// \param vec - вектор, хранящий все ходы сортировки, чтобы впоследствии их
/// визуализировать
void slow_sort(int *arr, int left, int right,
               std::vector<std::pair<int, int>> &vec) {
  if (left >= right) {
    return;
  }
  int middle = (left + right) / 2;
  slow_sort(arr, left, middle, vec);
  slow_sort(arr, middle + 1, right, vec);
  if (arr[right] < arr[middle]) {
    std::swap(arr[right], arr[middle]);
    vec.emplace_back(right, middle);
  } else {
    vec.emplace_back(-1, -1);
  }
  slow_sort(arr, left, right - 1, vec);
}

/// \brief Четная-нечетная сортировка
/// \brief 
/// \param arr - массив из int, случайно распределенный
/// \param size - размер arr
/// \param vec - вектор, хранящий все ходы сортировки, чтобы впоследствии их
/// визуализировать
void odd_even_sort(int *arr, int size, std::vector<std::pair<int, int>> &vec) {
  bool is_sorted = false;
  while (!is_sorted) {
    is_sorted = true;
    for (int i = 1; i <= size - 2; i = i + 2) {
      if (arr[i] > arr[i + 1]) {
        std::swap(arr[i], arr[i + 1]);
        vec.emplace_back(i, i + 1);
        is_sorted = false;
      } else {
        vec.emplace_back(-1, -1);
      }
    }
    for (int i = 0; i <= size - 2; i = i + 2) {
      if (arr[i] > arr[i + 1]) {
        std::swap(arr[i], arr[i + 1]);
        vec.emplace_back(i, i + 1);
        is_sorted = false;
      } else {
        vec.emplace_back(-1, -1);
      }
    }
  }
  return;
}
