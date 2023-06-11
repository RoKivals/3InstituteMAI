#include "../Linear_Equation_GUI/Tools.h"

//ѕроверка строки на соответствие числу
bool FromDigits(System::String^ str)
{
    for (int i = 0; i < str->Length; i++)
        if (!Char::IsDigit(str[i]))
            return false;
    return true;
}