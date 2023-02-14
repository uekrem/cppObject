#include "sil.h"
using namespace std;

class student
{
    public:
        string  name;
        int     no;
        void    getname()
        {
            cout<< "Nesnemizin Adi:" << name << endl;
        }
};

int main()
{
    int now_year;
    student     std1;
    student2    std2;
    car         car1;

    std1.name = "Harun Utku Ekrem";
    std1.no = 123;
    std1.getname();

    std2.name = "Mehmet";
    std2.no = 234;
    std2.getno();

    now_year = 2023;
    car1.setmodel("Skoda");
    car1.setyear(2016);
    car1.setage(now_year);
    car1.getmodel();
    car1.getyear();
    car1.getage();

    math::total(9);
}