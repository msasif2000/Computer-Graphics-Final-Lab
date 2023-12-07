#include<bits/stdc++.h>
#define lli long long int
#define dl double
#define pi 2*acos(0.0)
#define Min 10000000
#define Max -10000000
using namespace std;

void rotatePoint(double& x, double& y, double cx, double cy, double theta)
{

    x -= cx;
    y -= cy;

    double radians = (pi/ 180) * theta;

    double newX = x * cos(radians) - y * sin(radians);
    double newY = x * sin(radians) + y * cos(radians);

    x = newX + cx;
    y = newY + cy;
}
int main()
{
    double originalX, originalY, rotationAngle;
    double centerX, centerY ;

    cout<<"Enter origin: "<<endl;
    cin>>originalX>> originalY;

    cout<<"Enter center: "<<endl;
    cin>>centerX>> centerY;
    cout<<"Rotation Angle: "<<endl;
    cin>>rotationAngle;
    cout << "Original Point: (" << originalX << ", " << originalY << ")\n";

    rotatePoint(originalX, originalY, centerX, centerY, rotationAngle);

    cout << "Rotated Point: (" << originalX << ", " << originalY << ")\n";
    return 0;
}

