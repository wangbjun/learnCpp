/****************************************************************************
** Meta object code from reading C++ file 'mainwindowmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MainWindowMenu/mainwindowmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindowmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindowMenu_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindowMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindowMenu_t qt_meta_stringdata_MainWindowMenu = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MainWindowMenu"
QT_MOC_LITERAL(1, 15, 23), // "on_checkBox_sep_toggled"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "checked"
QT_MOC_LITERAL(4, 48, 24), // "on_checkBox_tear_toggled"
QT_MOC_LITERAL(5, 73, 24), // "on_checkBox_tips_toggled"
QT_MOC_LITERAL(6, 98, 12), // "setTextColor"
QT_MOC_LITERAL(7, 111, 3) // "clr"

    },
    "MainWindowMenu\0on_checkBox_sep_toggled\0"
    "\0checked\0on_checkBox_tear_toggled\0"
    "on_checkBox_tips_toggled\0setTextColor\0"
    "clr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindowMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QColor,    7,

       0        // eod
};

void MainWindowMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindowMenu *_t = static_cast<MainWindowMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_checkBox_sep_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_checkBox_tear_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_checkBox_tips_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setTextColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindowMenu::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindowMenu.data,
      qt_meta_data_MainWindowMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindowMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindowMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowMenu.stringdata0))
        return static_cast<void*>(const_cast< MainWindowMenu*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindowMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
