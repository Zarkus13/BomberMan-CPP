/****************************************************************************
** Meta object code from reading C++ file 'bombermanmortthread.h'
**
** Created: Mon May 31 09:14:34 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bombermanmortthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bombermanmortthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BomberManMortThread[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      38,   20,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_BomberManMortThread[] = {
    "BomberManMortThread\0\0signalAnimMort()\0"
    "signalFinMort()\0"
};

const QMetaObject BomberManMortThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_BomberManMortThread,
      qt_meta_data_BomberManMortThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BomberManMortThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BomberManMortThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BomberManMortThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BomberManMortThread))
        return static_cast<void*>(const_cast< BomberManMortThread*>(this));
    return QThread::qt_metacast(_clname);
}

int BomberManMortThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: signalAnimMort(); break;
        case 1: signalFinMort(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BomberManMortThread::signalAnimMort()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void BomberManMortThread::signalFinMort()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
