#ifndef COMPLEXO_H
#define COMPLEXO_H

class complexo {
 private:
 int a;
 int b;

 public:
//construtores
 complexo();
 complexo(int a, int b);

 //sobrecarga de operadores 
 complexo& operator+ (complexo const &c);
 complexo& operator- (complexo const &c);
 complexo& operator* (complexo const &c);
 complexo& operator! ();
};

#endif