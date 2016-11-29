import QtQuick 2.5
import QtQuick.Dialogs 1.2
import Qt.labs.settings 1.0
import Material 0.3
import Material.ListItems 0.1 as ListItem
import RfPhreaker 1.0

ApplicationWindow {
    id: rpWindow

    property alias stateMachine: dsmOperation
    property alias openScannerDialog: __openScannerDialog
    property alias snackbar: __snackbar
    property alias startCollectionDialog: __startCollectionDialog
    title: ""

    visible: true

    theme {
        primaryColor: "indigo"
        accentColor: "green"
        tabHighlightColor: "white"
    }

    property var pages: [
            "Dashboard", "Measurements", "Navigation"
    ]

    property string selectedComponent: pages[0]

    //initialPage: MaterialMeasurementsPage {id: tmp; anchors.fill: parent}

    initialPage: MaterialTabbedNavigationDrawerPage {
        id: navPage

        Component.onCompleted: navPage.navigate(Qt.resolvedUrl("Material%Page.qml").arg(rpWindow.selectedComponent.replace(" ", "")))

        navDrawer: NavigationDrawer {
            id: navDrawer

            Flickable {
                anchors.fill: parent

                contentHeight: Math.max(content.implicitHeight, height)

                Column {
                    id: content
                    anchors.fill: parent

                    Repeater {
                        model: pages
                        delegate: ListItem.Standard {
                            text: modelData
                            selected: modelData == rpWindow.selectedComponent
                            onClicked: {
                                rpWindow.selectedComponent = modelData
                                navPage.navigate(Qt.resolvedUrl("Material%Page.qml").arg(rpWindow.selectedComponent.replace(" ", "")));
                                navDrawer.close()
                            }
                        }
                    }
                }
            }
        }

        Snackbar {
            id: __snackbar
        }
    }

    onClosing: {
        console.debug("Closing main app!");
        dsmOperation.stop();
        Api.cleanUpApi();
    }

    Settings {
        id: settings
        property alias x: rpWindow.x
        property alias y: rpWindow.y
        property alias width: rpWindow.width
        property alias height: rpWindow.height
    }

    MaterialStateMachine {
        id: dsmOperation
    }

    MaterialOpenScannerDialog {
        id: __openScannerDialog
    }

    FileSaveDialog{
        id: __startCollectionDialog
        visible: false
        title: "Please choose the collection filename"
        nameFilters: [ "rf phreaker files (*.rpf)", "kml files (*.kml)", "All files (*)" ]
//        modality: Qt.WindowModal
//        folder: shortcuts.documents
//        selectedNameFilter: "rf phreaker files (*.rfp)"
//        sidebarVisible: true
        onAccepted: {
            Api.collectionFilename = fileUrl;
            console.log("collection filename is" + fileUrl);
            rpWindow.stateMachine.startRecording();
        }
        onRejected: { console.log("Cancelled save collection filename.") }
    }
//    Label {
//        id: graphingLabel
//        font.pixelSize: dp(12)
//        font.family: "Roboto"
//        font.weight: Font.Normal
//    }

}
