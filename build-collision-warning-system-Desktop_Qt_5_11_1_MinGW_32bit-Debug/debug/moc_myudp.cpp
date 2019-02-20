/****************************************************************************
** Meta object code from reading C++ file 'myudp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../collision-warning-system/myudp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myudp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyUDP_t {
    QByteArrayData data[22];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyUDP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyUDP_t qt_meta_stringdata_MyUDP = {
    {
QT_MOC_LITERAL(0, 0, 5), // "MyUDP"
QT_MOC_LITERAL(1, 6, 10), // "newMessage"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "from"
QT_MOC_LITERAL(4, 23, 7), // "message"
QT_MOC_LITERAL(5, 31, 10), // "newLogInfo"
QT_MOC_LITERAL(6, 42, 7), // "logInfo"
QT_MOC_LITERAL(7, 50, 14), // "newMessageToDB"
QT_MOC_LITERAL(8, 65, 10), // "long long&"
QT_MOC_LITERAL(9, 76, 13), // "receiverStamp"
QT_MOC_LITERAL(10, 90, 9), // "readyRead"
QT_MOC_LITERAL(11, 100, 11), // "sendMessage"
QT_MOC_LITERAL(12, 112, 12), // "QHostAddress"
QT_MOC_LITERAL(13, 125, 6), // "sender"
QT_MOC_LITERAL(14, 132, 10), // "senderPort"
QT_MOC_LITERAL(15, 143, 6), // "result"
QT_MOC_LITERAL(16, 150, 15), // "onReplyReceived"
QT_MOC_LITERAL(17, 166, 4), // "host"
QT_MOC_LITERAL(18, 171, 4), // "port"
QT_MOC_LITERAL(19, 176, 8), // "NtpReply"
QT_MOC_LITERAL(20, 185, 5), // "reply"
QT_MOC_LITERAL(21, 191, 10) // "getNtpTime"

    },
    "MyUDP\0newMessage\0\0from\0message\0"
    "newLogInfo\0logInfo\0newMessageToDB\0"
    "long long&\0receiverStamp\0readyRead\0"
    "sendMessage\0QHostAddress\0sender\0"
    "senderPort\0result\0onReplyReceived\0"
    "host\0port\0NtpReply\0reply\0getNtpTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyUDP[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    1,   54,    2, 0x06 /* Public */,
       7,    2,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   62,    2, 0x0a /* Public */,
      11,    3,   63,    2, 0x0a /* Public */,
      16,    4,   70,    2, 0x0a /* Public */,
      21,    1,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonObject,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QJsonObject, 0x80000000 | 8,    4,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, QMetaType::UShort, QMetaType::QJsonObject,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 12, QMetaType::UShort, 0x80000000 | 19, QMetaType::QJsonObject,   17,   18,   20,    4,
    QMetaType::Bool, QMetaType::QJsonObject,    4,

       0        // eod
};

void MyUDP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyUDP *_t = static_cast<MyUDP *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2]))); break;
        case 1: _t->newLogInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->newMessageToDB((*reinterpret_cast< const QJsonObject(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2]))); break;
        case 3: _t->readyRead(); break;
        case 4: _t->sendMessage((*reinterpret_cast< QHostAddress(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QJsonObject(*)>(_a[3]))); break;
        case 5: _t->onReplyReceived((*reinterpret_cast< QHostAddress(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< NtpReply(*)>(_a[3])),(*reinterpret_cast< QJsonObject(*)>(_a[4]))); break;
        case 6: { bool _r = _t->getNtpTime((*reinterpret_cast< const QJsonObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyUDP::*)(const QString & , const QJsonObject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyUDP::newMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyUDP::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyUDP::newLogInfo)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MyUDP::*)(const QJsonObject & , long long & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyUDP::newMessageToDB)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyUDP::staticMetaObject = {
    { &QUdpSocket::staticMetaObject, qt_meta_stringdata_MyUDP.data,
      qt_meta_data_MyUDP,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyUDP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyUDP::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyUDP.stringdata0))
        return static_cast<void*>(this);
    return QUdpSocket::qt_metacast(_clname);
}

int MyUDP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QUdpSocket::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MyUDP::newMessage(const QString & _t1, const QJsonObject & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyUDP::newLogInfo(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyUDP::newMessageToDB(const QJsonObject & _t1, long long & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
