/****************************************************************************
** Meta object code from reading C++ file 'CustomNetworkManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../app/streaming/CustomNetworkManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CustomNetworkManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CustomNetworkManager_t {
    QByteArrayData data[8];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomNetworkManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomNetworkManager_t qt_meta_stringdata_CustomNetworkManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CustomNetworkManager"
QT_MOC_LITERAL(1, 21, 16), // "sendPatchRequest"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 2), // "id"
QT_MOC_LITERAL(4, 42, 2), // "BW"
QT_MOC_LITERAL(5, 45, 19), // "sendPostRequest720p"
QT_MOC_LITERAL(6, 65, 20), // "sendPostRequest1080p"
QT_MOC_LITERAL(7, 86, 20) // "sendPostRequest1440p"

    },
    "CustomNetworkManager\0sendPatchRequest\0"
    "\0id\0BW\0sendPostRequest720p\0"
    "sendPostRequest1080p\0sendPostRequest1440p"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomNetworkManager[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x02 /* Public */,
       5,    0,   39,    2, 0x02 /* Public */,
       6,    0,   40,    2, 0x02 /* Public */,
       7,    0,   41,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CustomNetworkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomNetworkManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendPatchRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->sendPostRequest720p(); break;
        case 2: _t->sendPostRequest1080p(); break;
        case 3: _t->sendPostRequest1440p(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CustomNetworkManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CustomNetworkManager.data,
    qt_meta_data_CustomNetworkManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CustomNetworkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomNetworkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomNetworkManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CustomNetworkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
