/****************************************************************************
** Meta object code from reading C++ file 'plotdata.h'
**
** Created: Tue Feb 3 14:33:24 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "plotdata.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plotdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlotData[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      35,    9,    9,    9, 0x08,
      55,    9,    9,    9, 0x08,
      79,    9,    9,    9, 0x08,
     102,    9,    9,    9, 0x08,
     130,  126,    9,    9, 0x08,
     157,    9,    9,    9, 0x08,
     169,    9,    9,    9, 0x08,
     182,    9,    9,    9, 0x08,
     198,    9,    9,    9, 0x08,
     214,    9,    9,    9, 0x08,
     230,    9,    9,    9, 0x08,
     245,    9,    9,    9, 0x08,
     260,    9,    9,    9, 0x08,
     276,    9,    9,    9, 0x08,
     293,    9,    9,    9, 0x08,
     310,    9,    9,    9, 0x08,
     324,    9,    9,    9, 0x08,
     338,    9,    9,    9, 0x08,
     354,    9,    9,    9, 0x08,
     370,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlotData[] = {
    "PlotData\0\0on_printButton_clicked()\0"
    "on_savPDF_clicked()\0on_scaleOnlyX_pressed()\0"
    "on_scaleBoth_pressed()\0on_scaleOnlyY_pressed()\0"
    "pos\0contextMenuRequest(QPoint)\0"
    "xFullZoom()\0xyFullZoom()\0x60SecondZoom()\0"
    "x30SecondZoom()\0x10SecondZoom()\0"
    "x5SecondZoom()\0x1SecondZoom()\0"
    "x1mSecondZoom()\0removeChannel1()\0"
    "removeChannel2()\0addChannel1()\0"
    "addChannel2()\0removeAllBut1()\0"
    "removeAllBut2()\0addAll()\0"
};

void PlotData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlotData *_t = static_cast<PlotData *>(_o);
        switch (_id) {
        case 0: _t->on_printButton_clicked(); break;
        case 1: _t->on_savPDF_clicked(); break;
        case 2: _t->on_scaleOnlyX_pressed(); break;
        case 3: _t->on_scaleBoth_pressed(); break;
        case 4: _t->on_scaleOnlyY_pressed(); break;
        case 5: _t->contextMenuRequest((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 6: _t->xFullZoom(); break;
        case 7: _t->xyFullZoom(); break;
        case 8: _t->x60SecondZoom(); break;
        case 9: _t->x30SecondZoom(); break;
        case 10: _t->x10SecondZoom(); break;
        case 11: _t->x5SecondZoom(); break;
        case 12: _t->x1SecondZoom(); break;
        case 13: _t->x1mSecondZoom(); break;
        case 14: _t->removeChannel1(); break;
        case 15: _t->removeChannel2(); break;
        case 16: _t->addChannel1(); break;
        case 17: _t->addChannel2(); break;
        case 18: _t->removeAllBut1(); break;
        case 19: _t->removeAllBut2(); break;
        case 20: _t->addAll(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlotData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlotData::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PlotData,
      qt_meta_data_PlotData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlotData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlotData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlotData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlotData))
        return static_cast<void*>(const_cast< PlotData*>(this));
    return QDialog::qt_metacast(_clname);
}

int PlotData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
