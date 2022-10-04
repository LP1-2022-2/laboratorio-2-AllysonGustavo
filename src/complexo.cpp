#include <complexo.h>

complexo& complexo::operator+ (complexo const &c) {
 int real;
 int imaginario;

 real = a+c.a;
 imaginario = b+c.b;
 
 return complexo(real,imaginario);
}
