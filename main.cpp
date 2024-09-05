//Подключение библиотек
#include <iostream>
#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <ctime>
#include <cassert>
#include <vector>
#include <SFML/Window.hpp>
#include <list>
#include <stdlib.h>
#include <utility>

#include "sorts/sorts.h"
//Рандомайзер
#pragma region Randomizer
struct PRNG
{
    unsigned seed = 0;
};

void initGenerator(PRNG& generator)
{
    generator.seed = unsigned(std::time(nullptr));
}

unsigned random(PRNG& generator, unsigned minValue, unsigned maxValue)
{
    assert(minValue <= maxValue);
    generator.seed = (generator.seed * 73129 + 95121);
    return (generator.seed % (maxValue + 1 - minValue)) + minValue;
}

void peremeshka(int counter, PRNG& generator, std::vector<int>& randomcheeeck, std::vector<int>& data) {
    while (counter != 0) {
        int random_index = random(generator, 0, counter - 1);
        randomcheeeck.push_back(data[random_index]);

        data.erase(std::next(data.begin(), random_index));
        counter--;


    }

}
#pragma endregion
int main() {
//Запуск функции рандомайзераб запись результата
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
//Загрузка изображений и создание текстур
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
Image qim[100];
qim[0].loadFromFile("../images/1.png");
qim[1].loadFromFile("../images/2.png");
qim[2].loadFromFile("../images/3.png");
qim[3].loadFromFile("../images/4.png");
qim[4].loadFromFile("../images/5.png");
qim[5].loadFromFile("../images/6.png");
qim[6].loadFromFile("../images/7.png");
qim[7].loadFromFile("../images/8.png");
qim[8].loadFromFile("../images/9.png");
qim[9].loadFromFile("../images/10.png");
qim[10].loadFromFile("../images/11.png");
qim[11].loadFromFile("../images/12.png");
qim[12].loadFromFile("../images/13.png");
qim[13].loadFromFile("../images/14.png");
qim[14].loadFromFile("../images/15.png");
qim[15].loadFromFile("../images/16.png");
qim[16].loadFromFile("../images/17.png");
qim[17].loadFromFile("../images/18.png");
qim[18].loadFromFile("../images/19.png");
qim[19].loadFromFile("../images/20.png");
qim[20].loadFromFile("../images/21.png");
qim[21].loadFromFile("../images/22.png");
qim[22].loadFromFile("../images/23.png");
qim[23].loadFromFile("../images/24.png");
qim[24].loadFromFile("../images/25.png");
qim[25].loadFromFile("../images/26.png");
qim[26].loadFromFile("../images/27.png");
qim[27].loadFromFile("../images/28.png");
qim[28].loadFromFile("../images/29.png");
qim[29].loadFromFile("../images/30.png");
qim[30].loadFromFile("../images/31.png");
qim[31].loadFromFile("../images/32.png");
qim[32].loadFromFile("../images/33.png");
qim[33].loadFromFile("../images/34.png");
qim[34].loadFromFile("../images/35.png");
qim[35].loadFromFile("../images/36.png");
qim[36].loadFromFile("../images/37.png");
qim[37].loadFromFile("../images/38.png");
qim[38].loadFromFile("../images/39.png");
qim[39].loadFromFile("../images/40.png");
qim[40].loadFromFile("../images/41.png");
qim[41].loadFromFile("../images/42.png");
qim[42].loadFromFile("../images/43.png");
qim[43].loadFromFile("../images/44.png");
qim[44].loadFromFile("../images/45.png");
qim[45].loadFromFile("../images/46.png");
qim[46].loadFromFile("../images/47.png");
qim[47].loadFromFile("../images/48.png");
qim[48].loadFromFile("../images/49.png");
qim[49].loadFromFile("../images/50.png");
qim[50].loadFromFile("../images/51.png");
qim[51].loadFromFile("../images/52.png");
qim[52].loadFromFile("../images/53.png");
qim[53].loadFromFile("../images/54.png");
qim[54].loadFromFile("../images/55.png");
qim[55].loadFromFile("../images/56.png");
qim[56].loadFromFile("../images/57.png");
qim[57].loadFromFile("../images/58.png");
qim[58].loadFromFile("../images/59.png");
qim[59].loadFromFile("../images/60.png");
qim[60].loadFromFile("../images/61.png");
qim[61].loadFromFile("../images/62.png");
qim[62].loadFromFile("../images/63.png");
qim[63].loadFromFile("../images/64.png");
qim[64].loadFromFile("../images/65.png");
qim[65].loadFromFile("../images/66.png");
qim[66].loadFromFile("../images/67.png");
qim[67].loadFromFile("../images/68.png");
qim[68].loadFromFile("../images/69.png");
qim[69].loadFromFile("../images/70.png");
qim[70].loadFromFile("../images/71.png");
qim[71].loadFromFile("../images/72.png");
qim[72].loadFromFile("../images/73.png");
qim[73].loadFromFile("../images/74.png");
qim[74].loadFromFile("../images/75.png");
qim[75].loadFromFile("../images/76.png");
qim[76].loadFromFile("../images/77.png");
qim[77].loadFromFile("../images/78.png");
qim[78].loadFromFile("../images/79.png");
qim[79].loadFromFile("../images/80.png");
qim[80].loadFromFile("../images/81.png");
qim[81].loadFromFile("../images/82.png");
qim[82].loadFromFile("../images/83.png");
qim[83].loadFromFile("../images/84.png");
qim[84].loadFromFile("../images/85.png");
qim[85].loadFromFile("../images/86.png");
qim[86].loadFromFile("../images/87.png");
qim[87].loadFromFile("../images/88.png");
qim[88].loadFromFile("../images/89.png");
qim[89].loadFromFile("../images/90.png");
qim[90].loadFromFile("../images/91.png");
qim[91].loadFromFile("../images/92.png");
qim[92].loadFromFile("../images/93.png");
qim[93].loadFromFile("../images/94.png");
qim[94].loadFromFile("../images/95.png");
qim[95].loadFromFile("../images/96.png");
qim[96].loadFromFile("../images/97.png");
qim[97].loadFromFile("../images/98.png");
qim[98].loadFromFile("../images/99.png");
qim[99].loadFromFile("../images/100.png");
Image wim[100];
wim[0].loadFromFile("../images/1.png");
wim[1].loadFromFile("../images/2.png");
wim[2].loadFromFile("../images/3.png");
wim[3].loadFromFile("../images/4.png");
wim[4].loadFromFile("../images/5.png");
wim[5].loadFromFile("../images/6.png");
wim[6].loadFromFile("../images/7.png");
wim[7].loadFromFile("../images/8.png");
wim[8].loadFromFile("../images/9.png");
wim[9].loadFromFile("../images/10.png");
wim[10].loadFromFile("../images/11.png");
wim[11].loadFromFile("../images/12.png");
wim[12].loadFromFile("../images/13.png");
wim[13].loadFromFile("../images/14.png");
wim[14].loadFromFile("../images/15.png");
wim[15].loadFromFile("../images/16.png");
wim[16].loadFromFile("../images/17.png");
wim[17].loadFromFile("../images/18.png");
wim[18].loadFromFile("../images/19.png");
wim[19].loadFromFile("../images/20.png");
wim[20].loadFromFile("../images/21.png");
wim[21].loadFromFile("../images/22.png");
wim[22].loadFromFile("../images/23.png");
wim[23].loadFromFile("../images/24.png");
wim[24].loadFromFile("../images/25.png");
wim[25].loadFromFile("../images/26.png");
wim[26].loadFromFile("../images/27.png");
wim[27].loadFromFile("../images/28.png");
wim[28].loadFromFile("../images/29.png");
wim[29].loadFromFile("../images/30.png");
wim[30].loadFromFile("../images/31.png");
wim[31].loadFromFile("../images/32.png");
wim[32].loadFromFile("../images/33.png");
wim[33].loadFromFile("../images/34.png");
wim[34].loadFromFile("../images/35.png");
wim[35].loadFromFile("../images/36.png");
wim[36].loadFromFile("../images/37.png");
wim[37].loadFromFile("../images/38.png");
wim[38].loadFromFile("../images/39.png");
wim[39].loadFromFile("../images/40.png");
wim[40].loadFromFile("../images/41.png");
wim[41].loadFromFile("../images/42.png");
wim[42].loadFromFile("../images/43.png");
wim[43].loadFromFile("../images/44.png");
wim[44].loadFromFile("../images/45.png");
wim[45].loadFromFile("../images/46.png");
wim[46].loadFromFile("../images/47.png");
wim[47].loadFromFile("../images/48.png");
wim[48].loadFromFile("../images/49.png");
wim[49].loadFromFile("../images/50.png");
wim[50].loadFromFile("../images/51.png");
wim[51].loadFromFile("../images/52.png");
wim[52].loadFromFile("../images/53.png");
wim[53].loadFromFile("../images/54.png");
wim[54].loadFromFile("../images/55.png");
wim[55].loadFromFile("../images/56.png");
wim[56].loadFromFile("../images/57.png");
wim[57].loadFromFile("../images/58.png");
wim[58].loadFromFile("../images/59.png");
wim[59].loadFromFile("../images/60.png");
wim[60].loadFromFile("../images/61.png");
wim[61].loadFromFile("../images/62.png");
wim[62].loadFromFile("../images/63.png");
wim[63].loadFromFile("../images/64.png");
wim[64].loadFromFile("../images/65.png");
wim[65].loadFromFile("../images/66.png");
wim[66].loadFromFile("../images/67.png");
wim[67].loadFromFile("../images/68.png");
wim[68].loadFromFile("../images/69.png");
wim[69].loadFromFile("../images/70.png");
wim[70].loadFromFile("../images/71.png");
wim[71].loadFromFile("../images/72.png");
wim[72].loadFromFile("../images/73.png");
wim[73].loadFromFile("../images/74.png");
wim[74].loadFromFile("../images/75.png");
wim[75].loadFromFile("../images/76.png");
wim[76].loadFromFile("../images/77.png");
wim[77].loadFromFile("../images/78.png");
wim[78].loadFromFile("../images/79.png");
wim[79].loadFromFile("../images/80.png");
wim[80].loadFromFile("../images/81.png");
wim[81].loadFromFile("../images/82.png");
wim[82].loadFromFile("../images/83.png");
wim[83].loadFromFile("../images/84.png");
wim[84].loadFromFile("../images/85.png");
wim[85].loadFromFile("../images/86.png");
wim[86].loadFromFile("../images/87.png");
wim[87].loadFromFile("../images/88.png");
wim[88].loadFromFile("../images/89.png");
wim[89].loadFromFile("../images/90.png");
wim[90].loadFromFile("../images/91.png");
wim[91].loadFromFile("../images/92.png");
wim[92].loadFromFile("../images/93.png");
wim[93].loadFromFile("../images/94.png");
wim[94].loadFromFile("../images/95.png");
wim[95].loadFromFile("../images/96.png");
wim[96].loadFromFile("../images/97.png");
wim[97].loadFromFile("../images/98.png");
wim[98].loadFromFile("../images/99.png");
wim[99].loadFromFile("../images/100.png");
Image rim[100];
rim[0].loadFromFile("../images/1.png");
rim[1].loadFromFile("../images/2.png");
rim[2].loadFromFile("../images/3.png");
rim[3].loadFromFile("../images/4.png");
rim[4].loadFromFile("../images/5.png");
rim[5].loadFromFile("../images/6.png");
rim[6].loadFromFile("../images/7.png");
rim[7].loadFromFile("../images/8.png");
rim[8].loadFromFile("../images/9.png");
rim[9].loadFromFile("../images/10.png");
rim[10].loadFromFile("../images/11.png");
rim[11].loadFromFile("../images/12.png");
rim[12].loadFromFile("../images/13.png");
rim[13].loadFromFile("../images/14.png");
rim[14].loadFromFile("../images/15.png");
rim[15].loadFromFile("../images/16.png");
rim[16].loadFromFile("../images/17.png");
rim[17].loadFromFile("../images/18.png");
rim[18].loadFromFile("../images/19.png");
rim[19].loadFromFile("../images/20.png");
rim[20].loadFromFile("../images/21.png");
rim[21].loadFromFile("../images/22.png");
rim[22].loadFromFile("../images/23.png");
rim[23].loadFromFile("../images/24.png");
rim[24].loadFromFile("../images/25.png");
rim[25].loadFromFile("../images/26.png");
rim[26].loadFromFile("../images/27.png");
rim[27].loadFromFile("../images/28.png");
rim[28].loadFromFile("../images/29.png");
rim[29].loadFromFile("../images/30.png");
rim[30].loadFromFile("../images/31.png");
rim[31].loadFromFile("../images/32.png");
rim[32].loadFromFile("../images/33.png");
rim[33].loadFromFile("../images/34.png");
rim[34].loadFromFile("../images/35.png");
rim[35].loadFromFile("../images/36.png");
rim[36].loadFromFile("../images/37.png");
rim[37].loadFromFile("../images/38.png");
rim[38].loadFromFile("../images/39.png");
rim[39].loadFromFile("../images/40.png");
rim[40].loadFromFile("../images/41.png");
rim[41].loadFromFile("../images/42.png");
rim[42].loadFromFile("../images/43.png");
rim[43].loadFromFile("../images/44.png");
rim[44].loadFromFile("../images/45.png");
rim[45].loadFromFile("../images/46.png");
rim[46].loadFromFile("../images/47.png");
rim[47].loadFromFile("../images/48.png");
rim[48].loadFromFile("../images/49.png");
rim[49].loadFromFile("../images/50.png");
rim[50].loadFromFile("../images/51.png");
rim[51].loadFromFile("../images/52.png");
rim[52].loadFromFile("../images/53.png");
rim[53].loadFromFile("../images/54.png");
rim[54].loadFromFile("../images/55.png");
rim[55].loadFromFile("../images/56.png");
rim[56].loadFromFile("../images/57.png");
rim[57].loadFromFile("../images/58.png");
rim[58].loadFromFile("../images/59.png");
rim[59].loadFromFile("../images/60.png");
rim[60].loadFromFile("../images/61.png");
rim[61].loadFromFile("../images/62.png");
rim[62].loadFromFile("../images/63.png");
rim[63].loadFromFile("../images/64.png");
rim[64].loadFromFile("../images/65.png");
rim[65].loadFromFile("../images/66.png");
rim[66].loadFromFile("../images/67.png");
rim[67].loadFromFile("../images/68.png");
rim[68].loadFromFile("../images/69.png");
rim[69].loadFromFile("../images/70.png");
rim[70].loadFromFile("../images/71.png");
rim[71].loadFromFile("../images/72.png");
rim[72].loadFromFile("../images/73.png");
rim[73].loadFromFile("../images/74.png");
rim[74].loadFromFile("../images/75.png");
rim[75].loadFromFile("../images/76.png");
rim[76].loadFromFile("../images/77.png");
rim[77].loadFromFile("../images/78.png");
rim[78].loadFromFile("../images/79.png");
rim[79].loadFromFile("../images/80.png");
rim[80].loadFromFile("../images/81.png");
rim[81].loadFromFile("../images/82.png");
rim[82].loadFromFile("../images/83.png");
rim[83].loadFromFile("../images/84.png");
rim[84].loadFromFile("../images/85.png");
rim[85].loadFromFile("../images/86.png");
rim[86].loadFromFile("../images/87.png");
rim[87].loadFromFile("../images/88.png");
rim[88].loadFromFile("../images/89.png");
rim[89].loadFromFile("../images/90.png");
rim[90].loadFromFile("../images/91.png");
rim[91].loadFromFile("../images/92.png");
rim[92].loadFromFile("../images/93.png");
rim[93].loadFromFile("../images/94.png");
rim[94].loadFromFile("../images/95.png");
rim[95].loadFromFile("../images/96.png");
rim[96].loadFromFile("../images/97.png");
rim[97].loadFromFile("../images/98.png");
rim[98].loadFromFile("../images/99.png");
rim[99].loadFromFile("../images/100.png");
Image tim[100];
tim[0].loadFromFile("../images/1.png");
tim[1].loadFromFile("../images/2.png");
tim[2].loadFromFile("../images/3.png");
tim[3].loadFromFile("../images/4.png");
tim[4].loadFromFile("../images/5.png");
tim[5].loadFromFile("../images/6.png");
tim[6].loadFromFile("../images/7.png");
tim[7].loadFromFile("../images/8.png");
tim[8].loadFromFile("../images/9.png");
tim[9].loadFromFile("../images/10.png");
tim[10].loadFromFile("../images/11.png");
tim[11].loadFromFile("../images/12.png");
tim[12].loadFromFile("../images/13.png");
tim[13].loadFromFile("../images/14.png");
tim[14].loadFromFile("../images/15.png");
tim[15].loadFromFile("../images/16.png");
tim[16].loadFromFile("../images/17.png");
tim[17].loadFromFile("../images/18.png");
tim[18].loadFromFile("../images/19.png");
tim[19].loadFromFile("../images/20.png");
tim[20].loadFromFile("../images/21.png");
tim[21].loadFromFile("../images/22.png");
tim[22].loadFromFile("../images/23.png");
tim[23].loadFromFile("../images/24.png");
tim[24].loadFromFile("../images/25.png");
tim[25].loadFromFile("../images/26.png");
tim[26].loadFromFile("../images/27.png");
tim[27].loadFromFile("../images/28.png");
tim[28].loadFromFile("../images/29.png");
tim[29].loadFromFile("../images/30.png");
tim[30].loadFromFile("../images/31.png");
tim[31].loadFromFile("../images/32.png");
tim[32].loadFromFile("../images/33.png");
tim[33].loadFromFile("../images/34.png");
tim[34].loadFromFile("../images/35.png");
tim[35].loadFromFile("../images/36.png");
tim[36].loadFromFile("../images/37.png");
tim[37].loadFromFile("../images/38.png");
tim[38].loadFromFile("../images/39.png");
tim[39].loadFromFile("../images/40.png");
tim[40].loadFromFile("../images/41.png");
tim[41].loadFromFile("../images/42.png");
tim[42].loadFromFile("../images/43.png");
tim[43].loadFromFile("../images/44.png");
tim[44].loadFromFile("../images/45.png");
tim[45].loadFromFile("../images/46.png");
tim[46].loadFromFile("../images/47.png");
tim[47].loadFromFile("../images/48.png");
tim[48].loadFromFile("../images/49.png");
tim[49].loadFromFile("../images/50.png");
tim[50].loadFromFile("../images/51.png");
tim[51].loadFromFile("../images/52.png");
tim[52].loadFromFile("../images/53.png");
tim[53].loadFromFile("../images/54.png");
tim[54].loadFromFile("../images/55.png");
tim[55].loadFromFile("../images/56.png");
tim[56].loadFromFile("../images/57.png");
tim[57].loadFromFile("../images/58.png");
tim[58].loadFromFile("../images/59.png");
tim[59].loadFromFile("../images/60.png");
tim[60].loadFromFile("../images/61.png");
tim[61].loadFromFile("../images/62.png");
tim[62].loadFromFile("../images/63.png");
tim[63].loadFromFile("../images/64.png");
tim[64].loadFromFile("../images/65.png");
tim[65].loadFromFile("../images/66.png");
tim[66].loadFromFile("../images/67.png");
tim[67].loadFromFile("../images/68.png");
tim[68].loadFromFile("../images/69.png");
tim[69].loadFromFile("../images/70.png");
tim[70].loadFromFile("../images/71.png");
tim[71].loadFromFile("../images/72.png");
tim[72].loadFromFile("../images/73.png");
tim[73].loadFromFile("../images/74.png");
tim[74].loadFromFile("../images/75.png");
tim[75].loadFromFile("../images/76.png");
tim[76].loadFromFile("../images/77.png");
tim[77].loadFromFile("../images/78.png");
tim[78].loadFromFile("../images/79.png");
tim[79].loadFromFile("../images/80.png");
tim[80].loadFromFile("../images/81.png");
tim[81].loadFromFile("../images/82.png");
tim[82].loadFromFile("../images/83.png");
tim[83].loadFromFile("../images/84.png");
tim[84].loadFromFile("../images/85.png");
tim[85].loadFromFile("../images/86.png");
tim[86].loadFromFile("../images/87.png");
tim[87].loadFromFile("../images/88.png");
tim[88].loadFromFile("../images/89.png");
tim[89].loadFromFile("../images/90.png");
tim[90].loadFromFile("../images/91.png");
tim[91].loadFromFile("../images/92.png");
tim[92].loadFromFile("../images/93.png");
tim[93].loadFromFile("../images/94.png");
tim[94].loadFromFile("../images/95.png");
tim[95].loadFromFile("../images/96.png");
tim[96].loadFromFile("../images/97.png");
tim[97].loadFromFile("../images/98.png");
tim[98].loadFromFile("../images/99.png");
tim[99].loadFromFile("../images/100.png");
Image sim[100];
sim[0].loadFromFile("../images/1.png");
sim[1].loadFromFile("../images/2.png");
sim[2].loadFromFile("../images/3.png");
sim[3].loadFromFile("../images/4.png");
sim[4].loadFromFile("../images/5.png");
sim[5].loadFromFile("../images/6.png");
sim[6].loadFromFile("../images/7.png");
sim[7].loadFromFile("../images/8.png");
sim[8].loadFromFile("../images/9.png");
sim[9].loadFromFile("../images/10.png");
sim[10].loadFromFile("../images/11.png");
sim[11].loadFromFile("../images/12.png");
sim[12].loadFromFile("../images/13.png");
sim[13].loadFromFile("../images/14.png");
sim[14].loadFromFile("../images/15.png");
sim[15].loadFromFile("../images/16.png");
sim[16].loadFromFile("../images/17.png");
sim[17].loadFromFile("../images/18.png");
sim[18].loadFromFile("../images/19.png");
sim[19].loadFromFile("../images/20.png");
sim[20].loadFromFile("../images/21.png");
sim[21].loadFromFile("../images/22.png");
sim[22].loadFromFile("../images/23.png");
sim[23].loadFromFile("../images/24.png");
sim[24].loadFromFile("../images/25.png");
sim[25].loadFromFile("../images/26.png");
sim[26].loadFromFile("../images/27.png");
sim[27].loadFromFile("../images/28.png");
sim[28].loadFromFile("../images/29.png");
sim[29].loadFromFile("../images/30.png");
sim[30].loadFromFile("../images/31.png");
sim[31].loadFromFile("../images/32.png");
sim[32].loadFromFile("../images/33.png");
sim[33].loadFromFile("../images/34.png");
sim[34].loadFromFile("../images/35.png");
sim[35].loadFromFile("../images/36.png");
sim[36].loadFromFile("../images/37.png");
sim[37].loadFromFile("../images/38.png");
sim[38].loadFromFile("../images/39.png");
sim[39].loadFromFile("../images/40.png");
sim[40].loadFromFile("../images/41.png");
sim[41].loadFromFile("../images/42.png");
sim[42].loadFromFile("../images/43.png");
sim[43].loadFromFile("../images/44.png");
sim[44].loadFromFile("../images/45.png");
sim[45].loadFromFile("../images/46.png");
sim[46].loadFromFile("../images/47.png");
sim[47].loadFromFile("../images/48.png");
sim[48].loadFromFile("../images/49.png");
sim[49].loadFromFile("../images/50.png");
sim[50].loadFromFile("../images/51.png");
sim[51].loadFromFile("../images/52.png");
sim[52].loadFromFile("../images/53.png");
sim[53].loadFromFile("../images/54.png");
sim[54].loadFromFile("../images/55.png");
sim[55].loadFromFile("../images/56.png");
sim[56].loadFromFile("../images/57.png");
sim[57].loadFromFile("../images/58.png");
sim[58].loadFromFile("../images/59.png");
sim[59].loadFromFile("../images/60.png");
sim[60].loadFromFile("../images/61.png");
sim[61].loadFromFile("../images/62.png");
sim[62].loadFromFile("../images/63.png");
sim[63].loadFromFile("../images/64.png");
sim[64].loadFromFile("../images/65.png");
sim[65].loadFromFile("../images/66.png");
sim[66].loadFromFile("../images/67.png");
sim[67].loadFromFile("../images/68.png");
sim[68].loadFromFile("../images/69.png");
sim[69].loadFromFile("../images/70.png");
sim[70].loadFromFile("../images/71.png");
sim[71].loadFromFile("../images/72.png");
sim[72].loadFromFile("../images/73.png");
sim[73].loadFromFile("../images/74.png");
sim[74].loadFromFile("../images/75.png");
sim[75].loadFromFile("../images/76.png");
sim[76].loadFromFile("../images/77.png");
sim[77].loadFromFile("../images/78.png");
sim[78].loadFromFile("../images/79.png");
sim[79].loadFromFile("../images/80.png");
sim[80].loadFromFile("../images/81.png");
sim[81].loadFromFile("../images/82.png");
sim[82].loadFromFile("../images/83.png");
sim[83].loadFromFile("../images/84.png");
sim[84].loadFromFile("../images/85.png");
sim[85].loadFromFile("../images/86.png");
sim[86].loadFromFile("../images/87.png");
sim[87].loadFromFile("../images/88.png");
sim[88].loadFromFile("../images/89.png");
sim[89].loadFromFile("../images/90.png");
sim[90].loadFromFile("../images/91.png");
sim[91].loadFromFile("../images/92.png");
sim[92].loadFromFile("../images/93.png");
sim[93].loadFromFile("../images/94.png");
sim[94].loadFromFile("../images/95.png");
sim[95].loadFromFile("../images/96.png");
sim[96].loadFromFile("../images/97.png");
sim[97].loadFromFile("../images/98.png");
sim[98].loadFromFile("../images/99.png");
sim[99].loadFromFile("../images/100.png");
Image dim[100];
dim[0].loadFromFile("../images/1.png");
dim[1].loadFromFile("../images/2.png");
dim[2].loadFromFile("../images/3.png");
dim[3].loadFromFile("../images/4.png");
dim[4].loadFromFile("../images/5.png");
dim[5].loadFromFile("../images/6.png");
dim[6].loadFromFile("../images/7.png");
dim[7].loadFromFile("../images/8.png");
dim[8].loadFromFile("../images/9.png");
dim[9].loadFromFile("../images/10.png");
dim[10].loadFromFile("../images/11.png");
dim[11].loadFromFile("../images/12.png");
dim[12].loadFromFile("../images/13.png");
dim[13].loadFromFile("../images/14.png");
dim[14].loadFromFile("../images/15.png");
dim[15].loadFromFile("../images/16.png");
dim[16].loadFromFile("../images/17.png");
dim[17].loadFromFile("../images/18.png");
dim[18].loadFromFile("../images/19.png");
dim[19].loadFromFile("../images/20.png");
dim[20].loadFromFile("../images/21.png");
dim[21].loadFromFile("../images/22.png");
dim[22].loadFromFile("../images/23.png");
dim[23].loadFromFile("../images/24.png");
dim[24].loadFromFile("../images/25.png");
dim[25].loadFromFile("../images/26.png");
dim[26].loadFromFile("../images/27.png");
dim[27].loadFromFile("../images/28.png");
dim[28].loadFromFile("../images/29.png");
dim[29].loadFromFile("../images/30.png");
dim[30].loadFromFile("../images/31.png");
dim[31].loadFromFile("../images/32.png");
dim[32].loadFromFile("../images/33.png");
dim[33].loadFromFile("../images/34.png");
dim[34].loadFromFile("../images/35.png");
dim[35].loadFromFile("../images/36.png");
dim[36].loadFromFile("../images/37.png");
dim[37].loadFromFile("../images/38.png");
dim[38].loadFromFile("../images/39.png");
dim[39].loadFromFile("../images/40.png");
dim[40].loadFromFile("../images/41.png");
dim[41].loadFromFile("../images/42.png");
dim[42].loadFromFile("../images/43.png");
dim[43].loadFromFile("../images/44.png");
dim[44].loadFromFile("../images/45.png");
dim[45].loadFromFile("../images/46.png");
dim[46].loadFromFile("../images/47.png");
dim[47].loadFromFile("../images/48.png");
dim[48].loadFromFile("../images/49.png");
dim[49].loadFromFile("../images/50.png");
dim[50].loadFromFile("../images/51.png");
dim[51].loadFromFile("../images/52.png");
dim[52].loadFromFile("../images/53.png");
dim[53].loadFromFile("../images/54.png");
dim[54].loadFromFile("../images/55.png");
dim[55].loadFromFile("../images/56.png");
dim[56].loadFromFile("../images/57.png");
dim[57].loadFromFile("../images/58.png");
dim[58].loadFromFile("../images/59.png");
dim[59].loadFromFile("../images/60.png");
dim[60].loadFromFile("../images/61.png");
dim[61].loadFromFile("../images/62.png");
dim[62].loadFromFile("../images/63.png");
dim[63].loadFromFile("../images/64.png");
dim[64].loadFromFile("../images/65.png");
dim[65].loadFromFile("../images/66.png");
dim[66].loadFromFile("../images/67.png");
dim[67].loadFromFile("../images/68.png");
dim[68].loadFromFile("../images/69.png");
dim[69].loadFromFile("../images/70.png");
dim[70].loadFromFile("../images/71.png");
dim[71].loadFromFile("../images/72.png");
dim[72].loadFromFile("../images/73.png");
dim[73].loadFromFile("../images/74.png");
dim[74].loadFromFile("../images/75.png");
dim[75].loadFromFile("../images/76.png");
dim[76].loadFromFile("../images/77.png");
dim[77].loadFromFile("../images/78.png");
dim[78].loadFromFile("../images/79.png");
dim[79].loadFromFile("../images/80.png");
dim[80].loadFromFile("../images/81.png");
dim[81].loadFromFile("../images/82.png");
dim[82].loadFromFile("../images/83.png");
dim[83].loadFromFile("../images/84.png");
dim[84].loadFromFile("../images/85.png");
dim[85].loadFromFile("../images/86.png");
dim[86].loadFromFile("../images/87.png");
dim[87].loadFromFile("../images/88.png");
dim[88].loadFromFile("../images/89.png");
dim[89].loadFromFile("../images/90.png");
dim[90].loadFromFile("../images/91.png");
dim[91].loadFromFile("../images/92.png");
dim[92].loadFromFile("../images/93.png");
dim[93].loadFromFile("../images/94.png");
dim[94].loadFromFile("../images/95.png");
dim[95].loadFromFile("../images/96.png");
dim[96].loadFromFile("../images/97.png");
dim[97].loadFromFile("../images/98.png");
dim[98].loadFromFile("../images/99.png");
dim[99].loadFromFile("../images/100.png");
Image gim[100];
gim[0].loadFromFile("../images/1.png");
gim[1].loadFromFile("../images/2.png");
gim[2].loadFromFile("../images/3.png");
gim[3].loadFromFile("../images/4.png");
gim[4].loadFromFile("../images/5.png");
gim[5].loadFromFile("../images/6.png");
gim[6].loadFromFile("../images/7.png");
gim[7].loadFromFile("../images/8.png");
gim[8].loadFromFile("../images/9.png");
gim[9].loadFromFile("../images/10.png");
gim[10].loadFromFile("../images/11.png");
gim[11].loadFromFile("../images/12.png");
gim[12].loadFromFile("../images/13.png");
gim[13].loadFromFile("../images/14.png");
gim[14].loadFromFile("../images/15.png");
gim[15].loadFromFile("../images/16.png");
gim[16].loadFromFile("../images/17.png");
gim[17].loadFromFile("../images/18.png");
gim[18].loadFromFile("../images/19.png");
gim[19].loadFromFile("../images/20.png");
gim[20].loadFromFile("../images/21.png");
gim[21].loadFromFile("../images/22.png");
gim[22].loadFromFile("../images/23.png");
gim[23].loadFromFile("../images/24.png");
gim[24].loadFromFile("../images/25.png");
gim[25].loadFromFile("../images/26.png");
gim[26].loadFromFile("../images/27.png");
gim[27].loadFromFile("../images/28.png");
gim[28].loadFromFile("../images/29.png");
gim[29].loadFromFile("../images/30.png");
gim[30].loadFromFile("../images/31.png");
gim[31].loadFromFile("../images/32.png");
gim[32].loadFromFile("../images/33.png");
gim[33].loadFromFile("../images/34.png");
gim[34].loadFromFile("../images/35.png");
gim[35].loadFromFile("../images/36.png");
gim[36].loadFromFile("../images/37.png");
gim[37].loadFromFile("../images/38.png");
gim[38].loadFromFile("../images/39.png");
gim[39].loadFromFile("../images/40.png");
gim[40].loadFromFile("../images/41.png");
gim[41].loadFromFile("../images/42.png");
gim[42].loadFromFile("../images/43.png");
gim[43].loadFromFile("../images/44.png");
gim[44].loadFromFile("../images/45.png");
gim[45].loadFromFile("../images/46.png");
gim[46].loadFromFile("../images/47.png");
gim[47].loadFromFile("../images/48.png");
gim[48].loadFromFile("../images/49.png");
gim[49].loadFromFile("../images/50.png");
gim[50].loadFromFile("../images/51.png");
gim[51].loadFromFile("../images/52.png");
gim[52].loadFromFile("../images/53.png");
gim[53].loadFromFile("../images/54.png");
gim[54].loadFromFile("../images/55.png");
gim[55].loadFromFile("../images/56.png");
gim[56].loadFromFile("../images/57.png");
gim[57].loadFromFile("../images/58.png");
gim[58].loadFromFile("../images/59.png");
gim[59].loadFromFile("../images/60.png");
gim[60].loadFromFile("../images/61.png");
gim[61].loadFromFile("../images/62.png");
gim[62].loadFromFile("../images/63.png");
gim[63].loadFromFile("../images/64.png");
gim[64].loadFromFile("../images/65.png");
gim[65].loadFromFile("../images/66.png");
gim[66].loadFromFile("../images/67.png");
gim[67].loadFromFile("../images/68.png");
gim[68].loadFromFile("../images/69.png");
gim[69].loadFromFile("../images/70.png");
gim[70].loadFromFile("../images/71.png");
gim[71].loadFromFile("../images/72.png");
gim[72].loadFromFile("../images/73.png");
gim[73].loadFromFile("../images/74.png");
gim[74].loadFromFile("../images/75.png");
gim[75].loadFromFile("../images/76.png");
gim[76].loadFromFile("../images/77.png");
gim[77].loadFromFile("../images/78.png");
gim[78].loadFromFile("../images/79.png");
gim[79].loadFromFile("../images/80.png");
gim[80].loadFromFile("../images/81.png");
gim[81].loadFromFile("../images/82.png");
gim[82].loadFromFile("../images/83.png");
gim[83].loadFromFile("../images/84.png");
gim[84].loadFromFile("../images/85.png");
gim[85].loadFromFile("../images/86.png");
gim[86].loadFromFile("../images/87.png");
gim[87].loadFromFile("../images/88.png");
gim[88].loadFromFile("../images/89.png");
gim[89].loadFromFile("../images/90.png");
gim[90].loadFromFile("../images/91.png");
gim[91].loadFromFile("../images/92.png");
gim[92].loadFromFile("../images/93.png");
gim[93].loadFromFile("../images/94.png");
gim[94].loadFromFile("../images/95.png");
gim[95].loadFromFile("../images/96.png");
gim[96].loadFromFile("../images/97.png");
gim[97].loadFromFile("../images/98.png");
gim[98].loadFromFile("../images/99.png");
gim[99].loadFromFile("../images/100.png");
Image him[100];
him[0].loadFromFile("../images/1.png");
him[1].loadFromFile("../images/2.png");
him[2].loadFromFile("../images/3.png");
him[3].loadFromFile("../images/4.png");
him[4].loadFromFile("../images/5.png");
him[5].loadFromFile("../images/6.png");
him[6].loadFromFile("../images/7.png");
him[7].loadFromFile("../images/8.png");
him[8].loadFromFile("../images/9.png");
him[9].loadFromFile("../images/10.png");
him[10].loadFromFile("../images/11.png");
him[11].loadFromFile("../images/12.png");
him[12].loadFromFile("../images/13.png");
him[13].loadFromFile("../images/14.png");
him[14].loadFromFile("../images/15.png");
him[15].loadFromFile("../images/16.png");
him[16].loadFromFile("../images/17.png");
him[17].loadFromFile("../images/18.png");
him[18].loadFromFile("../images/19.png");
him[19].loadFromFile("../images/20.png");
him[20].loadFromFile("../images/21.png");
him[21].loadFromFile("../images/22.png");
him[22].loadFromFile("../images/23.png");
him[23].loadFromFile("../images/24.png");
him[24].loadFromFile("../images/25.png");
him[25].loadFromFile("../images/26.png");
him[26].loadFromFile("../images/27.png");
him[27].loadFromFile("../images/28.png");
him[28].loadFromFile("../images/29.png");
him[29].loadFromFile("../images/30.png");
him[30].loadFromFile("../images/31.png");
him[31].loadFromFile("../images/32.png");
him[32].loadFromFile("../images/33.png");
him[33].loadFromFile("../images/34.png");
him[34].loadFromFile("../images/35.png");
him[35].loadFromFile("../images/36.png");
him[36].loadFromFile("../images/37.png");
him[37].loadFromFile("../images/38.png");
him[38].loadFromFile("../images/39.png");
him[39].loadFromFile("../images/40.png");
him[40].loadFromFile("../images/41.png");
him[41].loadFromFile("../images/42.png");
him[42].loadFromFile("../images/43.png");
him[43].loadFromFile("../images/44.png");
him[44].loadFromFile("../images/45.png");
him[45].loadFromFile("../images/46.png");
him[46].loadFromFile("../images/47.png");
him[47].loadFromFile("../images/48.png");
him[48].loadFromFile("../images/49.png");
him[49].loadFromFile("../images/50.png");
him[50].loadFromFile("../images/51.png");
him[51].loadFromFile("../images/52.png");
him[52].loadFromFile("../images/53.png");
him[53].loadFromFile("../images/54.png");
him[54].loadFromFile("../images/55.png");
him[55].loadFromFile("../images/56.png");
him[56].loadFromFile("../images/57.png");
him[57].loadFromFile("../images/58.png");
him[58].loadFromFile("../images/59.png");
him[59].loadFromFile("../images/60.png");
him[60].loadFromFile("../images/61.png");
him[61].loadFromFile("../images/62.png");
him[62].loadFromFile("../images/63.png");
him[63].loadFromFile("../images/64.png");
him[64].loadFromFile("../images/65.png");
him[65].loadFromFile("../images/66.png");
him[66].loadFromFile("../images/67.png");
him[67].loadFromFile("../images/68.png");
him[68].loadFromFile("../images/69.png");
him[69].loadFromFile("../images/70.png");
him[70].loadFromFile("../images/71.png");
him[71].loadFromFile("../images/72.png");
him[72].loadFromFile("../images/73.png");
him[73].loadFromFile("../images/74.png");
him[74].loadFromFile("../images/75.png");
him[75].loadFromFile("../images/76.png");
him[76].loadFromFile("../images/77.png");
him[77].loadFromFile("../images/78.png");
him[78].loadFromFile("../images/79.png");
him[79].loadFromFile("../images/80.png");
him[80].loadFromFile("../images/81.png");
him[81].loadFromFile("../images/82.png");
him[82].loadFromFile("../images/83.png");
him[83].loadFromFile("../images/84.png");
him[84].loadFromFile("../images/85.png");
him[85].loadFromFile("../images/86.png");
him[86].loadFromFile("../images/87.png");
him[87].loadFromFile("../images/88.png");
him[88].loadFromFile("../images/89.png");
him[89].loadFromFile("../images/90.png");
him[90].loadFromFile("../images/91.png");
him[91].loadFromFile("../images/92.png");
him[92].loadFromFile("../images/93.png");
him[93].loadFromFile("../images/94.png");
him[94].loadFromFile("../images/95.png");
him[95].loadFromFile("../images/96.png");
him[96].loadFromFile("../images/97.png");
him[97].loadFromFile("../images/98.png");
him[98].loadFromFile("../images/99.png");
him[99].loadFromFile("../images/100.png");
#pragma endregion
//Создание массива спрайтов из текстур
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
    for (int i = 0; i < 100; i++)
        arrayTextureS1[i].loadFromImage(im[i]);
    for (int i = 0; i < 100; i++)
        arrayTextureS2[i].loadFromImage(qim[i]);
    for (int i = 0; i < 100; i++)
        arrayTextureS3[i].loadFromImage(wim[i]);
    for (int i = 0; i < 100; i++)
        arrayTextureS4[i].loadFromImage(rim[i]);
    for (int i = 0; i < 100; i++)
        arrayTextureS5[i].loadFromImage(tim[i]);
    for (int i = 0; i < 100; i++)
        arrayTextureS6[i].loadFromImage(sim[i]);
    for (int i = 0; i < 100; i++)
        arrayTextureS7[i].loadFromImage(dim[i]);
    for (int i = 0; i < 100; i++)
        arrayTextureS8[i].loadFromImage(gim[i]);
    for (int i = 0; i < 100; i++)
        arrayTextureS9[i].loadFromImage(him[i]);

    Sprite arraySprite[9][100];
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
#pragma endregion
//Инициализация и определение координат для спрайтов
#pragma region SetCoordinatesForSprites
    Vector2u size = arrayTextureS1[0].getSize();
    double xx = size.x;
    double yy = size.y;
    xx /= 5;
    yy /= 5;
    double xMove = 50 + 10 * xx;;
    double yMove = 50;
    double listX[9][100];
    double listY[9][100];
    double listXS1[100];
    double listYS1[100];
    double listXS2[100];
    double listYS2[100];
    double listXS3[100];
    double listYS3[100];
    double listXS4[100];
    double listYS4[100];
    double listXS5[100];
    double listYS5[100];
    double listXS6[100];
    double listYS6[100];
    double listXS7[100];
    double listYS7[100];
    double listXS8[100];
    double listYS8[100];
    double listXS9[100];
    double listYS9[100];
    for (int S = 0; S < 9; S++) {

        for (int i = 0; i < 100; i++) {
            if (i % 10 == 0) {
                xMove -= 9 * xx;
                yMove += yy;
            }
            else
                xMove += xx;
            listX[S][i] = xMove;
            listY[S][i] = yMove;
            arraySprite[S][i].setScale(0.2, 0.2);

        }
        if (S == 4) {
            xMove -= 60 * xx;
            yMove += 15 * yy;
        }

        else {
            xMove += 15 * xx;
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
        listXS1[i] = numbers[i];
        listXS2[i] = numbers[i];
        listXS3[i] = numbers[i];
        listXS4[i] = numbers[i];
        listXS5[i] = numbers[i];
        listXS6[i] = numbers[i];
        listXS7[i] = numbers[i];
        listXS8[i] = numbers[i];
        listXS9[i] = numbers[i];

    }
#pragma endregion
//Инициализация структур для хранения данных о процессе сортировки, запуск функций сортировки
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
    selectionSort(listXS1, 100, iterS1);
    insertSort(listXS2, 100, iterS2);
    bubbleSort(listXS3, 100, iterS3);
    cocktailSort(listXS4, 100, iterS4);
    gnome_sort(listXS5, 100, iterS5);
    quickSort(listXS6, 0, 99, iterS6);
    int slo_test = 0;
    std::cout<<"before sort ";
    for (slo_test =0 ; slo_test < 100; slo_test++){
        std::cout<<listXS7[slo_test] << " "; 
    }

    slow_sort(listXS7, 0, 99, iterS7);
    std::cout<< std::endl;
    std::cout<<"after sort ";
    for (slo_test =0 ; slo_test < 100; slo_test++){
        std::cout<<listXS7[slo_test] << " "; 
    }

    //mergeSort(listXS8,0, 99, iterS8, iterS8Copy, listXS8Res, listYS8Res);
    stooge_sort(listXS8, 0, 99, iterS8);
    ShellSort(100, listXS9, iterS9);

#pragma endregion
//Визуализация сортировки
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
    textS1.setPosition(50 + 3 * xx, 50 + 12 * yy);
    Text textS2;
    textS2.setFont(font);
    textS2.setString("Insert sort");
    textS2.setCharacterSize(20);
    textS2.setFillColor(Color::Black);
    textS2.setStyle(sf::Text::Bold | sf::Text::Underlined);
    textS2.setPosition(50 + 19 * xx, 50 + 12 * yy);
    Text textS3;
    textS3.setFont(font);
    textS3.setString("Bubble sort");
    textS3.setCharacterSize(20);
    textS3.setFillColor(Color::Black);
    textS3.setStyle(sf::Text::Bold | sf::Text::Underlined);
    textS3.setPosition(50 + 34 * xx, 50 + 12 * yy);
    Text textS4;
    textS4.setFont(font);
    textS4.setString("Cocktail sort");
    textS4.setCharacterSize(20);
    textS4.setFillColor(Color::Black);
    textS4.setStyle(sf::Text::Bold | sf::Text::Underlined);
    textS4.setPosition(50 + 49 * xx, 50 + 12 * yy);
    Text textS5;
    textS5.setFont(font);
    textS5.setString("Quick sort");
    textS5.setCharacterSize(20);
    textS5.setFillColor(Color::Black);
    textS5.setStyle(sf::Text::Bold | sf::Text::Underlined);
    textS5.setPosition(50 + 4 * xx, 50 + 22 * yy);
    Text textS6;
    textS6.setFont(font);
    textS6.setString("Slow sort");
    textS6.setCharacterSize(20);
    textS6.setFillColor(Color::Black);
    textS6.setStyle(sf::Text::Bold | sf::Text::Underlined);
    textS6.setPosition(50 + 19 * xx, 50 + 22 * yy);
    Text textS7;
    textS7.setFont(font);
    textS7.setString("Stooge sort");
    textS7.setCharacterSize(20);
    textS7.setFillColor(Color::Black);
    textS7.setStyle(sf::Text::Bold | sf::Text::Underlined);
    textS7.setPosition(50 + 34 * xx, 50 + 22 * yy);
    Text textS8;
    textS8.setFont(font);
    textS8.setString("Shell sort");
    textS8.setCharacterSize(20);
    textS8.setFillColor(Color::Black);
    textS8.setStyle(sf::Text::Bold | sf::Text::Underlined);
    textS8.setPosition(50 + 49 * xx, 50 + 22 * yy);
    
    
   //задаем позицию текста, центр камеры
   //рисую этот текст

    RenderWindow Window(VideoMode(1500, 1000), "Animation");
    int i = 0;
    int j = 0;
    int k = 0;
    int x = 0;
    int z = 0;
    int c = 0;
    int v = 0;
    int d = 0;
    int l =0;
    while (Window.isOpen())
    {
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
        for (int S = 0; S < 9; S++) {
                for (int i = 0; i < 100; i++) {
                    if (S != 4){
                        arraySprite[S][i].setPosition(listX[S][i], listY[S][i]);
                        Window.draw(arraySprite[S][i]);
                    }
                }
        }
        Event event;
        while (Window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                Window.close();
        }
        if (duration > 0.05f)
        {
            
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
        }


       
    }
#pragma endregion
}
