/****************************************************************************
** Meta object code from reading C++ file 'transferpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tcp_client/transferpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transferpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_transferPage_t {
    QByteArrayData data[11];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_transferPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_transferPage_t qt_meta_stringdata_transferPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "transferPage"
QT_MOC_LITERAL(1, 13, 19), // "signal_backto_input"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "slot_display_page"
QT_MOC_LITERAL(4, 52, 23), // "slot_btnConnect_clicked"
QT_MOC_LITERAL(5, 76, 26), // "slot_btnDisconnect_clicked"
QT_MOC_LITERAL(6, 103, 20), // "slot_btnSend_clicked"
QT_MOC_LITERAL(7, 124, 20), // "slot_btnBack_clicked"
QT_MOC_LITERAL(8, 145, 23), // "slot_connectEstablished"
QT_MOC_LITERAL(9, 169, 25), // "slot_diconnectedCompleted"
QT_MOC_LITERAL(10, 195, 22) // "slot_tcpsocketReaddata"

    },
    "transferPage\0signal_backto_input\0\0"
    "slot_display_page\0slot_btnConnect_clicked\0"
    "slot_btnDisconnect_clicked\0"
    "slot_btnSend_clicked\0slot_btnBack_clicked\0"
    "slot_connectEstablished\0"
    "slot_diconnectedCompleted\0"
    "slot_tcpsocketReaddata"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_transferPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

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

void transferPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<transferPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_backto_input(); break;
        case 1: _t->slot_display_page(); break;
        case 2: _t->slot_btnConnect_clicked(); break;
        case 3: _t->slot_btnDisconnect_clicked(); break;
        case 4: _t->slot_btnSend_clicked(); break;
        case 5: _t->slot_btnBack_clicked(); break;
        case 6: _t->slot_connectEstablished(); break;
        case 7: _t->slot_diconnectedCompleted(); break;
        case 8: _t->slot_tcpsocketReaddata(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (transferPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&transferPage::signal_backto_input)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject transferPage::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_transferPage.data,
    qt_meta_data_transferPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *transferPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *transferPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_transferPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int transferPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void transferPage::signal_backto_input()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
