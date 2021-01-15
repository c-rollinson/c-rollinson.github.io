/****************************************************************************
** Meta object code from reading C++ file 'propviewbuilding.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../USM_MapEditor/gui/propviewbuilding.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propviewbuilding.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropViewBuilding_t {
    QByteArrayData data[16];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropViewBuilding_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropViewBuilding_t qt_meta_stringdata_PropViewBuilding = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PropViewBuilding"
QT_MOC_LITERAL(1, 17, 12), // "updateHeight"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "height"
QT_MOC_LITERAL(4, 38, 13), // "updateAddress"
QT_MOC_LITERAL(5, 52, 7), // "address"
QT_MOC_LITERAL(6, 60, 14), // "updatePostCode"
QT_MOC_LITERAL(7, 75, 8), // "postCode"
QT_MOC_LITERAL(8, 84, 18), // "updateLatitudeEdit"
QT_MOC_LITERAL(9, 103, 3), // "lat"
QT_MOC_LITERAL(10, 107, 19), // "updateLongitudeEdit"
QT_MOC_LITERAL(11, 127, 3), // "lng"
QT_MOC_LITERAL(12, 131, 14), // "updateTimeEdit"
QT_MOC_LITERAL(13, 146, 4), // "time"
QT_MOC_LITERAL(14, 151, 13), // "updateTelEdit"
QT_MOC_LITERAL(15, 165, 3) // "tel"

    },
    "PropViewBuilding\0updateHeight\0\0height\0"
    "updateAddress\0address\0updatePostCode\0"
    "postCode\0updateLatitudeEdit\0lat\0"
    "updateLongitudeEdit\0lng\0updateTimeEdit\0"
    "time\0updateTelEdit\0tel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropViewBuilding[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x0a /* Public */,
      10,    1,   61,    2, 0x0a /* Public */,
      12,    1,   64,    2, 0x0a /* Public */,
      14,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

void PropViewBuilding::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropViewBuilding *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateHeight((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateAddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updatePostCode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateLatitudeEdit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateLongitudeEdit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->updateTimeEdit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->updateTelEdit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PropViewBuilding::staticMetaObject = { {
    &PropertyView::staticMetaObject,
    qt_meta_stringdata_PropViewBuilding.data,
    qt_meta_data_PropViewBuilding,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PropViewBuilding::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropViewBuilding::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropViewBuilding.stringdata0))
        return static_cast<void*>(this);
    return PropertyView::qt_metacast(_clname);
}

int PropViewBuilding::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
