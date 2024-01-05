#pragma once
#include <atlbase.h>
#include <atlconv.h>

typedef struct _MOUSE_MOVE_DATA {
	LONG _nop;
	LONG buttonflags;
	LONG ___nop;
	LONG movex;
	LONG movey;
	LONG ____nop;
} MOUSE_MOVE_DATA, * PMOUSE_MOVE_DATA;
typedef struct _AUTH {
	LONG _nop;
	LONG __nop;
	LONG ___nop;
	LONG ____nop;
	LONG _____nop;
} AUTH_DATA, * PAUTH_DATA;
