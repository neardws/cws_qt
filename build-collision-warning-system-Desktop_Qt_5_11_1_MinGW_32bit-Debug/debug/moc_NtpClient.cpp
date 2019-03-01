/****************************************************************************
** Meta object code from reading C++ file 'NtpClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../collision-warning-system/qntp/src/qntp/NtpClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NtpClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NtpClient_t {
    QByteArrayData data[11];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NtpClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NtpClient_t qt_meta_stringdata_NtpClient = {
    {
QT_MOC_LITERAL(0, 0, 9), // "NtpClient"
QT_MOC_LITERAL(1, 10, 13), // "replyReceived"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "QHostAddress"
QT_MOC_LITERAL(4, 38, 7), // "address"
QT_MOC_LITERAL(5, 46, 4), // "port"
QT_MOC_LITERAL(6, 51, 8), // "NtpReply"
QT_MOC_LITERAL(7, 60, 5), // "reply"
QT_MOC_LITERAL(8, 66, 7), // "message"
QT_MOC_LITERAL(9, 74, 5), // "sendT"
QT_MOC_LITERAL(10, 80, 20) // "readPendingDatagrams"

    },
    "NtpClient\0replyReceived\0\0QHostAddress\0"
    "address\0port\0NtpReply\0reply\0message\0"
    "sendT\0readPendingDatagrams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NtpClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UShort, 0x80000000 | 6, QMetaType::QJsonObject, QMetaType::LongLong,    4,    5,    7,    8,    9,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void NtpClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NtpClient *_t = static_cast<NtpClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->replyReceived((*reinterpret_cast< const QHostAddress(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< const NtpReply(*)>(_a[3])),(*reinterpret_cast< const QJsonObject(*)>(_a[4])),(*reinterpret_cast< const long long(*)>(_a[5]))); break;
        case 1: _t->readPendingDatagrams(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NtpClient::*)(const QHostAddress & , quint16 , const NtpReply & , const QJsonObject & , const long long & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NtpClient::replyReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NtpClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NtpClient.data,
      qt_meta_data_NtpClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NtpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NtpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NtpClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NtpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void NtpClient::replyReceived(const QHostAddress & _t1, quint16 _t2, const NtpReply & _t3, const QJsonObject & _t4, const long long & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
