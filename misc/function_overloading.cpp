// FUNCTION OVERLOADING
#include <bits/stdc++.h>
using namespace std;

class Shape
{

    int r1, h, a;
    float r;

public:
    float volume(int r1, int h);
    int volume(int a);
    float volume(float r);
};

float Shape::volume(int r1, int h)
{
    return (3.14 * r1 * r1 * h);
}

int Shape::volume(int a)
{
    return (a * a * a);
}

float Shape::volume(float r)
{
    return ((4 * 3.14 * r * r * r) / 3);
}

int main()
{
    int cyl_height, cyl_radius, cube_side;
    float sph_radius;
    Shape s;
    int ch;
    while (1)
    {
        cout << "\n1.Cylinder\n2.Cube\n3.Sphere\n4.Exit\nEnter the choice\n"
             << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the radius and height of the cylinder\n";
            cin >> cyl_radius >> cyl_height;
            cout << "Volume of cylinder=" << s.volume(cyl_radius, cyl_height);
            break;
        case 2:
            cout << "Enter the side of cube\n";
            cin >> cube_side;
            cout << "Volume of cube=" << s.volume(cube_side);
            break;
        case 3:
            cout << "Enter the radius of sphere\n";
            cin >> sph_radius;
            cout << "Volume of sphere=" << s.volume(sph_radius);
            break;
        case 4:
            exit(0);
        default:
            break;
        }
    }

    return 0;
}