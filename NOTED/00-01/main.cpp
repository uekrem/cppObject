#include "main.h"

class   student {
    public:
        std::string  name;
        static int  studentCount;
        //static bir değişken oluşturuldu

        void    tellName(){
            std::cout << "Ogrenci Adi: " << name << std::endl;
        }
         //Burada metotlar olusturup , her objenin kendine has metotu tanımlanır
        student(){
            student::studentCount++;
        }
};
//Burada her olusturacagimiz objenin ozellikleri verilir.

int student::studentCount = 0;
//static değişkenlere class dışarısında atama yapılmaktadır .
//static değişken nesneye özgü değil class'a özgü değişkendir .

class point{
    public:
        std::string *str;
        int         *i;

    point(std::string str, int ivalue){
        this->str = new std::string;
        this->i = new int;
        *this->str = str;
        *i = ivalue;
    }
    ~point(){
        delete point::str;
        delete point::i;
        std::cout << "Silindi" << std::endl;
    }
    void    show(){
        std::cout << *str << std::endl;
        std::cout << *i << std::endl;
    }
};

int main()
{


    //-----COUT-----
    /*
    cout << "Hello World" << endl;
    cout << "Sus Kanka" << endl; 
    // cout konsola yazdıram işlemlerinde //endl sonuna '\n' koyabilmek için kullanıldı;

    int a;  
    a = 5;
    cout << "A sayisinin degeri:" << a << endl;
    // Degeri yazdirma
    */


    //-----CIN-----
    /*
    int x, y, z;
    cout << "Sayi Giriniz:";
    cin >> x;
    //cin ile birlikte disaridan deger alma
    cout << "x sayi Degeri:" << x << endl;

    cout << "2 sayi Giriniz:" << endl;
    cin >> y >> z;
    //cin ile ardıardına disaridan deger alma (aralarında bosluk olduguna dikkat edilmel,)
    cout << "y ve z degerleri:" << y << " "<< z << endl;
    */


    //-----STRING-----
    /*
    string  str1 = "harun utku ekrem";
    cout << str1 << endl;
    //metinleri tutmamızı saglar

    cout << "String degeri girin:" << endl;
    cin >> str1;
    cout << "Yazilan Metin: " << str1;
    //Girilen metin bosluklarla ayrildigi taktirde bosluktan sonrasi alınmaz
    */


    //-----CLASS-----
    /*
    student student1, student2;
    student1.name = "betul ekrem";
    student2.name = "utku ekrem";
    cout<<student1.name<<endl;
    //Burada classımızdan bir obje olusturmus olduk.
    student1.tellName();
    student2.tellName();
    //Her objenin kendine ait metotları olusturulup , çagrilabildi .
    */


   //-----IMPLEMENTATION-----
    /*(Header dosyasindakiler onemli - incele)
    user user1, user2;
    user1.id = 1;
    user1.name = "fatima ekrem";
    user2.name = "ekrem ekrem";
    user2.id = 2;
    user1.showInfo();
    user2.showInfo();
    */


    //-----PRIVATE-----
    /*user2   pric;
    pric.setName("Harun Utku Ekrem");
    pric.getName();*/


    //-----Constructor-----
    /*user2   kullanici("Harun Utku Ekrem", 39);
    kullanici.getName();
    kullanici.getId();*/
    //Obje oluşturulurken atama yapabiliyor 
    
    
    //-----thisPointer-----
    //(HEADER dosyasını incele (usr2 CLASS))


    //-----DESTRUCTOR-----
    /* user2   admin;
    //Sınıfın nesnesini stack bellekte (otomatik olarak) oluşturuyorsanız, nesne bu bloğun kapsamını terk ettiğinde (kapsam dışına çıktığında) yıkıcı otomatik olarak çağrılacaktır. 
    //Bu durumda, nesneyi açıkça delete kullanarak silmeniz gerekmez, çünkü C++ bunu otomatik olarak yapar.
        user bet1;
        //Otomatik DESTRUCTOR çağrılır.

        user *bet2 = new user();
        delete bet2;
        //Otomatik DESTRUCTOR çağrılmaz . delete kullaılmalıdır . 
        //(Yokedilebilmesi için)
    */

   //-----POINTER-----
   /*
        (Fonksiyonlarda)
        Kullanım nedeni fonksiyona gönderilen nesnenin (class) tekrardan RAM'de kopyası
        oluşmaması için kullanılır . Pointer sadece kendi ayırdığı yer dışında class'ı işaret
        ederek RAM'dan tasarruf etmemizi sağlar .
        
        (Dinamik olarak değişken oluşturma)
        user *utku = new user();
        utku->name = "utku";
        utku->showInfo();
   
        (Dinamik olarak değişken oluşturma ve değer atama)
        point *p = new point("utku", 15);
        p->show();
        delete p;

        (integer değer dizisi tanumlama)
        int size = 5;
        int *ptr = new int[size];
        delete [] ptr;
   */

  //-----REFERANCE-----
  /*    referanslar pointer gibi kullanılmaktadır . Ancak en önemli
        farkları referanslar adres tutmayıp sadece değer tutar . Ayrıca
        referanslar oluşturulurken değer ataması yapılmalıdır . Tanımlama
        sonrası herhangi bir sayının değerini tutamaz .
        NOT Fonksiyon parametresinde de değiken olarak tanımlanabilir .
        ( void   ft_function(int &ref) )

        int a = 5;
        int &ref = a;
        (TRUE)
        int a = 5;
        int &ref;
        ref = a;
        (FALSE)
  */

  //-----STATIC CLASS-----
    /*
    student ogr1;
    student ogr2;
    student ogr3;
    std::cout << student::studentCount << std::endl;
    Burada class'ın içerisinde bulunan static değişkenler her objeye
    özgü değil class yapısına özgü bir değişken olmuş oluyor . Her 
    nesnenin ortak bir değişkeni olmuş olur .
    */

   //-----CONST-----
    /*
    const cst  one;
    one.seta(5);
    Burada böyle bir tanımlama olamaz . (FALSE) .Tanımlama işleminden sonra
    değer ataması yapılamaz çünkü değiştirilemez .

    const cst  one(10);
    std::cout << one.geta() << std::endl;
    Const değişkenler const tanımlanmış metotları çağırıp kullanabilir . Const olmadığı 
    sürece metotları kullanamaz

    cst two;
    std::cout << two.geta() << std::endl;
    Burada const olmayan bir değişken const metodunu kullanabilir .
    */
}