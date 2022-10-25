/* Automatically generated header (sfdc 1.11)! Do not edit! */

#ifndef PROTO_REALTIME_H
#define PROTO_REALTIME_H

#include <clib/realtime_protos.h>

#ifndef _NO_INLINE
# if defined(__GNUC__)
#  ifdef __AROS__
#   include <defines/realtime.h>
#  else
#   include <inline/realtime.h>
#  endif
# else
#  include <pragmas/realtime_pragmas.h>
# endif
#endif /* _NO_INLINE */

#ifdef __amigaos4__
# include <interfaces/realtime.h>
# ifndef __NOGLOBALIFACE__
   extern struct RealTimeIFace *IRealTime;
# endif /* __NOGLOBALIFACE__*/
#endif /* !__amigaos4__ */
#ifndef __NOLIBBASE__
  extern struct RealTimeBase *
# ifdef __CONSTLIBBASEDECL__
   __CONSTLIBBASEDECL__
# endif /* __CONSTLIBBASEDECL__ */
  RealTimeBase;
#endif /* !__NOLIBBASE__ */

#endif /* !PROTO_REALTIME_H */
