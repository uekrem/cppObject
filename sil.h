#ifndef SIL_H
# define SIL_H

#include <iostream>
using namespace std;

class student
{
    public:
        string  name;
        int     no;
        void    getno();
};

class car
{
    private:
        string  model;
        int     year;
        int     age;
    public:
        void    setmodel(string input)
        {
            model = input;
        }
        void    getmodel()
        {
            cout << "Nesne Modeli:" << model << endl;
        }
        void    setyear(int input);
        void    getyear();
        void    setage(int  now_time);
        void    getage();
};

class math
{
    public:
        static int  value;
        //int       value;
        static void total(int x)
        {
            cout << x + x + x << endl;
        }
        /*void total(int x)
        {
            cout << x + x + x << endl;
        }*/
};

#endif