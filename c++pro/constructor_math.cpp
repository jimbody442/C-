#include <iostream>

using namespace std;

class Point {        
private:                
    double x;      
    double y;



public:                 
    Point(double pos_x, double pos_y)
    {
        x = pos_x;
        y = pos_y;
    }

    double posistion_x()
    {
        return x;
    }

    double posistion_y()
    {
        return y;
    }

    void print_pointer()
    {
        cout << "(x:" << x << "/y:" << y << ")" << endl;
    }


};

class Geometry {            // Ŭ����2 Gemetry�̸��� Ŭ����.
public:
    Geometry() {            //�⺻ ������.
        num_points = 0;
    }

    void AddPoint(const Point& point) {             //Addpoint �Լ��� �ּҷ� �Ű������� �޴´�.
        point_array[num_points++] = new Point(point.x, point.y);
    }

    // ��� ���� ���� �Ÿ��� ����ϴ� �Լ� �Դϴ�.
    void PrintDistance();                   

    // ��� ������ �մ� ������ ���� ������ ���� ������ִ� �Լ� �Դϴ�.
    // ���������� ������ �� ���� �մ� ������ �������� f(x,y) = ax+by+c = 0
    // �̶�� �� �� ������ �ٸ� �� �� (x1, y1) �� (x2, y2) �� f(x,y)=0 �� ��������
    // ���� �ٸ� �κп� ���� ������ f(x1, y1) * f(x2, y2) <= 0 �̸� �˴ϴ�.
    void PrintNumMeets();

private:        //������ ���� ���� ����.
    // �� 100 ���� �����ϴ� �迭.
    Point* point_array[100];
    int num_points;
};