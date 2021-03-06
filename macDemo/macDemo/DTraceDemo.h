/*
 * Generated by dtrace(1M).
 */

#ifndef	_DTRACEDEMO_H
#define	_DTRACEDEMO_H

#include <unistd.h>

#ifdef	__cplusplus
extern "C" {
#endif

#define DTRACEDEMO_STABILITY "___dtrace_stability$DTraceDemo$v1$1_1_0_1_1_0_1_1_0_1_1_0_1_1_0"

#define DTRACEDEMO_TYPEDEFS "___dtrace_typedefs$DTraceDemo$v2"

#if !defined(DTRACE_PROBES_DISABLED) || !DTRACE_PROBES_DISABLED

#define	DTRACEDEMO_MALLOC_LOG(arg0, arg1) \
do { \
	__asm__ volatile(".reference " DTRACEDEMO_TYPEDEFS); \
	__dtrace_probe$DTraceDemo$malloc_log$v1$766f6964202a$73697a655f74(arg0, arg1); \
	__asm__ volatile(".reference " DTRACEDEMO_STABILITY); \
} while (0)
#define	DTRACEDEMO_MALLOC_LOG_ENABLED() \
	({ int _r = __dtrace_isenabled$DTraceDemo$malloc_log$v1(); \
		__asm__ volatile(""); \
		_r; })


extern void __dtrace_probe$DTraceDemo$malloc_log$v1$766f6964202a$73697a655f74(const void *, size_t);
extern int __dtrace_isenabled$DTraceDemo$malloc_log$v1(void);

#else

#define	DTRACEDEMO_MALLOC_LOG(arg0, arg1) \
do { \
	} while (0)
#define	DTRACEDEMO_MALLOC_LOG_ENABLED() (0)

#endif /* !defined(DTRACE_PROBES_DISABLED) || !DTRACE_PROBES_DISABLED */


#ifdef	__cplusplus
}
#endif

#endif	/* _DTRACEDEMO_H */
