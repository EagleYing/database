/****************************************************************************
** Meta object code from reading C++ file 'feemanage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../feemanage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'feemanage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_feemanage_t {
    QByteArrayData data[7];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_feemanage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_feemanage_t qt_meta_stringdata_feemanage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "feemanage"
QT_MOC_LITERAL(1, 10, 30), // "on_fee_querypushButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 28), // "on_fee_addpushButton_clicked"
QT_MOC_LITERAL(4, 71, 31), // "on_fee_deletepushButton_clicked"
QT_MOC_LITERAL(5, 103, 31), // "on_fee_updatepushButton_clicked"
QT_MOC_LITERAL(6, 135, 29) // "on_fee_backpushButton_clicked"

    },
    "feemanage\0on_fee_querypushButton_clicked\0"
    "\0on_fee_addpushButton_clicked\0"
    "on_fee_deletepushButton_clicked\0"
    "on_fee_updatepushButton_clicked\0"
    "on_fee_backpushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_feemanage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void feemanage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        feemanage *_t = static_cast<feemanage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_fee_querypushButton_clicked(); break;
        case 1: _t->on_fee_addpushButton_clicked(); break;
        case 2: _t->on_fee_deletepushButton_clicked(); break;
        case 3: _t->on_fee_updatepushButton_clicked(); break;
        case 4: _t->on_fee_backpushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject feemanage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_feemanage.data,
      qt_meta_data_feemanage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *feemanage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *feemanage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_feemanage.stringdata0))
        return static_cast<void*>(const_cast< feemanage*>(this));
    return QWidget::qt_metacast(_clname);
}

int feemanage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
