#ifndef QTE5QML_GLOBAL_H
#define QTE5QML_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTE5QML_LIBRARY)
#  define QTE5QMLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTE5QMLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTE5QML_GLOBAL_H
