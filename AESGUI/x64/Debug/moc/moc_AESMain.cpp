/****************************************************************************
** Meta object code from reading C++ file 'AESMain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../AESMain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AESMain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AESMain_t {
    QByteArrayData data[13];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AESMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AESMain_t qt_meta_stringdata_AESMain = {
    {
QT_MOC_LITERAL(0, 0, 7), // "AESMain"
QT_MOC_LITERAL(1, 8, 14), // "onCloseClicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 17), // "onMaximizeClicked"
QT_MOC_LITERAL(4, 42, 17), // "onMinimizeClicked"
QT_MOC_LITERAL(5, 60, 13), // "onLeftClicked"
QT_MOC_LITERAL(6, 74, 14), // "onRightClicked"
QT_MOC_LITERAL(7, 89, 19), // "onStrEncryptClicked"
QT_MOC_LITERAL(8, 109, 19), // "onStrDecryptClicked"
QT_MOC_LITERAL(9, 129, 17), // "onPickFileClicked"
QT_MOC_LITERAL(10, 147, 18), // "onPickPlaceClicked"
QT_MOC_LITERAL(11, 166, 20), // "onFileEncryptClicked"
QT_MOC_LITERAL(12, 187, 20) // "onFileDecryptClicked"

    },
    "AESMain\0onCloseClicked\0\0onMaximizeClicked\0"
    "onMinimizeClicked\0onLeftClicked\0"
    "onRightClicked\0onStrEncryptClicked\0"
    "onStrDecryptClicked\0onPickFileClicked\0"
    "onPickPlaceClicked\0onFileEncryptClicked\0"
    "onFileDecryptClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AESMain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AESMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AESMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onCloseClicked(); break;
        case 1: _t->onMaximizeClicked(); break;
        case 2: _t->onMinimizeClicked(); break;
        case 3: _t->onLeftClicked(); break;
        case 4: _t->onRightClicked(); break;
        case 5: _t->onStrEncryptClicked(); break;
        case 6: _t->onStrDecryptClicked(); break;
        case 7: _t->onPickFileClicked(); break;
        case 8: _t->onPickPlaceClicked(); break;
        case 9: _t->onFileEncryptClicked(); break;
        case 10: _t->onFileDecryptClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AESMain::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_AESMain.data,
    qt_meta_data_AESMain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AESMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AESMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AESMain.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AESMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
