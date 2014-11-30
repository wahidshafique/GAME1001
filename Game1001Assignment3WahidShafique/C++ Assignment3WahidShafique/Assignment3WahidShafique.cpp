#include <cmath>
const double G = 9.8;
double positionUnderGravity(double v, double t) {
	double height = -0.5 * G * pow(t, 2) + v * t;

	return height;

}

void positionUnderGravityByRef(double v, double t, double& y) {

	y = -0.5 * G * pow(t, 2) + v * t;

}

void positionUnderCircularMotion(double t, double& x, double& y){
	x = 20 + 10 * cos(t);
	y = 20 + 10 * sin(t);

}
