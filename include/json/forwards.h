// Copyright 2007-2010 Baptiste Lepilleur
// Distributed under MIT license, or public domain if desired and
// recognized in your jurisdiction.
// See file LICENSE for detail or copy at http://jsoncpp.sourceforge.net/LICENSE

#ifndef JSONCPP_FORWARDS_H_INCLUDED
# define JSONCPP_FORWARDS_H_INCLUDED

#if !defined(JSONCPP_IS_AMALGAMATION)
# include "config.h"
#endif // if !defined(JSONCPP_IS_AMALGAMATION)

namespace Json {

   // writer.h
   class FastWriter;
   class StyledWriter;

   // reader.h
   class Reader;

   // features.h
   class Features;

   // value.h
   typedef unsigned int ArrayIndex;
   class StaticString;
   class Path;
   class PathArgument;
   class Value;
   class ValueIteratorBase;
   class ValueIterator;
   class ValueConstIterator;
#ifdef JSONCPP_VALUE_USE_INTERNAL_MAP
   class ValueMapAllocator;
   class ValueInternalLink;
   class ValueInternalArray;
   class ValueInternalMap;
#endif // #ifdef JSONCPP_VALUE_USE_INTERNAL_MAP

} // namespace Json


#endif // JSONCPP_FORWARDS_H_INCLUDED
