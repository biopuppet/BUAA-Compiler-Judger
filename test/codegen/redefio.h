#ifndef __C0C_REDEF_IO_H__
#define __C0C_REDEF_IO_H__

#include <cstdarg>
#include <iostream>

namespace redefio {

inline void printf(int exp)
{
    std::printf("%d\n", exp);
}
inline void printf(char exp)
{
    std::printf("%c\n", exp);
}
inline void printf(const char *str)
{
    std::printf("%s\n", str);
}
inline void printf(const char *str, int exp)
{
    std::printf("%s%d\n", str, exp);
}
inline void printf(const char *str, char exp)
{
    std::printf("%s%c\n", str, exp);
}
// Type matching trade-off...
inline void scanf(int &arg1)
{
    std::cin >> arg1;
}
inline void scanf(char &arg1)
{
    std::cin >> arg1;
}
inline void scanf(int &arg1, int &arg2)
{
    std::cin >> arg1 >> arg2;
}
inline void scanf(char &arg1, int &arg2)
{
    std::cin >> arg1 >> arg2;
}
inline void scanf(int &arg1, char &arg2)
{
    std::cin >> arg1 >> arg2;
}
inline void scanf(char &arg1, char &arg2)
{
    std::cin >> arg1 >> arg2;
}
inline void scanf(int &arg1, int &arg2, int &arg3)
{
    std::cin >> arg1 >> arg2 >> arg3;
}
inline void scanf(char &arg1, int &arg2, int &arg3)
{
    std::cin >> arg1 >> arg2 >> arg3;
}
inline void scanf(int &arg1, char &arg2, int &arg3)
{
    std::cin >> arg1 >> arg2 >> arg3;
}
inline void scanf(char &arg1, char &arg2, int &arg3)
{
    std::cin >> arg1 >> arg2 >> arg3;
}
inline void scanf(int &arg1, int &arg2, char &arg3)
{
    std::cin >> arg1 >> arg2 >> arg3;
}
inline void scanf(char &arg1, int &arg2, char &arg3)
{
    std::cin >> arg1 >> arg2 >> arg3;
}
inline void scanf(int &arg1, char &arg2, char &arg3)
{
    std::cin >> arg1 >> arg2 >> arg3;
}
inline void scanf(char &arg1, char &arg2, char &arg3)
{
    std::cin >> arg1 >> arg2 >> arg3;
}
inline void scanf(int &arg1, int &arg2, int &arg3, int &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(char &arg1, int &arg2, int &arg3, int &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(int &arg1, char &arg2, int &arg3, int &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(char &arg1, char &arg2, int &arg3, int &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(int &arg1, int &arg2, char &arg3, int &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(char &arg1, int &arg2, char &arg3, int &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(int &arg1, char &arg2, char &arg3, int &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(char &arg1, char &arg2, char &arg3, int &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(int &arg1, int &arg2, int &arg3, char &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(char &arg1, int &arg2, int &arg3, char &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(int &arg1, char &arg2, int &arg3, char &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(char &arg1, char &arg2, int &arg3, char &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(int &arg1, int &arg2, char &arg3, char &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(char &arg1, int &arg2, char &arg3, char &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(int &arg1, char &arg2, char &arg3, char &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(char &arg1, char &arg2, char &arg3, char &arg4)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
}
inline void scanf(int &arg1, int &arg2, int &arg3, int &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, int &arg2, int &arg3, int &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(int &arg1, char &arg2, int &arg3, int &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, char &arg2, int &arg3, int &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(int &arg1, int &arg2, char &arg3, int &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, int &arg2, char &arg3, int &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(int &arg1, char &arg2, char &arg3, int &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, char &arg2, char &arg3, int &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(int &arg1, int &arg2, int &arg3, char &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, int &arg2, int &arg3, char &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(int &arg1, char &arg2, int &arg3, char &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, char &arg2, int &arg3, char &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(int &arg1, int &arg2, char &arg3, char &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, int &arg2, char &arg3, char &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(int &arg1, char &arg2, char &arg3, char &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, char &arg2, char &arg3, char &arg4, int &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(int &arg1, int &arg2, int &arg3, int &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, int &arg2, int &arg3, int &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(int &arg1, char &arg2, int &arg3, int &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, char &arg2, int &arg3, int &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(int &arg1, int &arg2, char &arg3, int &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, int &arg2, char &arg3, int &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(int &arg1, char &arg2, char &arg3, int &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, char &arg2, char &arg3, int &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(int &arg1, int &arg2, int &arg3, char &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, int &arg2, int &arg3, char &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(int &arg1, char &arg2, int &arg3, char &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, char &arg2, int &arg3, char &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(int &arg1, int &arg2, char &arg3, char &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, int &arg2, char &arg3, char &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(int &arg1, char &arg2, char &arg3, char &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void scanf(char &arg1, char &arg2, char &arg3, char &arg4, char &arg5)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5;
}
inline void
scanf(int &arg1, int &arg2, int &arg3, int &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, int &arg3, int &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, int &arg3, int &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, int &arg3, int &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, int &arg2, char &arg3, int &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, char &arg3, int &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, char &arg3, int &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, char &arg3, int &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, int &arg2, int &arg3, char &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, int &arg3, char &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, int &arg3, char &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, int &arg3, char &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, int &arg2, char &arg3, char &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, char &arg3, char &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, char &arg3, char &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, char &arg3, char &arg4, int &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, int &arg2, int &arg3, int &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, int &arg3, int &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, int &arg3, int &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, int &arg3, int &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, int &arg2, char &arg3, int &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, char &arg3, int &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, char &arg3, int &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, char &arg3, int &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, int &arg2, int &arg3, char &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, int &arg3, char &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, int &arg3, char &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, int &arg3, char &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, int &arg2, char &arg3, char &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, char &arg3, char &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, char &arg3, char &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, char &arg3, char &arg4, char &arg5, int &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, int &arg2, int &arg3, int &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, int &arg3, int &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, int &arg3, int &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, int &arg3, int &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, int &arg2, char &arg3, int &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, char &arg3, int &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, char &arg3, int &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, char &arg3, int &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, int &arg2, int &arg3, char &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, int &arg3, char &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, int &arg3, char &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, int &arg3, char &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, int &arg2, char &arg3, char &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, char &arg3, char &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, char &arg3, char &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, char &arg3, char &arg4, int &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, int &arg2, int &arg3, int &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, int &arg3, int &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, int &arg3, int &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, int &arg3, int &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, int &arg2, char &arg3, int &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, char &arg3, int &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, char &arg3, int &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, char &arg3, int &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, int &arg2, int &arg3, char &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, int &arg3, char &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, int &arg3, char &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, int &arg3, char &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, int &arg2, char &arg3, char &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, int &arg2, char &arg3, char &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(int &arg1, char &arg2, char &arg3, char &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void
scanf(char &arg1, char &arg2, char &arg3, char &arg4, char &arg5, char &arg6)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  int &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  int &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  int &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  int &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  int &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  int &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  int &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  int &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(int &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}
inline void scanf(char &arg1,
                  char &arg2,
                  char &arg3,
                  char &arg4,
                  char &arg5,
                  char &arg6,
                  char &arg7,
                  char &arg8,
                  char &arg9)
{
    std::cin >> arg1 >> arg2 >> arg3 >> arg4 >> arg5 >> arg6 >> arg7 >> arg8 >>
        arg9;
}

}  // namespace redefio

using namespace redefio;
#define printf redefio::printf

#endif  // !__C0C_REDEF_IO__