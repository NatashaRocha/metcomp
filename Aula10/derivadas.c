#include <math.h>

void ds(double t, const double *s, double *ds){
	double G = 6.67e-11, M = 1.98e30;
	int i;
	for (i = 0; i <= 2; i += 2){
		ds[i] = s[i+1]; // dx/dt = vx ou dy/dt = vy (no segundo loop)
		ds[i+1] = -G*M*s[i]/pow(s[0]*s[0] + s[2]*s[2], 3./2.); // d(vx)/dt ou d(vy)/dt (no segundo loop)
	}
}