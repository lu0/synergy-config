/****************************************************************************
** Meta object code from reading C++ file 'AddClientDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/AddClientDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddClientDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddClientDialog_t {
    QByteArrayData data[9];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddClientDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddClientDialog_t qt_meta_stringdata_AddClientDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AddClientDialog"
QT_MOC_LITERAL(1, 16, 34), // "on_m_pCheckBoxIgnoreClient_to..."
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 7), // "checked"
QT_MOC_LITERAL(4, 60, 16), // "handleButtonLeft"
QT_MOC_LITERAL(5, 77, 14), // "handleButtonUp"
QT_MOC_LITERAL(6, 92, 17), // "handleButtonRight"
QT_MOC_LITERAL(7, 110, 16), // "handleButtonDown"
QT_MOC_LITERAL(8, 127, 20) // "handleButtonAdvanced"

    },
    "AddClientDialog\0on_m_pCheckBoxIgnoreClient_toggled\0"
    "\0checked\0handleButtonLeft\0handleButtonUp\0"
    "handleButtonRight\0handleButtonDown\0"
    "handleButtonAdvanced"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddClientDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddClientDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddClientDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_m_pCheckBoxIgnoreClient_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->handleButtonLeft(); break;
        case 2: _t->handleButtonUp(); break;
        case 3: _t->handleButtonRight(); break;
        case 4: _t->handleButtonDown(); break;
        case 5: _t->handleButtonAdvanced(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddClientDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_AddClientDialog.data,
    qt_meta_data_AddClientDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddClientDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddClientDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddClientDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::AddClientDialog"))
        return static_cast< Ui::AddClientDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddClientDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
