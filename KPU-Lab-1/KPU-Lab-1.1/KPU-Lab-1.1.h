// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the KPULAB11_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// KPULAB11_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef KPULAB11_EXPORTS
#define KPULAB11_API __declspec(dllexport)
#else
#define KPULAB11_API __declspec(dllimport)
#endif
#include <string>

// This class is exported from the KPU-Lab-1.1.dll
class KPULAB11_API CKPULab11 {
public:
	CKPULab11(void);
	// TODO: add your methods here.
};

extern KPULAB11_API int nKPULab11;

extern "C" KPULAB11_API int AddNum(int,int);
extern "C" KPULAB11_API char* AddChar(char*, char*);
KPULAB11_API std::string AddString(std::string, std::string);