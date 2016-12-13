#ifndef SLMUSA_GLOBAL_H
#define SLMUSA_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SLMUSA_LIBRARY)
#  define SLMUSASHARED_EXPORT Q_DECL_EXPORT
#else
#  define SLMUSASHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SLMUSA_GLOBAL_H
