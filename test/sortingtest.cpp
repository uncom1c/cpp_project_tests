#include <vector>
#include "../sorts/sorts.h"
#include <gtest/gtest.h>



TEST(SortingTests, TestselectionSort)
{
    std::vector<std::pair<int, int>> iter;
    int listUnSorted[100];
    int listSorted[100];
    for (int i = 0; i < 100; i++){
        listUnSorted[i] = 99 - i;
        listSorted[i] = i;
    }
    selectionSort(listUnSorted, 100, iter);
    for (int i = 0; i < 100; i++){
        ASSERT_EQ(listUnSorted[i], listSorted[i]);
    }
}

TEST(SortingTests, TestinsertSort)
{
    std::vector<std::pair<int, int>> iter;
    int listUnSorted[100];
    int listSorted[100];
    for (int i = 0; i < 100; i++){
        listUnSorted[i] = 99 - i;
        listSorted[i] = i;
    }
    insertSort(listUnSorted, 100, iter);
    for (int i = 0; i < 100; i++){
        ASSERT_EQ(listUnSorted[i], listSorted[i]);
    }
}
TEST(SortingTests, TestbubbleSort)
{
    std::vector<std::pair<int, int>> iter;
    int listUnSorted[100];
    int listSorted[100];
    for (int i = 0; i < 100; i++){
        listUnSorted[i] = 99 - i;
        listSorted[i] = i;
    }
    bubbleSort(listUnSorted, 100, iter);
    for (int i = 0; i < 100; i++){
        ASSERT_EQ(listUnSorted[i], listSorted[i]);
    }
}

TEST(SortingTests, TestcocktailSort)
{
    std::vector<std::pair<int, int>> iter;
    int listUnSorted[100];
    int listSorted[100];
    for (int i = 0; i < 100; i++){
        listUnSorted[i] = 99 - i;
        listSorted[i] = i;
    }
    cocktailSort(listUnSorted, 100, iter);
    for (int i = 0; i < 100; i++){
        ASSERT_EQ(listUnSorted[i], listSorted[i]);
    }
}
TEST(SortingTests, TestquickSort)
{
    std::vector<std::pair<int, int>> iter;
    int listUnSorted[100];
    int listSorted[100];
    for (int i = 0; i < 100; i++){
        listUnSorted[i] = 99 - i;
        listSorted[i] = i;
    }
    int left =0;
    int right = 99;
    quickSort(listUnSorted, left, right, iter);
    for (int i = 0; i < 100; i++){
        ASSERT_EQ(listUnSorted[i], listSorted[i]);
    }
}
TEST(SortingTests, TestshellSort)
{
    std::vector<std::pair<int, int>> iter;
    int listUnSorted[100];
    int listSorted[100];
    for (int i = 0; i < 100; i++){
        listUnSorted[i] = 99 - i;
        listSorted[i] = i;
    }
    ShellSort(listUnSorted, 100, iter);
    for (int i = 0; i < 100; i++){
        ASSERT_EQ(listUnSorted[i], listSorted[i]);
    }
}
TEST(SortingTests, TestgnomeSort)
{
    std::vector<std::pair<int, int>> iter;
    int listUnSorted[100];
    int listSorted[100];
    for (int i = 0; i < 100; i++){
        listUnSorted[i] = 99 - i;
        listSorted[i] = i;
    }
    gnome_sort(listUnSorted, 100, iter);
    for (int i = 0; i < 100; i++){
        ASSERT_EQ(listUnSorted[i], listSorted[i]);
    }
}
TEST(SortingTests, TeststoogeSort)
{
    std::vector<std::pair<int, int>> iter;
    int listUnSorted[100];
    int listSorted[100];
    for (int i = 0; i < 100; i++){
        listUnSorted[i] = 99 - i;
        listSorted[i] = i;
    }
    int left =0;
    int right = 99;
    stooge_sort(listUnSorted, left, right, iter);
    for (int i = 0; i < 100; i++){
        ASSERT_EQ(listUnSorted[i], listSorted[i]);
    }
}
TEST(SortingTests, TestslowSort)
{
    std::vector<std::pair<int, int>> iter;
    int listUnSorted[100];
    int listSorted[100];
    for (int i = 0; i < 100; i++){
        listUnSorted[i] = 99 - i;
        listSorted[i] = i;
    }
    int left =0;
    int right = 99;
    slow_sort(listUnSorted, left, right, iter);
    for (int i = 0; i < 100; i++){
        ASSERT_EQ(listUnSorted[i], listSorted[i]);
    }
}
TEST(SortingTests, Test_odd_even_Sort)
{
    std::vector<std::pair<int, int>> iter;
    int listUnSorted[100];
    int listSorted[100];
    for (int i = 0; i < 100; i++){
        listUnSorted[i] = 99 - i;
        listSorted[i] = i;
    }
    odd_even_sort(listUnSorted, 100, iter);
    for (int i = 0; i < 100; i++){
        ASSERT_EQ(listUnSorted[i], listSorted[i]);
    }
}
int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
