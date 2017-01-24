// KPU-Lab-1.1.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "KPU-Lab-1.1.h"
#include <string>


// This is an example of an exported variable
KPULAB11_API int nKPULab11=0;

// This is an example of an exported function.
extern "C" KPULAB11_API int AddNum(int a, int b)
{
	return a + b;
}

extern "C" KPULAB11_API char* AddChar(char* a, char* b)
{
	char mychar[50];
	strcpy_s(mychar, a);
	strcat_s(mychar, b);
	return mychar;
}

extern "C" KPULAB11_API std::string AddString(std::string a, std::string b)
{
	return a + b;
}

// This is the constructor of a class that has been exported.
// see KPU-Lab-1.1.h for the class definition
CKPULab11::CKPULab11()
{
    return;
}
