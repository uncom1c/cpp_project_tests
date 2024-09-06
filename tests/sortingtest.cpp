#include <iostream>
#include <list>
#include <vector>

// #include "C:\Users\USER\Documents\cloudfact\cpp_project_tests\sorts\sorts.h"
#include "../sorts/sorts.h"
#include <gtest/gtest.h>

TEST(SortingTests, TestselectionSort)
{
    std::vector<std::pair<int, int>> iterS1;
    double listUnSorted[100];
    double listSorted[100];
    for (int i = 0; i < 100; i++){
        listUnSorted[i] = 99 - i;
        listSorted[i] = i;
    }
    selectionSort(listUnSorted, 100, iterS1);
    for (int i = 0; i < 100; i++){
        ASSERT_EQ(listUnSorted[i], listSorted[i]);
    }
}

TEST(SortingTests, TestinsertSort)
{
    std::vector<std::pair<int, int>> iterS2;
    double listUnSorted[100];
    double listSorted[100];
    for (int i = 0; i < 100; i++){
        listUnSorted[i] = 99 - i;
        listSorted[i] = i;
    }
    insertSort(listUnSorted, 100, iterS2);
    for (int i = 0; i < 100; i++){
        ASSERT_EQ(listUnSorted[i], listSorted[i]);
    }
}
TEST(SortingTests, TestbubbleSort)
{
    std::vector<std::pair<int, int>> iterS3;
    double listUnSorted[100];
    double listSorted[100];
    for (int i = 0; i < 100; i++){
        listUnSorted[i] = 99 - i;
        listSorted[i] = i;
    }
    bubbleSort(listUnSorted, 100, iterS3);
    for (int i = 0; i < 100; i++){
        ASSERT_EQ(listUnSorted[i], listSorted[i]);
    }
}

TEST(SortingTests, TestcocktailSort)
{
    std::vector<std::pair<int, int>> iterS3;
    double listUnSorted[100];
    double listSorted[100];
    for (int i = 0; i < 100; i++){
        listUnSorted[i] = 99 - i;
        listSorted[i] = i;
    }
    cocktailSort(listUnSorted, 100, iterS3);
    for (int i = 0; i < 100; i++){
        ASSERT_EQ(listUnSorted[i], listSorted[i]);
    }
}
int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
