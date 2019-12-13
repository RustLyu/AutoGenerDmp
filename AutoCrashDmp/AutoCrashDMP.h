#ifndef AUTO_CRASH_DMP_H
#define AUTO_CRASH_DMP_H

#include <iostream>
#include <windows.h>
#include <string>
#include <imagehlp.h>

// ref  https://blog.csdn.net/hlday6/article/details/84646604

inline BOOL IsDataSectionNeeded(const WCHAR* pModuleName);

inline BOOL CALLBACK MiniDumpCallback(PVOID pParam, const PMINIDUMP_CALLBACK_INPUT pInput, PMINIDUMP_CALLBACK_OUTPUT pOutput);

inline void CreateMiniDump(EXCEPTION_POINTERS* pep, LPCTSTR strFileName);

LONG WINAPI GPTUnhandledExceptionFilter(PEXCEPTION_POINTERS pExceptionInfo);

#endif // AUTO_CRASH_DMP_H