

/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
 * Copyright (c) 1999 Apple Computer, Inc.  All rights reserved.
 *
 * HISTORY
 *
 */

#ifndef _OS_OSTYPES_H
#define _OS_OSTYPES_H

typedef unsigned int 	   UInt;
typedef signed int         SInt;

#ifndef __MACTYPES__	/* CF MacTypes.h */
#ifndef __TYPES__	/* guess... Mac Types.h */

typedef unsigned char 	   UInt8;
typedef unsigned short 	   UInt16;
typedef unsigned long 	   UInt32;
typedef unsigned long long UInt64;
#if		defined(__BIG_ENDIAN__)
typedef	struct UnsignedWide {
			UInt32		hi;
			UInt32		lo;
}							UnsignedWide;
#elif		defined(__LITTLE_ENDIAN__)
typedef	struct UnsignedWide {
			UInt32		lo;
			UInt32		hi;
}							UnsignedWide;
#else
#error Unknown endianess.
#endif

typedef signed char 	   SInt8;
typedef signed short 	   SInt16;
typedef signed long 	   SInt32;
typedef signed long long   SInt64;
#if		defined(__BIG_ENDIAN__)
typedef	struct wide {
			SInt32		hi;
			UInt32		lo;
}							wide;
#elif		defined(__LITTLE_ENDIAN__)
typedef	struct wide {
			UInt32		lo;
			SInt32		hi;
}							wide;
#else
#error Unknown endianess.
#endif

typedef SInt32				OSStatus;
typedef UnsignedWide		AbsoluteTime;
typedef UInt32				OptionBits;

typedef unsigned char Boolean;

#endif /* __TYPES__ */
#endif /* __MACTYPES__ */

#endif /* _OS_OSTYPES_H */

