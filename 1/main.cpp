
#include <iostream>

using namespace std;

class Figure{
protected:
    int sides_count;
    int a = 0;
    string name = "Фигура";
    string name_count;
public:
    Figure(){
        sides_count = a;
        name_count = name;
    }
    void get_sides_count(){
        cout << name_count << ": " << sides_count << endl;
    }
};

class Triangle:public Figure{
    int a = 3;
    string name = "Триугольник";
public: 
    Triangle(){
        sides_count = a;
        name_count = name;
    }
};

class Quadrangle:public Figure{
    int a = 4;
    string name = "Квадрат";
public: 
    Quadrangle(){
        sides_count = a;
        name_count = name;
    }
};

int main()
{
    cout<<"Количество сторон:"<<endl;
    Figure f;
    f.get_sides_count();
    Triangle t;
    t.get_sides_count();
    Quadrangle q;
    q.get_sides_count();
    return 0;
}