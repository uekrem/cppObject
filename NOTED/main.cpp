#include "main.h"

class   student {
    public:
        std::string  name;

        void    tellName(){
            std::cout << "Ogrenci Adi: " << name << std::endl;
        }
        //Burada metotlar olusturup , her objenin kendine has metotu tanımlanır
};
//Burada her olusturacagimiz objenin ozellikleri verilir.

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
    */
}