#include <iostream>
#include <string>

using namespace std;

float s(float v, float a, float t);

int main()
{
	float vi;
	float ac;
	float tm;
    
    cout << "Enter the initial velocity: "; 
	cin >> vi;
    cout << "Enter the acceleration: "; 
	cin >> ac;
    cout << "Enter the time: "; 
	cin >> tm;
    
    cout << "The distance covered is " << s(vi, ac, tm) << endl;

	return 0;
}

float s(float v, float a, float t)
{
    float distance ;
    distance = ((v*t)+(1/2*(a*t*t))) ;
    return distance;
}
