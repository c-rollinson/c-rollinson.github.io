/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../USM_MapEditor/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[32];
    char stringdata0[407];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 7), // "newFile"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "openFile"
QT_MOC_LITERAL(4, 29, 14), // "openRecentFile"
QT_MOC_LITERAL(5, 44, 8), // "saveFile"
QT_MOC_LITERAL(6, 53, 10), // "saveAsFile"
QT_MOC_LITERAL(7, 64, 8), // "autoSave"
QT_MOC_LITERAL(8, 73, 9), // "closeFile"
QT_MOC_LITERAL(9, 83, 10), // "exportFile"
QT_MOC_LITERAL(10, 94, 9), // "printFile"
QT_MOC_LITERAL(11, 104, 12), // "printCurrent"
QT_MOC_LITERAL(12, 117, 13), // "deleteFeature"
QT_MOC_LITERAL(13, 131, 23), // "onAddLayerButtonClicked"
QT_MOC_LITERAL(14, 155, 21), // "onDeleteButtonClicked"
QT_MOC_LITERAL(15, 177, 15), // "rebuildTreeView"
QT_MOC_LITERAL(16, 193, 18), // "updatePropertyView"
QT_MOC_LITERAL(17, 212, 8), // "Feature*"
QT_MOC_LITERAL(18, 221, 10), // "mapFeature"
QT_MOC_LITERAL(19, 232, 14), // "setPolygonTool"
QT_MOC_LITERAL(20, 247, 13), // "setSelectTool"
QT_MOC_LITERAL(21, 261, 15), // "setPubPointTool"
QT_MOC_LITERAL(22, 277, 12), // "setMergeTool"
QT_MOC_LITERAL(23, 290, 12), // "setSplitTool"
QT_MOC_LITERAL(24, 303, 12), // "setScaleTool"
QT_MOC_LITERAL(25, 316, 19), // "setGraphicsViewFont"
QT_MOC_LITERAL(26, 336, 6), // "onFind"
QT_MOC_LITERAL(27, 343, 13), // "findAllRepeat"
QT_MOC_LITERAL(28, 357, 17), // "outputItemClicked"
QT_MOC_LITERAL(29, 375, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(30, 392, 4), // "item"
QT_MOC_LITERAL(31, 397, 9) // "sortAreas"

    },
    "MainWindow\0newFile\0\0openFile\0"
    "openRecentFile\0saveFile\0saveAsFile\0"
    "autoSave\0closeFile\0exportFile\0printFile\0"
    "printCurrent\0deleteFeature\0"
    "onAddLayerButtonClicked\0onDeleteButtonClicked\0"
    "rebuildTreeView\0updatePropertyView\0"
    "Feature*\0mapFeature\0setPolygonTool\0"
    "setSelectTool\0setPubPointTool\0"
    "setMergeTool\0setSplitTool\0setScaleTool\0"
    "setGraphicsViewFont\0onFind\0findAllRepeat\0"
    "outputItemClicked\0QListWidgetItem*\0"
    "item\0sortAreas"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x0a /* Public */,
       3,    0,  145,    2, 0x0a /* Public */,
       4,    0,  146,    2, 0x0a /* Public */,
       5,    0,  147,    2, 0x0a /* Public */,
       6,    0,  148,    2, 0x0a /* Public */,
       7,    0,  149,    2, 0x0a /* Public */,
       8,    0,  150,    2, 0x0a /* Public */,
       9,    0,  151,    2, 0x0a /* Public */,
      10,    0,  152,    2, 0x0a /* Public */,
      11,    0,  153,    2, 0x0a /* Public */,
      12,    0,  154,    2, 0x0a /* Public */,
      13,    0,  155,    2, 0x0a /* Public */,
      14,    0,  156,    2, 0x0a /* Public */,
      15,    0,  157,    2, 0x0a /* Public */,
      16,    1,  158,    2, 0x0a /* Public */,
      19,    0,  161,    2, 0x0a /* Public */,
      20,    0,  162,    2, 0x0a /* Public */,
      21,    0,  163,    2, 0x0a /* Public */,
      22,    0,  164,    2, 0x0a /* Public */,
      23,    0,  165,    2, 0x0a /* Public */,
      24,    0,  166,    2, 0x0a /* Public */,
      25,    0,  167,    2, 0x0a /* Public */,
      26,    0,  168,    2, 0x0a /* Public */,
      27,    0,  169,    2, 0x0a /* Public */,
      28,    1,  170,    2, 0x0a /* Public */,
      31,    0,  173,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newFile(); break;
        case 1: _t->openFile(); break;
        case 2: _t->openRecentFile(); break;
        case 3: { bool _r = _t->saveFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->saveAsFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->autoSave(); break;
        case 6: _t->closeFile(); break;
        case 7: _t->exportFile(); break;
        case 8: _t->printFile(); break;
        case 9: _t->printCurrent(); break;
        case 10: _t->deleteFeature(); break;
        case 11: _t->onAddLayerButtonClicked(); break;
        case 12: _t->onDeleteButtonClicked(); break;
        case 13: _t->rebuildTreeView(); break;
        case 14: _t->updatePropertyView((*reinterpret_cast< Feature*(*)>(_a[1]))); break;
        case 15: _t->setPolygonTool(); break;
        case 16: _t->setSelectTool(); break;
        case 17: _t->setPubPointTool(); break;
        case 18: _t->setMergeTool(); break;
        case 19: _t->setSplitTool(); break;
        case 20: _t->setScaleTool(); break;
        case 21: _t->setGraphicsViewFont(); break;
        case 22: _t->onFind(); break;
        case 23: _t->findAllRepeat(); break;
        case 24: _t->outputItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 25: _t->sortAreas(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
