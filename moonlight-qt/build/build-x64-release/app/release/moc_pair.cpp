/****************************************************************************
** Meta object code from reading C++ file 'pair.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../app/cli/pair.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pair.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CliPair__Launcher_t {
    QByteArrayData data[19];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CliPair__Launcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CliPair__Launcher_t qt_meta_stringdata_CliPair__Launcher = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CliPair::Launcher"
QT_MOC_LITERAL(1, 18, 17), // "searchingComputer"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "pairing"
QT_MOC_LITERAL(4, 45, 6), // "pcName"
QT_MOC_LITERAL(5, 52, 3), // "pin"
QT_MOC_LITERAL(6, 56, 6), // "failed"
QT_MOC_LITERAL(7, 63, 4), // "text"
QT_MOC_LITERAL(8, 68, 7), // "success"
QT_MOC_LITERAL(9, 76, 15), // "onComputerFound"
QT_MOC_LITERAL(10, 92, 11), // "NvComputer*"
QT_MOC_LITERAL(11, 104, 8), // "computer"
QT_MOC_LITERAL(12, 113, 18), // "onPairingCompleted"
QT_MOC_LITERAL(13, 132, 5), // "error"
QT_MOC_LITERAL(14, 138, 9), // "onTimeout"
QT_MOC_LITERAL(15, 148, 7), // "execute"
QT_MOC_LITERAL(16, 156, 16), // "ComputerManager*"
QT_MOC_LITERAL(17, 173, 7), // "manager"
QT_MOC_LITERAL(18, 181, 10) // "isExecuted"

    },
    "CliPair::Launcher\0searchingComputer\0"
    "\0pairing\0pcName\0pin\0failed\0text\0success\0"
    "onComputerFound\0NvComputer*\0computer\0"
    "onPairingCompleted\0error\0onTimeout\0"
    "execute\0ComputerManager*\0manager\0"
    "isExecuted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CliPair__Launcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    2,   60,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       8,    0,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   69,    2, 0x08 /* Private */,
      12,    2,   72,    2, 0x08 /* Private */,
      14,    0,   77,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      15,    1,   78,    2, 0x02 /* Public */,
      18,    0,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString,   11,   13,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Bool,

       0        // eod
};

void CliPair::Launcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Launcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchingComputer(); break;
        case 1: _t->pairing((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->failed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->success(); break;
        case 4: _t->onComputerFound((*reinterpret_cast< NvComputer*(*)>(_a[1]))); break;
        case 5: _t->onPairingCompleted((*reinterpret_cast< NvComputer*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->onTimeout(); break;
        case 7: _t->execute((*reinterpret_cast< ComputerManager*(*)>(_a[1]))); break;
        case 8: { bool _r = _t->isExecuted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Launcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Launcher::searchingComputer)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Launcher::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Launcher::pairing)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Launcher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Launcher::failed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Launcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Launcher::success)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CliPair::Launcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CliPair__Launcher.data,
    qt_meta_data_CliPair__Launcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CliPair::Launcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CliPair::Launcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CliPair__Launcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CliPair::Launcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CliPair::Launcher::searchingComputer()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CliPair::Launcher::pairing(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CliPair::Launcher::failed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CliPair::Launcher::success()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
