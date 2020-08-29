/****************************************************************************
** Meta object code from reading C++ file 'LicenseManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/LicenseManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LicenseManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LicenseManager_t {
    QByteArrayData data[10];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LicenseManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LicenseManager_t qt_meta_stringdata_LicenseManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LicenseManager"
QT_MOC_LITERAL(1, 15, 16), // "serialKeyChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "SerialKey"
QT_MOC_LITERAL(4, 43, 14), // "editionChanged"
QT_MOC_LITERAL(5, 58, 7), // "Edition"
QT_MOC_LITERAL(6, 66, 10), // "beginTrial"
QT_MOC_LITERAL(7, 77, 8), // "expiring"
QT_MOC_LITERAL(8, 86, 8), // "endTrial"
QT_MOC_LITERAL(9, 95, 7) // "expired"

    },
    "LicenseManager\0serialKeyChanged\0\0"
    "SerialKey\0editionChanged\0Edition\0"
    "beginTrial\0expiring\0endTrial\0expired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LicenseManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       8,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void LicenseManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LicenseManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serialKeyChanged((*reinterpret_cast< SerialKey(*)>(_a[1]))); break;
        case 1: _t->editionChanged((*reinterpret_cast< Edition(*)>(_a[1]))); break;
        case 2: _t->beginTrial((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->endTrial((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LicenseManager::*)(SerialKey ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LicenseManager::serialKeyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LicenseManager::*)(Edition ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LicenseManager::editionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LicenseManager::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LicenseManager::beginTrial)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LicenseManager::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LicenseManager::endTrial)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LicenseManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_LicenseManager.data,
    qt_meta_data_LicenseManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LicenseManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LicenseManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LicenseManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LicenseManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void LicenseManager::serialKeyChanged(SerialKey _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< LicenseManager *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LicenseManager::editionChanged(Edition _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< LicenseManager *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LicenseManager::beginTrial(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< LicenseManager *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LicenseManager::endTrial(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< LicenseManager *>(this), &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
