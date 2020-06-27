#include <iostream>
#include <cmath>

using namespace std;



class vector2D
{
private:
    float x, y;

public:
    vector2D(float x_const, float y_const)
    {
        x = x_const;
        y = y_const;
    }
    
    float calculaModulo()
    {
        return sqrt(x * x + y * y);
    }
};

int main()
{

    vector2D v(3.0, 4.0);

    cout << v.calculaModulo() << endl;

    return 0;
}