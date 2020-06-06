import QtQuick 2.12
import QtQuick.Window 2.12
import Area 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    QmlPath{
        id:qmlPath
        anchors.fill: parent
        MouseArea{
            anchors.fill: parent
            onPressed: {
                qmlPath.pressEvent(Qt.point(mouse.x,mouse.y))
            }
            onPositionChanged: {
                qmlPath.moveEvent(Qt.point(mouse.x,mouse.y))
            }
            onReleased: {
                qmlPath.releaseEvent(Qt.point(mouse.x,mouse.y))
            }
        }
    }
}
