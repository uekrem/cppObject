#include "main.hpp"

int main()
{
    /*
    Base    b1;
    Old     o1;
    o1 = b1;    //(FALSE)
    //Miras alan class mirasını aldığı class'a atanamazken
    b1 = o1;    //(TRUE)
    //Mirasçı miras aldığı class'a eşitlenebilir.
    */

   /*
    Old2     o2;
    o2.ft_screw();  (FALSE)
    //Burada fonksiyonu kullanılabilir olduğunu göstersede
        //nesnemiz kalıtım aldığı fonksiyonuna bakarakter o
            //seçeneği sunar ancak çağırdığımız zaman hata verir
    //Çünkü çagırdığımız class içerisinde ki metot
        //private olmaktadır . Gördüğü ve çalıştırdığı aynı değil
    */

   /*
   Old2     o2;
   o2.ft_over();    (FALSE)
   //Burada hata vermesinin sebebi sınıflar arası overloading
    //işlemi çalışmamaktadır. Yani kendi class'ının içerisinde ki
        //metota göre tepki verir.
   */

    /*
    Old3    o3;
    //Burada nesnemiz miras aldığı class ile birlikte 
        //constructor'ını ve destructor'ını çağırır.
            (HPP DOSYASINI INCELE OLD3-BASE3)
    */

    /*
    Old3     o3;
    Old3    o4(o3);
    //Copy constructor hangi constructorla oluşturduğu
        //değiştirip farklı bir constructorla çağırıp 
            //oluşturduk.
    */
}