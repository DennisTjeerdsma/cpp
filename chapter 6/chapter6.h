#ifndef chapter_6_h
#define chapter_6_h

int fact(int val);
int func();

template <typename T>
T abs(T i)
{
  return i >= 0 ? i: -1;
}

#endif
