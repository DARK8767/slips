#include<iostream>
using namespace std;
class Cylinder 
{
    private:
        float radius;
        float height;

    public:
        void setradius(float r) 
        {
            radius = r;
        }

        void setheight(float h) {
            height = h;
        }

        float volume() {
            return 3.14 * radius * radius * height;
        }
};

int main(void)
{
    Cylinder c;
    float r, h;

    cout << "Enter the radius of the cylinder: ";
    cin >> r;
    c.setradius(r);

    cout << "Enter the height of the cylinder: ";
    cin >> h;
    c.setheight(h);
    cout << "The volume of the cylinder is: " << c.volume() << endl;
}
