// Подключение библиотек
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <cassert>
#include <ctime>
#include <iostream>
#include <list>
#include <stdio.h>
#include <stdlib.h>
#include <utility>
#include <vector>

#include "sorts/sorts.h"
// Рандомайзер
#pragma region Randomizer
/// \brief класс PRNG с генерацией ключа для алгоритма генерации псевдо
/// случайных чисел \param seed - положительное целое число, по умолчанию: 0
struct PRNG {
  unsigned seed = 0;
};

/// \brief функция initGenerator для того, чтобы задавать начальное значение
/// seed \param generator - элемент seed, хранящий в себе это значение
void initGenerator(PRNG &generator) {
  generator.seed = unsigned(std::time(nullptr));
}

/// \brief - функция, возвращающая случайный элемент
/// \param generator - начальное значение
/// \param minValue - минимально возможный возвращенный элемент
/// \param maxValue - максимально возможный возвращенный элемент
unsigned random(PRNG &generator, unsigned minValue, unsigned maxValue) {
  assert(minValue <= maxValue);
  generator.seed = (generator.seed * 73129 + 95121);
  return (generator.seed % (maxValue + 1 - minValue)) + minValue;
}

/// \brief - функция, возвращающая перемешанный массив random_out
/// \param counter - количество оставшихся элементов для вставки
/// \param generator - элемент seed
/// \param random_out - массив со случайным распределением
/// \param data - отсортированный массив, откуда берутся значения для вставки в
/// массив random_out
void peremeshka(int counter, PRNG &generator, std::vector<int> &random_out,
                std::vector<int> &data) {
  while (counter != 0) {
    int random_index = random(generator, 0, counter - 1);
    random_out.push_back(data[random_index]);

    data.erase(std::next(data.begin(), random_index));
    counter--;
  }
}
#pragma endregion
int main() {
// Запуск функции рандомайзераб запись результата
#pragma region RadomOn
  PRNG generator;
  initGenerator(generator);

  int n = 100;
  std::vector<int> data;
  std::vector<int> randomcheeeck;
  for (int i = 0; i < n; i++) {
    data.push_back(i);
  }

  int counter = n;
  peremeshka(counter, generator, randomcheeeck, data);
  int numbers[100];
  int counter1 = 0;
  for (int elem : randomcheeeck) {
    numbers[counter1] = elem;
    counter1++;
  }
#pragma endregion
// Загрузка изображений и создание текстур
#pragma region LoadImages
  using namespace sf;
  Image im[100];
  im[0].loadFromFile("../images/1.png");
  im[1].loadFromFile("../images/2.png");
  im[2].loadFromFile("../images/3.png");
  im[3].loadFromFile("../images/4.png");
  im[4].loadFromFile("../images/5.png");
  im[5].loadFromFile("../images/6.png");
  im[6].loadFromFile("../images/7.png");
  im[7].loadFromFile("../images/8.png");
  im[8].loadFromFile("../images/9.png");
  im[9].loadFromFile("../images/10.png");
  im[10].loadFromFile("../images/11.png");
  im[11].loadFromFile("../images/12.png");
  im[12].loadFromFile("../images/13.png");
  im[13].loadFromFile("../images/14.png");
  im[14].loadFromFile("../images/15.png");
  im[15].loadFromFile("../images/16.png");
  im[16].loadFromFile("../images/17.png");
  im[17].loadFromFile("../images/18.png");
  im[18].loadFromFile("../images/19.png");
  im[19].loadFromFile("../images/20.png");
  im[20].loadFromFile("../images/21.png");
  im[21].loadFromFile("../images/22.png");
  im[22].loadFromFile("../images/23.png");
  im[23].loadFromFile("../images/24.png");
  im[24].loadFromFile("../images/25.png");
  im[25].loadFromFile("../images/26.png");
  im[26].loadFromFile("../images/27.png");
  im[27].loadFromFile("../images/28.png");
  im[28].loadFromFile("../images/29.png");
  im[29].loadFromFile("../images/30.png");
  im[30].loadFromFile("../images/31.png");
  im[31].loadFromFile("../images/32.png");
  im[32].loadFromFile("../images/33.png");
  im[33].loadFromFile("../images/34.png");
  im[34].loadFromFile("../images/35.png");
  im[35].loadFromFile("../images/36.png");
  im[36].loadFromFile("../images/37.png");
  im[37].loadFromFile("../images/38.png");
  im[38].loadFromFile("../images/39.png");
  im[39].loadFromFile("../images/40.png");
  im[40].loadFromFile("../images/41.png");
  im[41].loadFromFile("../images/42.png");
  im[42].loadFromFile("../images/43.png");
  im[43].loadFromFile("../images/44.png");
  im[44].loadFromFile("../images/45.png");
  im[45].loadFromFile("../images/46.png");
  im[46].loadFromFile("../images/47.png");
  im[47].loadFromFile("../images/48.png");
  im[48].loadFromFile("../images/49.png");
  im[49].loadFromFile("../images/50.png");
  im[50].loadFromFile("../images/51.png");
  im[51].loadFromFile("../images/52.png");
  im[52].loadFromFile("../images/53.png");
  im[53].loadFromFile("../images/54.png");
  im[54].loadFromFile("../images/55.png");
  im[55].loadFromFile("../images/56.png");
  im[56].loadFromFile("../images/57.png");
  im[57].loadFromFile("../images/58.png");
  im[58].loadFromFile("../images/59.png");
  im[59].loadFromFile("../images/60.png");
  im[60].loadFromFile("../images/61.png");
  im[61].loadFromFile("../images/62.png");
  im[62].loadFromFile("../images/63.png");
  im[63].loadFromFile("../images/64.png");
  im[64].loadFromFile("../images/65.png");
  im[65].loadFromFile("../images/66.png");
  im[66].loadFromFile("../images/67.png");
  im[67].loadFromFile("../images/68.png");
  im[68].loadFromFile("../images/69.png");
  im[69].loadFromFile("../images/70.png");
  im[70].loadFromFile("../images/71.png");
  im[71].loadFromFile("../images/72.png");
  im[72].loadFromFile("../images/73.png");
  im[73].loadFromFile("../images/74.png");
  im[74].loadFromFile("../images/75.png");
  im[75].loadFromFile("../images/76.png");
  im[76].loadFromFile("../images/77.png");
  im[77].loadFromFile("../images/78.png");
  im[78].loadFromFile("../images/79.png");
  im[79].loadFromFile("../images/80.png");
  im[80].loadFromFile("../images/81.png");
  im[81].loadFromFile("../images/82.png");
  im[82].loadFromFile("../images/83.png");
  im[83].loadFromFile("../images/84.png");
  im[84].loadFromFile("../images/85.png");
  im[85].loadFromFile("../images/86.png");
  im[86].loadFromFile("../images/87.png");
  im[87].loadFromFile("../images/88.png");
  im[88].loadFromFile("../images/89.png");
  im[89].loadFromFile("../images/90.png");
  im[90].loadFromFile("../images/91.png");
  im[91].loadFromFile("../images/92.png");
  im[92].loadFromFile("../images/93.png");
  im[93].loadFromFile("../images/94.png");
  im[94].loadFromFile("../images/95.png");
  im[95].loadFromFile("../images/96.png");
  im[96].loadFromFile("../images/97.png");
  im[97].loadFromFile("../images/98.png");
  im[98].loadFromFile("../images/99.png");
  im[99].loadFromFile("../images/100.png");
#pragma endregion
// Создание массива спрайтов из текстур
#pragma region CreateStructuresOfSprites

  Texture arrayTextureS1[100];
  Texture arrayTextureS2[100];
  Texture arrayTextureS3[100];
  Texture arrayTextureS4[100];
  Texture arrayTextureS5[100];
  Texture arrayTextureS6[100];
  Texture arrayTextureS7[100];
  Texture arrayTextureS8[100];
  Texture arrayTextureS9[100];
  Texture arrayTextureS10[100];
  for (int i = 0; i < 100; i++)
    arrayTextureS1[i].loadFromImage(im[i]);
  for (int i = 0; i < 100; i++)
    arrayTextureS2[i].loadFromImage(im[i]);
  for (int i = 0; i < 100; i++)
    arrayTextureS3[i].loadFromImage(im[i]);
  for (int i = 0; i < 100; i++)
    arrayTextureS4[i].loadFromImage(im[i]);
  for (int i = 0; i < 100; i++)
    arrayTextureS5[i].loadFromImage(im[i]);
  for (int i = 0; i < 100; i++)
    arrayTextureS6[i].loadFromImage(im[i]);
  for (int i = 0; i < 100; i++)
    arrayTextureS7[i].loadFromImage(im[i]);
  for (int i = 0; i < 100; i++)
    arrayTextureS8[i].loadFromImage(im[i]);
  for (int i = 0; i < 100; i++)
    arrayTextureS9[i].loadFromImage(im[i]);
  for (int i = 0; i < 100; i++)
    arrayTextureS10[i].loadFromImage(im[i]);

  Sprite arraySprite[10][100];
  for (int i = 0; i < 100; i++) {
    arraySprite[0][i].setTexture(arrayTextureS1[i]);
  }
  for (int i = 0; i < 100; i++) {
    arraySprite[1][i].setTexture(arrayTextureS2[i]);
  }
  for (int i = 0; i < 100; i++) {
    arraySprite[2][i].setTexture(arrayTextureS3[i]);
  }
  for (int i = 0; i < 100; i++) {
    arraySprite[3][i].setTexture(arrayTextureS4[i]);
  }
  for (int i = 0; i < 100; i++) {
    arraySprite[4][i].setTexture(arrayTextureS5[i]);
  }
  for (int i = 0; i < 100; i++) {
    arraySprite[5][i].setTexture(arrayTextureS6[i]);
  }
  for (int i = 0; i < 100; i++) {
    arraySprite[6][i].setTexture(arrayTextureS7[i]);
  }
  for (int i = 0; i < 100; i++) {
    arraySprite[7][i].setTexture(arrayTextureS8[i]);
  }
  for (int i = 0; i < 100; i++) {
    arraySprite[8][i].setTexture(arrayTextureS9[i]);
  }
  for (int i = 0; i < 100; i++) {
    arraySprite[9][i].setTexture(arrayTextureS10[i]);
  }
#pragma endregion
// Инициализация и определение координат для спрайтов
#pragma region SetCoordinatesForSprites
  Vector2u size = arrayTextureS1[0].getSize();
  double xx = size.x;
  double yy = size.y;
  xx /= 5;
  yy /= 5;
  double xMove = 50 + 10 * xx;
  ;
  double yMove = 50;
  double listX[10][100];
  double listY[10][100];
  int listXS1[100];
  int listYS1[100];
  int listXS2[100];
  int listYS2[100];
  int listXS3[100];
  int listYS3[100];
  int listXS4[100];
  int listYS4[100];
  int listXS5[100];
  int listYS5[100];
  int listXS6[100];
  int listYS6[100];
  int listXS7[100];
  int listYS7[100];
  int listXS8[100];
  int listYS8[100];
  int listXS9[100];
  int listYS9[100];
  int listXS10[100];
  int listYS10[100];
  for (int S = 0; S < 10; S++) {

    for (int i = 0; i < 100; i++) {
      if (i % 10 == 0) {
        xMove -= 9 * xx;
        yMove += yy;
      } else
        xMove += xx;
      listX[S][i] = xMove;
      listY[S][i] = yMove;
      arraySprite[S][i].setScale(0.2, 0.2);
    }
    if (S == 3 or S == 7) {
      xMove -= 39 * xx;
      yMove += 10 * yy;
    }

    else {
      xMove += 13 * xx;
      yMove -= 10 * yy;
    }
  }
  double reservX = 0;
  double reservY = 0;
  for (int i = 0; i < 100; i++) {
    listXS1[i] = listX[0][numbers[i]];
    listYS1[i] = listY[0][numbers[i]];
    listXS2[i] = listX[1][numbers[i]];
    listYS2[i] = listY[1][numbers[i]];
    listXS3[i] = listX[2][numbers[i]];
    listYS3[i] = listY[2][numbers[i]];
    listXS4[i] = listX[3][numbers[i]];
    listYS4[i] = listY[3][numbers[i]];
    listXS5[i] = listX[4][numbers[i]];
    listYS5[i] = listY[4][numbers[i]];
    listXS6[i] = listX[5][numbers[i]];
    listYS6[i] = listY[5][numbers[i]];
    listXS7[i] = listX[6][numbers[i]];
    listYS7[i] = listY[6][numbers[i]];
    listXS8[i] = listX[7][numbers[i]];
    listYS8[i] = listY[7][numbers[i]];
    listXS9[i] = listX[8][numbers[i]];
    listYS9[i] = listY[8][numbers[i]];
    listXS10[i] = listX[9][numbers[i]];
    listYS10[i] = listY[9][numbers[i]];
  }
  for (int i = 0; i < 100; i++) {
    listX[0][i] = listXS1[i];
    listY[0][i] = listYS1[i];
    listX[1][i] = listXS2[i];
    listY[1][i] = listYS2[i];
    listX[2][i] = listXS3[i];
    listY[2][i] = listYS3[i];
    listX[3][i] = listXS4[i];
    listY[3][i] = listYS4[i];
    listX[4][i] = listXS5[i];
    listY[4][i] = listYS5[i];
    listX[5][i] = listXS6[i];
    listY[5][i] = listYS6[i];
    listX[6][i] = listXS7[i];
    listY[6][i] = listYS7[i];
    listX[7][i] = listXS8[i];
    listY[7][i] = listYS8[i];
    listX[8][i] = listXS9[i];
    listY[8][i] = listYS9[i];
    listX[9][i] = listXS10[i];
    listY[9][i] = listYS10[i];
    listXS1[i] = numbers[i];
    listXS2[i] = numbers[i];
    listXS3[i] = numbers[i];
    listXS4[i] = numbers[i];
    listXS5[i] = numbers[i];
    listXS6[i] = numbers[i];
    listXS7[i] = numbers[i];
    listXS8[i] = numbers[i];
    listXS9[i] = numbers[i];
    listXS10[i] = numbers[i];
  }
#pragma endregion
// Инициализация структур для хранения данных о процессе сортировки, запуск
// функций сортировки
#pragma region SortsOn
  int counterQsort = 0;
  std::vector<std::pair<int, int>> iterS1;
  std::vector<std::pair<int, int>> iterS2;
  std::vector<std::pair<int, int>> iterS3;
  std::vector<std::pair<int, int>> iterS4;
  std::vector<std::pair<int, int>> iterS5;
  std::vector<std::pair<int, int>> iterS6;
  std::vector<std::pair<int, int>> iterS7;
  std::vector<std::pair<int, int>> iterS8;
  std::vector<std::pair<int, int>> iterS9;
  std::vector<std::pair<int, int>> iterS10;
  selectionSort(listXS1, 100, iterS1);
  insertSort(listXS2, 100, iterS2);
  bubbleSort(listXS3, 100, iterS3);
  cocktailSort(listXS4, 100, iterS4);
  gnome_sort(listXS5, 100, iterS5);
  quickSort(listXS6, 0, 99, iterS6);
  slow_sort(listXS7, 0, 99, iterS7);
  // mergeSort(listXS8,0, 99, iterS8, iterS8Copy, listXS8Res, listYS8Res);
  stooge_sort(listXS8, 0, 99, iterS8);
  ShellSort(listXS9, 100, iterS9);
  odd_even_sort(listXS10, 100, iterS10);
#pragma endregion
// Визуализация сортировки
#pragma region VisualisationOfSort
  float duration = float();
  Clock clock;
  Font font;
  font.loadFromFile("../images/CyrilicOld.ttf");
  Text textS1;
  textS1.setFont(font);
  textS1.setString("Selection sort");
  textS1.setCharacterSize(20);
  textS1.setFillColor(Color::Black);
  textS1.setStyle(sf::Text::Bold | sf::Text::Underlined);
  textS1.setPosition(75 + 3 * xx, 50 + 11 * yy);
  Text textS2;
  textS2.setFont(font);
  textS2.setString("Insert sort");
  textS2.setCharacterSize(20);
  textS2.setFillColor(Color::Black);
  textS2.setStyle(sf::Text::Bold | sf::Text::Underlined);
  textS2.setPosition(75 + 16 * xx, 50 + 11 * yy);
  Text textS3;
  textS3.setFont(font);
  textS3.setString("Bubble sort");
  textS3.setCharacterSize(20);
  textS3.setFillColor(Color::Black);
  textS3.setStyle(sf::Text::Bold | sf::Text::Underlined);
  textS3.setPosition(75 + 29 * xx, 50 + 11 * yy);
  Text textS4;
  textS4.setFont(font);
  textS4.setString("Cocktail sort");
  textS4.setCharacterSize(20);
  textS4.setFillColor(Color::Black);
  textS4.setStyle(sf::Text::Bold | sf::Text::Underlined);
  textS4.setPosition(75 + 42 * xx, 50 + 11 * yy);
  Text textS5;
  textS5.setFont(font);
  textS5.setString("Gnome sort");
  textS5.setCharacterSize(20);
  textS5.setFillColor(Color::Black);
  textS5.setStyle(sf::Text::Bold | sf::Text::Underlined);
  textS5.setPosition(75 + 3 * xx, 50 + 19 * yy);
  Text textS6;
  textS6.setFont(font);
  textS6.setString("Quick sort");
  textS6.setCharacterSize(20);
  textS6.setFillColor(Color::Black);
  textS6.setStyle(sf::Text::Bold | sf::Text::Underlined);
  textS6.setPosition(75 + 16 * xx, 50 + 19 * yy);
  Text textS7;
  textS7.setFont(font);
  textS7.setString("Slow sort");
  textS7.setCharacterSize(20);
  textS7.setFillColor(Color::Black);
  textS7.setStyle(sf::Text::Bold | sf::Text::Underlined);
  textS7.setPosition(75 + 29 * xx, 50 + 19 * yy);
  Text textS8;
  textS8.setFont(font);
  textS8.setString("Stooge sort");
  textS8.setCharacterSize(20);
  textS8.setFillColor(Color::Black);
  textS8.setStyle(sf::Text::Bold | sf::Text::Underlined);
  textS8.setPosition(75 + 42 * xx, 50 + 19 * yy);
  Text textS9;
  textS9.setFont(font);
  textS9.setString("Shell sort");
  textS9.setCharacterSize(20);
  textS9.setFillColor(Color::Black);
  textS9.setStyle(sf::Text::Bold | sf::Text::Underlined);
  textS9.setPosition(75 + 3 * xx, 50 + 39 * yy);
  Text textS10;
  textS10.setFont(font);
  textS10.setString("Odd-even sort");
  textS10.setCharacterSize(20);
  textS10.setFillColor(Color::Black);
  textS10.setStyle(sf::Text::Bold | sf::Text::Underlined);
  textS10.setPosition(75 + 16 * xx, 50 + 39 * yy);

  // задаем позицию текста, центр камеры
  // рисую этот текст

  RenderWindow Window(VideoMode(1500, 1000), "Animation");
  int i = 0;
  int j = 0;
  int k = 0;
  int x = 0;
  int z = 0;
  int c = 0;
  int v = 0;
  int d = 0;
  int l = 0;
  int q = 0;
  while (Window.isOpen()) {
    Window.display();
    Window.clear(Color::White);
    Time dt = clock.restart();
    duration += dt.asSeconds();
    Window.draw(textS1);
    Window.draw(textS2);
    Window.draw(textS3);
    Window.draw(textS4);
    Window.draw(textS5);
    Window.draw(textS6);
    Window.draw(textS7);
    Window.draw(textS8);
    Window.draw(textS9);
    Window.draw(textS10);
    for (int S = 0; S < 10; S++) {
      for (int i = 0; i < 100; i++) {
        arraySprite[S][i].setPosition(listX[S][i], listY[S][i]);
        Window.draw(arraySprite[S][i]);
      }
    }
    Event event;
    while (Window.pollEvent(event)) {
      if (event.type == Event::Closed)
        Window.close();
    }
    if (duration > 0.05f) {

      duration = 0;
      if (i < iterS1.size()) {
        if (iterS1[i].first != -1) {
          std::swap(listX[0][iterS1[i].first], listX[0][iterS1[i].second]);
          std::swap(listY[0][iterS1[i].first], listY[0][iterS1[i].second]);
        }
        i++;
      }
      if (j < iterS2.size()) {
        if (iterS2[j].first != -1) {
          std::swap(listX[1][iterS2[j].first], listX[1][iterS2[j].second]);
          std::swap(listY[1][iterS2[j].first], listY[1][iterS2[j].second]);
        }
        j++;
      }
      if (k < iterS3.size()) {
        if (iterS3[k].first != -1) {
          std::swap(listX[2][iterS3[k].first], listX[2][iterS3[k].second]);
          std::swap(listY[2][iterS3[k].first], listY[2][iterS3[k].second]);
        }
        k++;
      }
      if (x < iterS4.size()) {
        if (iterS4[x].first != -1) {
          std::swap(listX[3][iterS4[x].first], listX[3][iterS4[x].second]);
          std::swap(listY[3][iterS4[x].first], listY[3][iterS4[x].second]);
        }
        x++;
      }
      if (l < iterS5.size()) {
        if (iterS5[l].first != -1) {
          std::swap(listX[4][iterS5[l].first], listX[4][iterS5[l].second]);
          std::swap(listY[4][iterS5[l].first], listY[4][iterS5[l].second]);
        }
        l++;
      }
      if (z < iterS6.size()) {
        if (iterS6[z].first != -1) {
          std::swap(listX[5][iterS6[z].first], listX[5][iterS6[z].second]);
          std::swap(listY[5][iterS6[z].first], listY[5][iterS6[z].second]);
        }
        z++;
      }
      if (c < iterS7.size()) {
        if (iterS7[c].first != -1) {
          std::swap(listX[6][iterS7[c].first], listX[6][iterS7[c].second]);
          std::swap(listY[6][iterS7[c].first], listY[6][iterS7[c].second]);
        }
        c++;
      }
      if (v < iterS9.size()) {
        if (iterS9[v].first != -1) {
          std::swap(listX[8][iterS9[v].first], listX[8][iterS9[v].second]);
          std::swap(listY[8][iterS9[v].first], listY[8][iterS9[v].second]);
        }
        v++;
      }
      if (d < iterS8.size()) {
        if (iterS8[d].first != -1) {
          std::swap(listX[7][iterS8[d].first], listX[7][iterS8[d].second]);
          std::swap(listY[7][iterS8[d].first], listY[7][iterS8[d].second]);
        }
        d++;
      }
      if (q < iterS10.size()) {
        if (iterS10[q].first != -1) {
          std::swap(listX[9][iterS10[q].first], listX[9][iterS10[q].second]);
          std::swap(listY[9][iterS10[q].first], listY[9][iterS10[q].second]);
        }
        q++;
      }
    }
  }
#pragma endregion
}
