#ifndef LUKONAVAUS_GLOBAL_H
#define LUKONAVAUS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LUKONAVAUS_LIBRARY)
#  define LUKONAVAUSSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LUKONAVAUSSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LUKONAVAUS_GLOBAL_H
