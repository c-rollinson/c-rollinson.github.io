/****************************************************************************
** Meta object code from reading C++ file 'propertyview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../USM_MapEditor/gui/propertyview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertyview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropertyView_t {
    QByteArrayData data[12];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyView_t qt_meta_stringdata_PropertyView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PropertyView"
QT_MOC_LITERAL(1, 13, 10), // "updateName"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "name"
QT_MOC_LITERAL(4, 30, 12), // "updateEnName"
QT_MOC_LITERAL(5, 43, 6), // "enName"
QT_MOC_LITERAL(6, 50, 8), // "updateId"
QT_MOC_LITERAL(7, 59, 2), // "id"
QT_MOC_LITERAL(8, 62, 11), // "updateBrief"
QT_MOC_LITERAL(9, 74, 5), // "brief"
QT_MOC_LITERAL(10, 80, 10), // "updateType"
QT_MOC_LITERAL(11, 91, 4) // "type"

    },
    "PropertyView\0updateName\0\0name\0"
    "updateEnName\0enName\0updateId\0id\0"
    "updateBrief\0brief\0updateType\0type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,
      10,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void PropertyView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateEnName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateBrief((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PropertyView::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_PropertyView.data,
    qt_meta_data_PropertyView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PropertyView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PropertyView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
