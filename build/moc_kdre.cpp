/****************************************************************************
** Meta object code from reading C++ file 'kdre.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kdre.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdre.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_KDRe[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      20,    5,    5,    5, 0x08,
      35,    5,    5,    5, 0x08,
      49,    5,    5,    5, 0x08,
      63,    5,    5,    5, 0x08,
      80,    5,    5,    5, 0x08,
      90,    5,    5,    5, 0x08,
     103,    5,    5,    5, 0x08,
     117,    5,    5,    5, 0x08,
     131,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_KDRe[] = {
    "KDRe\0\0browseInput()\0browseOutput()\0"
    "pixelResize()\0ratioResize()\0"
    "sliderMoved(int)\0resetUi()\0removeItem()\0"
    "selectImage()\0startResize()\0"
    "aspectRatioChange(int)\0"
};

void KDRe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KDRe *_t = static_cast<KDRe *>(_o);
        switch (_id) {
        case 0: _t->browseInput(); break;
        case 1: _t->browseOutput(); break;
        case 2: _t->pixelResize(); break;
        case 3: _t->ratioResize(); break;
        case 4: _t->sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->resetUi(); break;
        case 6: _t->removeItem(); break;
        case 7: _t->selectImage(); break;
        case 8: _t->startResize(); break;
        case 9: _t->aspectRatioChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData KDRe::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KDRe::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_KDRe,
      qt_meta_data_KDRe, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KDRe::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KDRe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KDRe::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KDRe))
        return static_cast<void*>(const_cast< KDRe*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int KDRe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
