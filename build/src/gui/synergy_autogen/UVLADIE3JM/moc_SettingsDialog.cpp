/****************************************************************************
** Meta object code from reading C++ file 'SettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/SettingsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsDialog_t {
    QByteArrayData data[14];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsDialog_t qt_meta_stringdata_SettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SettingsDialog"
QT_MOC_LITERAL(1, 15, 34), // "on_m_pCheckBoxEnableCrypto_to..."
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 7), // "checked"
QT_MOC_LITERAL(4, 59, 39), // "on_m_pComboLanguage_currentIn..."
QT_MOC_LITERAL(5, 99, 5), // "index"
QT_MOC_LITERAL(6, 105, 36), // "on_m_pCheckBoxLogToFile_state..."
QT_MOC_LITERAL(7, 142, 29), // "on_m_pButtonBrowseLog_clicked"
QT_MOC_LITERAL(8, 172, 39), // "on_m_pLabelInstallBonjour_lin..."
QT_MOC_LITERAL(9, 212, 4), // "link"
QT_MOC_LITERAL(10, 217, 30), // "on_m_pRadioSystemScope_toggled"
QT_MOC_LITERAL(11, 248, 34), // "on_m_pPushButtonBrowseCert_cl..."
QT_MOC_LITERAL(12, 283, 43), // "on_m_pComboBoxKeyLength_curre..."
QT_MOC_LITERAL(13, 327, 33) // "on_m_pPushButtonRegenCert_cli..."

    },
    "SettingsDialog\0on_m_pCheckBoxEnableCrypto_toggled\0"
    "\0checked\0on_m_pComboLanguage_currentIndexChanged\0"
    "index\0on_m_pCheckBoxLogToFile_stateChanged\0"
    "on_m_pButtonBrowseLog_clicked\0"
    "on_m_pLabelInstallBonjour_linkActivated\0"
    "link\0on_m_pRadioSystemScope_toggled\0"
    "on_m_pPushButtonBrowseCert_clicked\0"
    "on_m_pComboBoxKeyLength_currentIndexChanged\0"
    "on_m_pPushButtonRegenCert_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       6,    1,   65,    2, 0x08 /* Private */,
       7,    0,   68,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
      10,    1,   72,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    1,   76,    2, 0x08 /* Private */,
      13,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void SettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_m_pCheckBoxEnableCrypto_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_m_pComboLanguage_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_m_pCheckBoxLogToFile_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_m_pButtonBrowseLog_clicked(); break;
        case 4: _t->on_m_pLabelInstallBonjour_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_m_pRadioSystemScope_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_m_pPushButtonBrowseCert_clicked(); break;
        case 7: _t->on_m_pComboBoxKeyLength_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_m_pPushButtonRegenCert_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SettingsDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_SettingsDialog.data,
    qt_meta_data_SettingsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SettingsDialogBase"))
        return static_cast< Ui::SettingsDialogBase*>(this);
    return QDialog::qt_metacast(_clname);
}

int SettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
