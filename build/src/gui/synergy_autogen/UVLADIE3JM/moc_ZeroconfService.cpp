/****************************************************************************
** Meta object code from reading C++ file 'ZeroconfService.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/ZeroconfService.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZeroconfService.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZeroconfService_t {
    QByteArrayData data[9];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZeroconfService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZeroconfService_t qt_meta_stringdata_ZeroconfService = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ZeroconfService"
QT_MOC_LITERAL(1, 16, 14), // "serverDetected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21), // "QList<ZeroconfRecord>"
QT_MOC_LITERAL(4, 54, 4), // "list"
QT_MOC_LITERAL(5, 59, 14), // "clientDetected"
QT_MOC_LITERAL(6, 74, 11), // "errorHandle"
QT_MOC_LITERAL(7, 86, 19), // "DNSServiceErrorType"
QT_MOC_LITERAL(8, 106, 9) // "errorCode"

    },
    "ZeroconfService\0serverDetected\0\0"
    "QList<ZeroconfRecord>\0list\0clientDetected\0"
    "errorHandle\0DNSServiceErrorType\0"
    "errorCode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZeroconfService[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    1,   32,    2, 0x08 /* Private */,
       6,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void ZeroconfService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZeroconfService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serverDetected((*reinterpret_cast< const QList<ZeroconfRecord>(*)>(_a[1]))); break;
        case 1: _t->clientDetected((*reinterpret_cast< const QList<ZeroconfRecord>(*)>(_a[1]))); break;
        case 2: _t->errorHandle((*reinterpret_cast< DNSServiceErrorType(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ZeroconfRecord> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ZeroconfRecord> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ZeroconfService::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ZeroconfService.data,
    qt_meta_data_ZeroconfService,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZeroconfService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZeroconfService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZeroconfService.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ZeroconfService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
