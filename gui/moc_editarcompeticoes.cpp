/****************************************************************************
** Meta object code from reading C++ file 'editarcompeticoes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editarcompeticoes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editarcompeticoes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditarCompeticoes_t {
    QByteArrayData data[11];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditarCompeticoes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditarCompeticoes_t qt_meta_stringdata_EditarCompeticoes = {
    {
QT_MOC_LITERAL(0, 0, 17), // "EditarCompeticoes"
QT_MOC_LITERAL(1, 18, 6), // "buscar"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "novaFase"
QT_MOC_LITERAL(4, 35, 9), // "adicionar"
QT_MOC_LITERAL(5, 45, 9), // "atualizar"
QT_MOC_LITERAL(6, 55, 10), // "novoTopico"
QT_MOC_LITERAL(7, 66, 10), // "montaProva"
QT_MOC_LITERAL(8, 77, 11), // "novaQuestao"
QT_MOC_LITERAL(9, 89, 13), // "novoCandidato"
QT_MOC_LITERAL(10, 103, 7) // "resolve"

    },
    "EditarCompeticoes\0buscar\0\0novaFase\0"
    "adicionar\0atualizar\0novoTopico\0"
    "montaProva\0novaQuestao\0novoCandidato\0"
    "resolve"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditarCompeticoes[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
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

void EditarCompeticoes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditarCompeticoes *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buscar(); break;
        case 1: _t->novaFase(); break;
        case 2: _t->adicionar(); break;
        case 3: _t->atualizar(); break;
        case 4: _t->novoTopico(); break;
        case 5: _t->montaProva(); break;
        case 6: _t->novaQuestao(); break;
        case 7: _t->novoCandidato(); break;
        case 8: _t->resolve(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EditarCompeticoes::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_EditarCompeticoes.data,
    qt_meta_data_EditarCompeticoes,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EditarCompeticoes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditarCompeticoes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditarCompeticoes.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EditarCompeticoes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
