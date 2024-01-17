/****************************************************************************
** Meta object code from reading C++ file 'sign.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../chatRoom/sign.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sign.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Sign_t {
    uint offsetsAndSizes[18];
    char stringdata0[5];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[12];
    char stringdata5[13];
    char stringdata6[10];
    char stringdata7[10];
    char stringdata8[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Sign_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Sign_t qt_meta_stringdata_Sign = {
    {
        QT_MOC_LITERAL(0, 4),  // "Sign"
        QT_MOC_LITERAL(5, 12),  // "slotRegister"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 9),  // "slotLogIn"
        QT_MOC_LITERAL(29, 11),  // "slotConnect"
        QT_MOC_LITERAL(41, 12),  // "dataReceived"
        QT_MOC_LITERAL(54, 9),  // "connected"
        QT_MOC_LITERAL(64, 9),  // "Checkflag"
        QT_MOC_LITERAL(74, 14)   // "CheckPicChange"
    },
    "Sign",
    "slotRegister",
    "",
    "slotLogIn",
    "slotConnect",
    "dataReceived",
    "connected",
    "Checkflag",
    "CheckPicChange"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Sign[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x0a,    1 /* Public */,
       3,    0,   57,    2, 0x0a,    2 /* Public */,
       4,    0,   58,    2, 0x0a,    3 /* Public */,
       5,    0,   59,    2, 0x0a,    4 /* Public */,
       6,    0,   60,    2, 0x0a,    5 /* Public */,
       7,    0,   61,    2, 0x0a,    6 /* Public */,
       8,    0,   62,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Sign::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Sign.offsetsAndSizes,
    qt_meta_data_Sign,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Sign_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Sign, std::true_type>,
        // method 'slotRegister'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotLogIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Checkflag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CheckPicChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Sign::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Sign *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotRegister(); break;
        case 1: _t->slotLogIn(); break;
        case 2: _t->slotConnect(); break;
        case 3: _t->dataReceived(); break;
        case 4: _t->connected(); break;
        case 5: _t->Checkflag(); break;
        case 6: _t->CheckPicChange(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Sign::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sign::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sign.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Sign::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
