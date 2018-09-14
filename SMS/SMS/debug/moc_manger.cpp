/****************************************************************************
** Meta object code from reading C++ file 'manger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../manger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_manger_t {
    QByteArrayData data[11];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_manger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_manger_t qt_meta_stringdata_manger = {
    {
QT_MOC_LITERAL(0, 0, 6), // "manger"
QT_MOC_LITERAL(1, 7, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 26), // "on_userloginButton_clicked"
QT_MOC_LITERAL(4, 59, 38), // "on_stu_inform_guanlipushButto..."
QT_MOC_LITERAL(5, 98, 28), // "on_dorm_guanliButton_clicked"
QT_MOC_LITERAL(6, 127, 33), // "on_award_managepushButton_cli..."
QT_MOC_LITERAL(7, 161, 32), // "on_scoremanagepushButton_clicked"
QT_MOC_LITERAL(8, 194, 30), // "on_course_manageButton_clicked"
QT_MOC_LITERAL(9, 225, 33), // "on_class_managepushButton_cli..."
QT_MOC_LITERAL(10, 259, 30) // "on_feemanagepushButton_clicked"

    },
    "manger\0on_pushButton_9_clicked\0\0"
    "on_userloginButton_clicked\0"
    "on_stu_inform_guanlipushButton_clicked\0"
    "on_dorm_guanliButton_clicked\0"
    "on_award_managepushButton_clicked\0"
    "on_scoremanagepushButton_clicked\0"
    "on_course_manageButton_clicked\0"
    "on_class_managepushButton_clicked\0"
    "on_feemanagepushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_manger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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

       0        // eod
};

void manger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        manger *_t = static_cast<manger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_9_clicked(); break;
        case 1: _t->on_userloginButton_clicked(); break;
        case 2: _t->on_stu_inform_guanlipushButton_clicked(); break;
        case 3: _t->on_dorm_guanliButton_clicked(); break;
        case 4: _t->on_award_managepushButton_clicked(); break;
        case 5: _t->on_scoremanagepushButton_clicked(); break;
        case 6: _t->on_course_manageButton_clicked(); break;
        case 7: _t->on_class_managepushButton_clicked(); break;
        case 8: _t->on_feemanagepushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject manger::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_manger.data,
      qt_meta_data_manger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *manger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *manger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_manger.stringdata0))
        return static_cast<void*>(const_cast< manger*>(this));
    return QWidget::qt_metacast(_clname);
}

int manger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
