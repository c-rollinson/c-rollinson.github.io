/****************************************************************************
** Meta object code from reading C++ file 'propviewroom.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../USM_MapEditor/gui/propviewroom.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propviewroom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropViewRoom_t {
    QByteArrayData data[17];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropViewRoom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropViewRoom_t qt_meta_stringdata_PropViewRoom = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PropViewRoom"
QT_MOC_LITERAL(1, 13, 12), // "updateShopNo"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "shopNo"
QT_MOC_LITERAL(4, 34, 10), // "updateArea"
QT_MOC_LITERAL(5, 45, 4), // "area"
QT_MOC_LITERAL(6, 50, 16), // "updateDianpingId"
QT_MOC_LITERAL(7, 67, 4), // "dpId"
QT_MOC_LITERAL(8, 72, 12), // "updateMateId"
QT_MOC_LITERAL(9, 85, 6), // "mateId"
QT_MOC_LITERAL(10, 92, 7), // "onQuery"
QT_MOC_LITERAL(11, 100, 13), // "queryFinished"
QT_MOC_LITERAL(12, 114, 11), // "addJsObject"
QT_MOC_LITERAL(13, 126, 14), // "updateSortType"
QT_MOC_LITERAL(14, 141, 8), // "sortType"
QT_MOC_LITERAL(15, 150, 16), // "updateAreaStatus"
QT_MOC_LITERAL(16, 167, 5) // "state"

    },
    "PropViewRoom\0updateShopNo\0\0shopNo\0"
    "updateArea\0area\0updateDianpingId\0dpId\0"
    "updateMateId\0mateId\0onQuery\0queryFinished\0"
    "addJsObject\0updateSortType\0sortType\0"
    "updateAreaStatus\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropViewRoom[] = {

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
       1,    1,   59,    2, 0x0a /* Public */,
       4,    1,   62,    2, 0x0a /* Public */,
       6,    1,   65,    2, 0x0a /* Public */,
       8,    1,   68,    2, 0x0a /* Public */,
      10,    0,   71,    2, 0x0a /* Public */,
      11,    0,   72,    2, 0x0a /* Public */,
      12,    0,   73,    2, 0x0a /* Public */,
      13,    1,   74,    2, 0x0a /* Public */,
      15,    1,   77,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int,   16,

       0        // eod
};

void PropViewRoom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropViewRoom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateShopNo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateArea((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateDianpingId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateMateId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onQuery(); break;
        case 5: _t->queryFinished(); break;
        case 6: _t->addJsObject(); break;
        case 7: _t->updateSortType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->updateAreaStatus((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PropViewRoom::staticMetaObject = { {
    &PropertyView::staticMetaObject,
    qt_meta_stringdata_PropViewRoom.data,
    qt_meta_data_PropViewRoom,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PropViewRoom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropViewRoom::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropViewRoom.stringdata0))
        return static_cast<void*>(this);
    return PropertyView::qt_metacast(_clname);
}

int PropViewRoom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyView::qt_metacall(_c, _id, _a);
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
