/****************************************************************************
** Meta object code from reading C++ file 'pinkoodi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Lukko/pinkoodi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pinkoodi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Pinkoodi_t {
    QByteArrayData data[18];
    char stringdata[346];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pinkoodi_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pinkoodi_t qt_meta_stringdata_Pinkoodi = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 9),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 10),
QT_MOC_LITERAL(4, 31, 21),
QT_MOC_LITERAL(5, 53, 23),
QT_MOC_LITERAL(6, 77, 23),
QT_MOC_LITERAL(7, 101, 23),
QT_MOC_LITERAL(8, 125, 23),
QT_MOC_LITERAL(9, 149, 23),
QT_MOC_LITERAL(10, 173, 23),
QT_MOC_LITERAL(11, 197, 23),
QT_MOC_LITERAL(12, 221, 23),
QT_MOC_LITERAL(13, 245, 24),
QT_MOC_LITERAL(14, 270, 31),
QT_MOC_LITERAL(15, 302, 27),
QT_MOC_LITERAL(16, 330, 7),
QT_MOC_LITERAL(17, 338, 7)
    },
    "Pinkoodi\0pinSignal\0\0nimiSignal\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_5_clicked\0on_pushButton_6_clicked\0"
    "on_pushButton_7_clicked\0on_pushButton_8_clicked\0"
    "on_pushButton_9_clicked\0"
    "on_pushButton_10_clicked\0"
    "on_pushButton_backspace_clicked\0"
    "on_pushButton_enter_clicked\0pinSlot\0"
    "timeOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pinkoodi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       3,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  100,    2, 0x08 /* Private */,
       5,    0,  101,    2, 0x08 /* Private */,
       6,    0,  102,    2, 0x08 /* Private */,
       7,    0,  103,    2, 0x08 /* Private */,
       8,    0,  104,    2, 0x08 /* Private */,
       9,    0,  105,    2, 0x08 /* Private */,
      10,    0,  106,    2, 0x08 /* Private */,
      11,    0,  107,    2, 0x08 /* Private */,
      12,    0,  108,    2, 0x08 /* Private */,
      13,    0,  109,    2, 0x08 /* Private */,
      14,    0,  110,    2, 0x08 /* Private */,
      15,    0,  111,    2, 0x08 /* Private */,
      16,    1,  112,    2, 0x08 /* Private */,
      17,    0,  115,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void Pinkoodi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Pinkoodi *_t = static_cast<Pinkoodi *>(_o);
        switch (_id) {
        case 0: _t->pinSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->nimiSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        case 6: _t->on_pushButton_5_clicked(); break;
        case 7: _t->on_pushButton_6_clicked(); break;
        case 8: _t->on_pushButton_7_clicked(); break;
        case 9: _t->on_pushButton_8_clicked(); break;
        case 10: _t->on_pushButton_9_clicked(); break;
        case 11: _t->on_pushButton_10_clicked(); break;
        case 12: _t->on_pushButton_backspace_clicked(); break;
        case 13: _t->on_pushButton_enter_clicked(); break;
        case 14: _t->pinSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->timeOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Pinkoodi::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pinkoodi::pinSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (Pinkoodi::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pinkoodi::nimiSignal)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Pinkoodi::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Pinkoodi.data,
      qt_meta_data_Pinkoodi,  qt_static_metacall, 0, 0}
};


const QMetaObject *Pinkoodi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pinkoodi::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Pinkoodi.stringdata))
        return static_cast<void*>(const_cast< Pinkoodi*>(this));
    return QDialog::qt_metacast(_clname);
}

int Pinkoodi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Pinkoodi::pinSignal(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Pinkoodi::nimiSignal(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
