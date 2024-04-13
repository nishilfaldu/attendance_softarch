// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the ATTENDNACEREPO_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// ATTENDNACEREPO_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ATTENDNACEREPO_EXPORTS
#define ATTENDNACEREPO_API __declspec(dllexport)
#else
#define ATTENDNACEREPO_API __declspec(dllimport)
#endif

// This class is exported from the dll
class ATTENDNACEREPO_API CAttendnaceRepo {
public:
	CAttendnaceRepo(void);
	// TODO: add your methods here.
};

extern ATTENDNACEREPO_API int nAttendnaceRepo;

ATTENDNACEREPO_API int fnAttendnaceRepo(void);

ATTENDNACEREPO_API int testMe(int);
