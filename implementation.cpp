#include "sil.h"

            //CLASS STUDENT2
void    student2::getno()
{
    cout << "Nesnenin No:" << student2::no << endl;
}

            //CLASS CAR
void    car::setyear(int input)
{
    car::year = input;
}

void    car::getyear()
{
    cout << "Yılı:" << car::year << endl;
}

void    car::setage(int now_time)
{
    car::age = now_time - car::year;
}

void    car::getage()
{
    cout << "Yasi:" << car::age << endl;
}
