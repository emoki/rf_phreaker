import QtQuick 2.0
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1
import RfPhreaker 1.0

TableView {
    id: s

    property alias suggestionModel: s.model
    property var sTextField

    height: 400
    width: sTextField.width
    visible: rowCount > 0
    headerVisible: false
    alternatingRowColors: false
    horizontalScrollBarPolicy: Qt.ScrollBarAlwaysOff
    selectionMode: SelectionMode.SingleSelection


    function sendCurrentSelection() {
        if(currentRow !== -1) {
            console.debug("Sending current selection (", suggestionModel[currentRow], ".")
            sTextField.update(suggestionModel[currentRow]);
        }
    }

    Keys.onPressed: {
        if(event.key === Qt.Key_Up && currentRow === 0) {
            sTextField.focus = true;
            event.accepted = true;
        }
        else if(event.key === Qt.Key_Down && currentRow === rowCount - 1) {
            sTextField.focus = true;
            event.accepted = true;
        }
        else if(event.key === Qt.Key_Return) {
            sendCurrentSelection();
            sTextField.focus = true;
            event.accepted = true;
        }
    }

    onDoubleClicked: sendCurrentSelection()
}

