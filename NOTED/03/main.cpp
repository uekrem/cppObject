#include "main.hpp"

void    which_shot(GUN *which)
{
    which->shot();
}

int main()
{
    /*
    ak47    ak;
    pistol  ps;
    m1      m;

    ak.name = "AK47";
    ps.date = 2000;
    - gun3 nesnesinin oluşturduğumuz sınıf GUN sınıfından miras 
    alamadığı için name ve date değişkenlerini tanımlayıp kullanamam
    - Kalıtım , birden fazla classlar içerisinde tanımlamamıza engel
    olup daha iyi bir gruplama yapmamızı sağlar.
    */

   /*
   ak47 ak;
   Cons ve dist çalışma sırası farklı sırayla yürütülmektedir . Nereden
   kalıtım alınıyorsa ilk o oluşturulup en son o bitirilir .
        ->GUN yep
        ->ak47 yep
        ->ak47 nope
        ->GUN nope
   */

    /*
    ak47    ak;
    pistol  ps;
    sniper  snp;
    snp.shot();
    //Burada pistol class'ının içerisinde shot() metotu olmadığı için
        //mirasını aldığı class'ın shot() metotunu kullanır.
    std::cout << "----------------------" << std::endl;
    which_shot(&ak);
    //virtual doğru kullanımı
    std::cout << "----------------------" << std::endl;
    which_shot(&ps);
    */

}