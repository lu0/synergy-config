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
    QByteArrayData data[8];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LicenseManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LicenseManager_t qt_meta_stringdata_LicenseManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LicenseManager"
QT_MOC_LITERAL(1, 15, 14), // "editionChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "Edition"
QT_MOC_LITERAL(4, 39, 14), // "InvalidLicense"
QT_MOC_LITERAL(5, 54, 17), // "showLicenseNotice"
QT_MOC_LITERAL(6, 72, 6), // "notice"
QT_MOC_LITERAL(7, 79, 17) // "validateSerialKey"

    },
    "LicenseManager\0editionChanged\0\0Edition\0"
    "InvalidLicense\0showLicenseNotice\0"
    "notice\0validateSerialKey"
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
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,
       5,    1,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void LicenseManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LicenseManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editionChanged((*reinterpret_cast< Edition(*)>(_a[1]))); break;
        case 1: _t->InvalidLicense(); break;
        case 2: _t->showLicenseNotice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->validateSerialKey(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LicenseManager::*)(Edition ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LicenseManager::editionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LicenseManager::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LicenseManager::InvalidLicense)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LicenseManager::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LicenseManager::showLicenseNotice)) {
                *result = 2;
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
void LicenseManager::editionChanged(Edition _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< LicenseManager *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LicenseManager::InvalidLicense()const
{
    QMetaObject::activate(const_cast< LicenseManager *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LicenseManager::showLicenseNotice(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< LicenseManager *>(this), &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
