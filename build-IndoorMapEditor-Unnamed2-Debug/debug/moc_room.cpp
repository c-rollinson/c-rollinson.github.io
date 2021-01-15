/****************************************************************************
** Meta object code from reading C++ file 'room.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../USM_MapEditor/core/room.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'room.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Room_t {
    QByteArrayData data[9];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Room_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Room_t qt_meta_stringdata_Room = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Room"
QT_MOC_LITERAL(1, 5, 10), // "updateName"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "name"
QT_MOC_LITERAL(4, 22, 12), // "updateCenter"
QT_MOC_LITERAL(5, 35, 6), // "center"
QT_MOC_LITERAL(6, 42, 10), // "updateFont"
QT_MOC_LITERAL(7, 53, 4), // "font"
QT_MOC_LITERAL(8, 58, 11) // "updateColor"

    },
    "Room\0updateName\0\0name\0updateCenter\0"
    "center\0updateFont\0font\0updateColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Room[] = {

 // content:
       8,       // revision
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
       6,    1,   40,    2, 0x08 /* Private */,
       8,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QPointF,    5,
    QMetaType::Void, QMetaType::QFont,    7,
    QMetaType::Void,

       0        // eod
};

void Room::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Room *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateCenter((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 2: _t->updateFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 3: _t->updateColor(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Room::staticMetaObject = { {
    &PolygonFeature::staticMetaObject,
    qt_meta_stringdata_Room.data,
    qt_meta_data_Room,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Room::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Room::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Room.stringdata0))
        return static_cast<void*>(this);
    return PolygonFeature::qt_metacast(_clname);
}

int Room::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PolygonFeature::qt_metacall(_c, _id, _a);
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
