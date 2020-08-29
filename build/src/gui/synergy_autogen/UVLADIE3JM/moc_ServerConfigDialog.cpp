/****************************************************************************
** Meta object code from reading C++ file 'ServerConfigDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/ServerConfigDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ServerConfigDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServerConfigDialog_t {
    QByteArrayData data[17];
    char stringdata0[378];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerConfigDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerConfigDialog_t qt_meta_stringdata_ServerConfigDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ServerConfigDialog"
QT_MOC_LITERAL(1, 19, 6), // "accept"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "showEvent"
QT_MOC_LITERAL(4, 37, 11), // "QShowEvent*"
QT_MOC_LITERAL(5, 49, 5), // "event"
QT_MOC_LITERAL(6, 55, 7), // "message"
QT_MOC_LITERAL(7, 63, 29), // "on_m_pButtonNewHotkey_clicked"
QT_MOC_LITERAL(8, 93, 38), // "on_m_pListHotkeys_itemSelecti..."
QT_MOC_LITERAL(9, 132, 30), // "on_m_pButtonEditHotkey_clicked"
QT_MOC_LITERAL(10, 163, 32), // "on_m_pButtonRemoveHotkey_clicked"
QT_MOC_LITERAL(11, 196, 29), // "on_m_pButtonNewAction_clicked"
QT_MOC_LITERAL(12, 226, 38), // "on_m_pListActions_itemSelecti..."
QT_MOC_LITERAL(13, 265, 30), // "on_m_pButtonEditAction_clicked"
QT_MOC_LITERAL(14, 296, 32), // "on_m_pButtonRemoveAction_clicked"
QT_MOC_LITERAL(15, 329, 42), // "on_m_pCheckBoxEnableClipboard..."
QT_MOC_LITERAL(16, 372, 5) // "state"

    },
    "ServerConfigDialog\0accept\0\0showEvent\0"
    "QShowEvent*\0event\0message\0"
    "on_m_pButtonNewHotkey_clicked\0"
    "on_m_pListHotkeys_itemSelectionChanged\0"
    "on_m_pButtonEditHotkey_clicked\0"
    "on_m_pButtonRemoveHotkey_clicked\0"
    "on_m_pButtonNewAction_clicked\0"
    "on_m_pListActions_itemSelectionChanged\0"
    "on_m_pButtonEditAction_clicked\0"
    "on_m_pButtonRemoveAction_clicked\0"
    "on_m_pCheckBoxEnableClipboard_stateChanged\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerConfigDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    1,   75,    2, 0x0a /* Public */,
       6,    1,   78,    2, 0x0a /* Public */,
       7,    0,   81,    2, 0x09 /* Protected */,
       8,    0,   82,    2, 0x09 /* Protected */,
       9,    0,   83,    2, 0x09 /* Protected */,
      10,    0,   84,    2, 0x09 /* Protected */,
      11,    0,   85,    2, 0x09 /* Protected */,
      12,    0,   86,    2, 0x09 /* Protected */,
      13,    0,   87,    2, 0x09 /* Protected */,
      14,    0,   88,    2, 0x09 /* Protected */,
      15,    1,   89,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,

       0        // eod
};

void ServerConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServerConfigDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 2: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_m_pButtonNewHotkey_clicked(); break;
        case 4: _t->on_m_pListHotkeys_itemSelectionChanged(); break;
        case 5: _t->on_m_pButtonEditHotkey_clicked(); break;
        case 6: _t->on_m_pButtonRemoveHotkey_clicked(); break;
        case 7: _t->on_m_pButtonNewAction_clicked(); break;
        case 8: _t->on_m_pListActions_itemSelectionChanged(); break;
        case 9: _t->on_m_pButtonEditAction_clicked(); break;
        case 10: _t->on_m_pButtonRemoveAction_clicked(); break;
        case 11: _t->on_m_pCheckBoxEnableClipboard_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ServerConfigDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ServerConfigDialog.data,
    qt_meta_data_ServerConfigDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ServerConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerConfigDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ServerConfigDialogBase"))
        return static_cast< Ui::ServerConfigDialogBase*>(this);
    return QDialog::qt_metacast(_clname);
}

int ServerConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
