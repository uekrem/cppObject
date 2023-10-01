#include "main.hpp"

int main()
{
    /*
    Old o1;
    Old o2;
    o2 = o1;
    //Burada oluşturulan operator= metodu miras aldığı
        //class içerisinde ki operator= tetiklemez
    //Bundan dolayı operator= çağrılan mirasçının içinde 
        //ayrı bir şekilde miras aldığı class'ın aoperator=
            //cagrilmali
    */

    /*
    Base2   *ptr;
    Old2    o2;
    ptr = &o2;
    ptr.ft_screw(); (FALSE)
    //Miras aldığı class türüne atandığı zaman mirasçısından aldığı
        //metotları kullanabilir . Kendi yapısının içerisinde ki
            //metot erişilemez.
    */

    /*
    Old3    r;
    Base3   ptr;
    //Burada pointersız atama işlemi yapıldığında içerisindeki değerler değiştirilir
        //O yuzden dolayı kayıp olmaz ve polymorp yaşanmaz .
    r.c = 5;
    ptr = r; 
    ptr.ft_print();
    ptr.ft_show();
    */

   /*
    // Old3    r(3);
    // Old3    rr;
    // rr = r; 
    // std::cout << rr.base_int << std::endl;
    // std::cout << rr.old_int << std::endl;
    // std::cout << r.base_int << std::endl;
    // std::cout << r.old_int << std::endl;
    Old3    r2(3);
    Old3    rr2 = r2;
    std::cout << rr2.base_int << std::endl;
    std::cout << rr2.old_int << std::endl;
    std::cout << r2.base_int << std::endl;
    std::cout << r2.old_int << std::endl;
    //overloading işlem uygulandıysa miras aldığımız değerleri artı bir
        //şekilde çağırmamız gerekir . Yoksa miras aldığımız class değerlerini
            // birbirine atayamayız.
    */
   
    /*
    Old3    r;
    Base3   *ptr;
    //Pointer kullanıldığı zaman adresini işaret ettiği için virtual kullanıl-
        //masi gerekir . Miras alınan class içerisinde ki metot ezilip kendi
            //classımız içerisinde ki metodu kullanabilelim .
    ptr = &r; 
    ptr->ft_print();
    ptr->ft_show();
    */

    
}