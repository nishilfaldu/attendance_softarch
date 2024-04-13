// AttendnaceRepo.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "AttendnaceRepo.h"


// This is an example of an exported variable
ATTENDNACEREPO_API int nAttendnaceRepo=0;

// This is an example of an exported function.
ATTENDNACEREPO_API int fnAttendnaceRepo(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CAttendnaceRepo::CAttendnaceRepo()
{
    return;
}
ATTENDNACEREPO_API int testMe(int i) {
    return i + i;

}