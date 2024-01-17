/****************************************************************************
** Meta object code from reading C++ file 'drawer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../chatRoom/drawer.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Drawer_t {
    const uint offsetsAndSize[20];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Drawer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Drawer_t qt_meta_stringdata_Drawer = {
    {
QT_MOC_LITERAL(0, 6), // "Drawer"
QT_MOC_LITERAL(7, 15), // "showChatWidget1"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 14), // "slotAddFriends"
QT_MOC_LITERAL(39, 19), // "showaddfriendWidget"
QT_MOC_LITERAL(59, 12), // "MapStytleSet"
QT_MOC_LITERAL(72, 6), // "getFDL"
QT_MOC_LITERAL(79, 9), // "CheckFlag"
QT_MOC_LITERAL(89, 16), // "CheckonlineState"
QT_MOC_LITERAL(106, 4) // "Quit"

    },
    "Drawer\0showChatWidget1\0\0slotAddFriends\0"
    "showaddfriendWidget\0MapStytleSet\0"
    "getFDL\0CheckFlag\0CheckonlineState\0"
    "Quit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Drawer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
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

void Drawer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Drawer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showChatWidget1(); break;
        case 1: _t->slotAddFriends(); break;
        case 2: _t->showaddfriendWidget(); break;
        case 3: _t->MapStytleSet(); break;
        case 4: _t->getFDL(); break;
        case 5: _t->CheckFlag(); break;
        case 6: _t->CheckonlineState(); break;
        case 7: _t->Quit(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject Drawer::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolBox::staticMetaObject>(),
    qt_meta_stringdata_Drawer.offsetsAndSize,
    qt_meta_data_Drawer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Drawer_t
, QtPrivate::TypeAndForceComplete<Drawer, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Drawer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Drawer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Drawer.stringdata0))
        return static_cast<void*>(this);
    return QToolBox::qt_metacast(_clname);
}

int Drawer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
