/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,   11,   11,   11, 0x08,
      55,   11,   11,   11, 0x08,
      72,   11,   11,   11, 0x08,
      94,   11,   11,   11, 0x08,
     117,   11,   11,   11, 0x08,
     139,   11,   11,   11, 0x08,
     156,   11,   11,   11, 0x08,
     179,   11,   11,   11, 0x08,
     203,   11,   11,   11, 0x08,
     231,  229,   11,   11, 0x08,
     252,   11,   11,   11, 0x08,
     279,   11,   11,   11, 0x08,
     298,   11,   11,   11, 0x08,
     312,   11,   11,   11, 0x08,
     329,  229,   11,   11, 0x08,
     353,   11,   11,   11, 0x08,
     378,   11,   11,   11, 0x08,
     397,   11,   11,   11, 0x08,
     416,   11,   11,   11, 0x08,
     427,   11,   11,   11, 0x08,
     447,   11,   11,   11, 0x08,
     470,   11,   11,   11, 0x08,
     487,   11,   11,   11, 0x08,
     518,   11,   11,   11, 0x08,
     551,   11,   11,   11, 0x08,
     577,   11,   11,   11, 0x08,
     599,   11,   11,   11, 0x08,
     617,   11,   11,   11, 0x08,
     633,   11,   11,   11, 0x08,
     645,   11,   11,   11, 0x08,
     657,   11,   11,   11, 0x08,
     669,   11,   11,   11, 0x08,
     684,   11,   11,   11, 0x08,
     702,   11,   11,   11, 0x08,
     726,   11,   11,   11, 0x08,
     744,   11,   11,   11, 0x08,
     762,   11,   11,   11, 0x08,
     777,   11,   11,   11, 0x08,
     798,   11,   11,   11, 0x08,
     819,   11,   11,   11, 0x08,
     831,   11,   11,   11, 0x08,
     842,   11,   11,   11, 0x08,
     856,   11,   11,   11, 0x08,
     876,  873,   11,   11, 0x08,
     909,   11,   11,   11, 0x08,
     926,   11,   11,   11, 0x08,
     939,   11,   11,   11, 0x08,
     955,   11,   11,   11, 0x08,
     966,   11,   11,   11, 0x08,

 // methods: signature, parameters, type, tag, flags
     994,  229,   11,   11, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0readySend()\0"
    "on_btngetNearestNode_clicked()\0"
    "onOptimizeMove()\0on_btnPrint_clicked()\0"
    "on_btnUpdate_clicked()\0on_btnClear_clicked()\0"
    "Send_Broadcast()\0autoTakePhoto(QString)\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0,\0"
    "sendCommand(int,int)\0onOpenCloseButtonClicked()\0"
    "onGpsData(QString)\0initMap(bool)\0"
    "initListSensor()\0onNodeJoin(int,QString)\0"
    "onImageReceived(QString)\0addMarker(QString)\0"
    "removeAllMarkers()\0ClearMap()\0"
    "ShowAllSensor(bool)\0ShowJoinedSensor(bool)\0"
    "zoomMap(QString)\0gotoPlaceByCoordinate(QString)\0"
    "populateJavaScriptWindowObject()\0"
    "onTranceiverData(QString)\0"
    "onTempAndHum(QString)\0onGpsStatus(bool)\0"
    "startLinphone()\0ShowAbout()\0RetaskOne()\0"
    "RetaskAll()\0AddNewSensor()\0EditSensorPlace()\0"
    "ShowSensorInformation()\0StartupLocation()\0"
    "SetupSerialPort()\0SendToServer()\0"
    "on_btnExit_clicked()\0on_btnView_clicked()\0"
    "sendtoWeb()\0sendMqtt()\0mqttConnect()\0"
    "connectEnabled()\0,,\0"
    "sendMqttTandH(int,double,double)\0"
    "sendImageToWeb()\0GetDataWeb()\0"
    "sendBroadcast()\0makePlot()\0"
    "WriteDatatoLogfile(QString)\0"
    "mySendCommand(int,int)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->readySend(); break;
        case 1: _t->on_btngetNearestNode_clicked(); break;
        case 2: _t->onOptimizeMove(); break;
        case 3: _t->on_btnPrint_clicked(); break;
        case 4: _t->on_btnUpdate_clicked(); break;
        case 5: _t->on_btnClear_clicked(); break;
        case 6: _t->Send_Broadcast(); break;
        case 7: _t->autoTakePhoto((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        case 10: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->onOpenCloseButtonClicked(); break;
        case 12: _t->onGpsData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->initMap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->initListSensor(); break;
        case 15: _t->onNodeJoin((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->onImageReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->addMarker((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->removeAllMarkers(); break;
        case 19: _t->ClearMap(); break;
        case 20: _t->ShowAllSensor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->ShowJoinedSensor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->zoomMap((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->gotoPlaceByCoordinate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->populateJavaScriptWindowObject(); break;
        case 25: _t->onTranceiverData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->onTempAndHum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->onGpsStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->startLinphone(); break;
        case 29: _t->ShowAbout(); break;
        case 30: _t->RetaskOne(); break;
        case 31: _t->RetaskAll(); break;
        case 32: _t->AddNewSensor(); break;
        case 33: _t->EditSensorPlace(); break;
        case 34: _t->ShowSensorInformation(); break;
        case 35: _t->StartupLocation(); break;
        case 36: _t->SetupSerialPort(); break;
        case 37: _t->SendToServer(); break;
        case 38: _t->on_btnExit_clicked(); break;
        case 39: _t->on_btnView_clicked(); break;
        case 40: _t->sendtoWeb(); break;
        case 41: _t->sendMqtt(); break;
        case 42: _t->mqttConnect(); break;
        case 43: _t->connectEnabled(); break;
        case 44: _t->sendMqttTandH((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 45: _t->sendImageToWeb(); break;
        case 46: _t->GetDataWeb(); break;
        case 47: _t->sendBroadcast(); break;
        case 48: _t->makePlot(); break;
        case 49: _t->WriteDatatoLogfile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 50: _t->mySendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::readySend()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
