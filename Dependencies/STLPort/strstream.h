/*
 * Copyright (c) 1999 
 * Boris Fomitchev
 *
 * This material is provided "as is", with absolutely no warranty expressed
 * or implied. Any use is at your own risk.
 *
 * Permission to use or copy this software for any purpose is hereby granted 
 * without fee, provided the above notices are retained on all copies.
 * Permission to modify the code and to distribute modified code is granted,
 * provided the above notices are retained, and a notice that the code was
 * modified is included with the above copyright notice.
 *
 */

#ifdef _STLP_USE_PRAGMA_ONCE
#pragma once	// JKMCD should speed up compile times.
#endif

#ifndef _STLP_STRSTREAM_H
# define _STLP_STRSTREAM_H

# ifndef _STLP_OUTERMOST_HEADER_ID
#  define _STLP_OUTERMOST_HEADER_ID 0x2071
#  include <stl/_prolog.h>
# endif

# if defined ( _STLP_USE_NEW_IOSTREAMS )

// fbp - if we are going to use that consistently, let's do it
#ifdef __BORLANDC__
#  include <strstream.>
#else
#  include <strstream>
#endif

# include  <iostream.h>


# ifndef _STLP_HAS_NO_NAMESPACES

#  ifdef _STLP_BROKEN_USING_DIRECTIVE

using namespace _STLP_STD;

#  else

using _STLP_STD::strstreambuf;
using _STLP_STD::istrstream;
using _STLP_STD::ostrstream;
using _STLP_STD::strstream;

#  endif /* _STLP_BROKEN_USING_DIRECTIVE */

# endif /* _STLP_HAS_NO_NAMESPACES */

# else


// just include old-style strstream.h
#  if defined (_MSC_VER) && (_MSC_VER <= 1200)
#   include _STLP_NATIVE_OLD_STREAMS_HEADER(strstrea.h)
#  else
#   include _STLP_NATIVE_OLD_STREAMS_HEADER(strstream.h)
#  endif

# endif

# if (_STLP_OUTERMOST_HEADER_ID == 0x2071)
#  include <stl/_epilog.h>
#  undef _STLP_OUTERMOST_HEADER_ID
# endif

#endif /* _STLP_STRSTREAM_H */

// Local Variables:
// mode:C++
// End:

