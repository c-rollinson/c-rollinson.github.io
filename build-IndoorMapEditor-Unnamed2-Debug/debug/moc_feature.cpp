/****************************************************************************
** Meta object code from reading C++ file 'feature.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../USM_MapEditor/core/feature.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'feature.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Feature_t {
    QByteArrayData data[16];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Feature_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Feature_t qt_meta_stringdata_Feature = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Feature"
QT_MOC_LITERAL(1, 8, 11), // "nameChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "name"
QT_MOC_LITERAL(4, 26, 13), // "enNameChanged"
QT_MOC_LITERAL(5, 40, 9), // "idChanged"
QT_MOC_LITERAL(6, 50, 5), // "oldId"
QT_MOC_LITERAL(7, 56, 5), // "newId"
QT_MOC_LITERAL(8, 62, 13), // "centerChanged"
QT_MOC_LITERAL(9, 76, 6), // "center"
QT_MOC_LITERAL(10, 83, 12), // "briefChanged"
QT_MOC_LITERAL(11, 96, 5), // "brief"
QT_MOC_LITERAL(12, 102, 11), // "typeChanged"
QT_MOC_LITERAL(13, 114, 4), // "type"
QT_MOC_LITERAL(14, 119, 2), // "id"
QT_MOC_LITERAL(15, 122, 6) // "enName"

    },
    "Feature\0nameChanged\0\0name\0enNameChanged\0"
    "idChanged\0oldId\0newId\0centerChanged\0"
    "center\0briefChanged\0brief\0typeChanged\0"
    "type\0id\0enName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Feature[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    2,   50,    2, 0x06 /* Public */,
       8,    1,   55,    2, 0x06 /* Public */,
      10,    1,   58,    2, 0x06 /* Public */,
      12,    1,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QPointF,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,

 // properties: name, type, flags
      14, QMetaType::Int, 0x00495103,
      15, QMetaType::QString, 0x00495103,
       9, QMetaType::QPointF, 0x00495103,
      11, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       2,
       1,
       3,
       4,

       0        // eod
};

void Feature::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Feature *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->enNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->idChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->centerChanged((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 4: _t->briefChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->typeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Feature::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Feature::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Feature::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Feature::enNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Feature::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Feature::idChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Feature::*)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Feature::centerChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Feature::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Feature::briefChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Feature::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Feature::typeChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Feature *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->enName(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->center(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->brief(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Feature *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setEnName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setCenter(*reinterpret_cast< QPointF*>(_v)); break;
        case 3: _t->setBrief(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Feature::staticMetaObject = { {
    &QGraphicsObject::staticMetaObject,
    qt_meta_stringdata_Feature.data,
    qt_meta_data_Feature,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Feature::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Feature::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Feature.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsObject::qt_metacast(_clname);
}

int Feature::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Feature::nameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Feature::enNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Feature::idChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Feature::centerChanged(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Feature::briefChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Feature::typeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE