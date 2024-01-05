#include <Windows.h>
#include <iostream>
#include <thread>
#include <TlHelp32.h>
#include "structures.h"
#include "uc.h"


class _driver
{
	HANDLE driverHandler = nullptr; // driver object

public:


	int __fastcall mouse_event(int a1,  int a2, int buttons)
	{
		DWORD BytesReturned; // [rsp+40h] [rbp-58h] BYREF
		//__int64 InBuffer; // [rsp+48h] [rbp-50h] BYREF
		__int64 v5; // [rsp+58h] [rbp-40h]
		__int64 pvParam; // [rsp+60h] [rbp-38h] BYREF
		int v7; // [rsp+68h] [rbp-30h]
		__int64 v8; // [rsp+70h] [rbp-28h] BYREF
		int v9; // [rsp+78h] [rbp-20h]

		
	/*	InBuffer = 0i64;*/
		MOUSE_MOVE_DATA InBuffer = { 0 ,buttons,0,a1,a2, 0 };
		v5 = a2;
		pvParam = 0i64;
		BytesReturned = 0;
		v7 = 0;
		v8 = 0i64;
		v9 = 0;
		SystemParametersInfoW(3u, 0, &pvParam, 0);
		SystemParametersInfoW(4u, 0, &v8, 0);
		return DeviceIoControl(driverHandler, 0x9C403C0C, &InBuffer, 0x18u, 0i64, 0, &BytesReturned, 0i64);
		SystemParametersInfoW(4u, 0, &pvParam, 0);
	}
	
	inline void initdriver()
	{
		LPCWSTR Name = L"BrazilOnTop";
		HANDLE InBuffer = CreateEventW(0i64, 1, 0, Name);
		char DriverName[] = "\x5c\x5c\x2e\x5c\x64\x64\x33\x32\x36\x39\x35";
		driverHandler = CreateFileA(
			DriverName,
			GENERIC_READ | GENERIC_WRITE,
			0,
			nullptr,
			OPEN_EXISTING,
			FILE_ATTRIBUTE_NORMAL,
			nullptr
		);
		DWORD BytesReturned = 0;
		DeviceIoControl(driverHandler, 0x2224A0u, &InBuffer, 0xA8u, 0i64, 0, &BytesReturned, 0i64);

		ULONGLONG OutBuffer = 0i64;
		DeviceIoControl(driverHandler, 0x2224A4u, 0i64, 0, &OutBuffer, 0x44u, &BytesReturned, 0i64);
	}
	
};
inline _driver driver;


