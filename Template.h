#ifndef TEMPLATE_H_INCLUDED
#define TEMPLATE_H_INCLUDED

//18) template class
 template<class T,int num> class Template
 {
 private:
 T values[num];

 public:
 T& operator [](int index)
 {
 return values[index];
 }

 T& first()
 {
 return values[0];
 }

 T& last()
 {
 return values[num];
 }
 };
#endif
