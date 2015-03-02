#include <math.h>

double dv(double v){
    double densx = 1.03e-3, densar = 1.25e-6, grav = 9.78e3, raio = 2.5, r = 1.7, b = 420.;
    return grav*(densx-densar)/densar - b*pow(v,r)/(4.*M_PI*pow(raio,3.)*densar/3.);
}
