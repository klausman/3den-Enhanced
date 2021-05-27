
//GUI and script related macros
#include "\a3\3DEN\UI\macros.inc"

//DIK Key Codes
#include "\a3\ui_f\hpp\definedikcodes.inc"

//Common GRIDs
#include "\a3\ui_f\hpp\definecommongrids.inc"

//Eden Editor IDDs and IDCs as well as controls types and styles and macros
#include "\a3\3den\ui\resincl.inc"

#define SHOW_IN_ROOT value = 0
#define EDIT_W 10
#define EDIT_W_WIDE 11
#define CENTERED_X(w) (CENTER_X - (w / 2 * GRID_W))
#define DIALOG_TOP (safezoneY + 17 * GRID_H)
#define CTRL_DEFAULT_H (SIZE_M * GRID_H)

//Statusbar
#define SPACE_X (2 * pixelW)
#define ORIGIN_X_STATUSBAR (safezoneW - 60 * GRID_W)

//Macros for scripting
#define CTRL(IDC) (_display displayCtrl IDC)

//Eden Editor
#define IDD_3DEN 313

//3den Enhanced specific IDDs and IDCs
#define IDD_3DENCAMPOS -1
#define IDC_3DENCAMPOS_LIST 1000
#define IDC_3DENCAMPOS_DESCRIPTION 2000

#define IDD_3DENRADIO 60000
#define IDC_3DENRADIO_SONGLIST 100
#define IDC_3DENRADIO_FILTER 200
#define IDC_3DENRADIO_TOGGLERADIO 300
#define IDC_3DENRADIO_VOLUME 400
#define IDC_3DENRADIO_SORT 500
#define IDC_3DENRADIO_SEARCH 600
#define IDC_3DENRADIO_CURRENTSONG 700
#define IDC_3DENRADIO_POSITION 800
#define IDC_3DENRADIO_TIME 900

#define IDD_SENTENCESBROWSER -1
#define IDC_SENTENCESBROWSER_COUNT 3000
#define IDC_SENTENCESBROWSER_PAGES 1000
#define IDC_SENTENCESBROWSER_LIST 2000
#define IDC_SENTENCESBROWSER_FAVORITES 4000
#define IDC_SENTENCESBROWSER_SEARCH 10000
#define IDC_SENTENCESBROWSER_FILTER 5000

#define IDC_SHORTCUTS_TITLE 10
#define IDC_SHORTCUTS_CONTENTBG 20
#define IDC_SHORTCUTS_CLOSE 1
#define IDC_SHORTCUTS_SEARCH 30
#define IDC_SHORTCUTS_SEARCHICON 40
#define IDC_SHORTCUTS_CONTENT 50
#define IDC_SHORTCUTS_FILTERBG 60
#define IDC_SHORTCUTS_FILTER 70
#define IDC_SHORTCUTS_DISABLEDBG 80
#define IDC_SHORTCUTS_DISABLEDTILESBG 90

#define IDD_ACTIONCREATOR 190000
#define IDC_ACTIONCREATOR_TITLE 1408
#define IDC_ACTIONCREATOR_SCRIPT 1400
#define IDC_ACTIONCREATOR_ARGUMENTS 1401
#define IDC_ACTIONCREATOR_PRIORITY 1402
#define IDC_ACTIONCREATOR_SHORTCUT 1405
#define IDC_ACTIONCREATOR_CONDITION 1403
#define IDC_ACTIONCREATOR_RADIUS 1404
#define IDC_ACTIONCREATOR_SELECTION 1406
#define IDC_ACTIONCREATOR_MEMORYPOINT 1407
#define IDC_ACTIONCREATOR_TOOLBOX 1000
#define IDC_ACTIONCREATOR_OK -1

#define IDD_BATCHREPLACE 150000
#define IDC_BATCHREPLACE_REPLACEWITH 1400
#define IDC_BATCHREPLACE_SEARCH 1500
#define IDC_BATCHREPLACE_LIST 1600
#define IDC_BATCHREPLACE_PREVIEW 1700

#define IDD_BRIEFINGEDITOR -1
#define IDC_BRIEFINGEDITOR_TEMPLATES 80
#define IDC_BRIEFINGEDITOR_MARKERS 60
#define IDC_BRIEFINGEDITOR_COLOURS 100
#define IDC_BRIEFINGEDITOR_FONTS 70
#define IDC_BRIEFINGEDITOR_SUBJECT 20
#define IDC_BRIEFINGEDITOR_TITLE 30
#define IDC_BRIEFINGEDITOR_BRIEFINGTEXT 10
#define IDC_BRIEFINGEDITOR_SHOWTITLE 40
#define IDC_BRIEFINGEDITOR_TAGS 90
#define IDC_BRIEFINGEDITOR_FIRSTPARAM 200
#define IDC_BRIEFINGEDITOR_FIRSTPARAMVALUE 210
#define IDC_BRIEFINGEDITOR_SECONDPARAM 220
#define IDC_BRIEFINGEDITOR_SECONDPARAMVALUE 230
#define IDC_BRIEFINGEDITOR_THIRDPARAM 240
#define IDC_BRIEFINGEDITOR_THIRDPARAMVALUE 250

#define IDD_SENTENCES -1
#define IDC_SENTENCES_COUNT 3000
#define IDC_SENTENCES_PAGES 1000
#define IDC_SENTENCES_LIST 2000
#define IDC_SENTENCES_FAVORITES 4000
#define IDC_SENTENCES_SEARCH 10000
#define IDC_SENTENCES_FILTER 5000


#define IDD_EXTRACTION 50000
#define IDC_EXTRACTION_SHOWRADIOCHAT 100
#define IDC_EXTRACTION_NAMEREQUESTER 200
#define IDC_EXTRACTION_NAMETRANSPORT 300
#define IDC_EXTRACTION_CONDITIONSTART 400
#define IDC_EXTRACTION_GRENADE 500
#define IDC_EXTRACTION_CONDITION 600
#define IDC_EXTRACTION_GRID 700
#define IDC_EXTRACTION_VEHICLE 800
#define IDC_EXTRACTION_POSITION 900
#define IDC_EXTRACTION_IMAGE 1000
#define IDC_EXTRACTION_OK -1

#define IDD_FUNCTIONSVIEWER -1
#define IDC_FUNCTIONSVIEWER_FILTERCONFIG 1700
#define IDC_FUNCTIONSVIEWER_FILTERMODE 1800
#define IDC_FUNCTIONSVIEWER_LIST 1500
#define IDC_FUNCTIONSVIEWER_LOADMODE 2200
#define IDC_FUNCTIONSVIEWER_NUMFUNCTIONS 1405
#define IDC_FUNCTIONSVIEWER_SEARCH 1400
#define IDC_FUNCTIONSVIEWER_NAME 1402
#define IDC_FUNCTIONSVIEWER_PATH 1403
#define IDC_FUNCTIONSVIEWER_RECOMPILESELECTED 1600
#define IDC_FUNCTIONSVIEWER_COPY 1602
#define IDC_FUNCTIONSVIEWER_RECOMPILEALL 1601
#define IDC_FUNCTIONSVIEWER_BIKI 1900
#define IDC_FUNCTIONSVIEWER_SEARCHCODE 2000
#define IDC_FUNCTIONSVIEWER_SEARCHTEXT 2100
#define IDC_FUNCTIONSVIEWER_GROUP 5000
#define IDC_FUNCTIONSVIEWER_LINES 1404
#define IDC_FUNCTIONSVIEWER_CODE 1401
#define IDC_FUNCTIONSVIEWER_PANNEL 1406

/* #define IDD_GARRISON -1
#define IDC_GARRISON_RADIUS 100
#define IDC_GARRISON_COVERAGE 200
#define IDC_GARRISON_STANCE 300 */
#define IDC_GARRISON_GROUP 20100
#define IDC_GARRISON_BLACKLIST_TOGGLE 20000
#define IDC_GARRISON_BLACKLIST_VALUE 20002
#define IDC_GARRISON_COVERAGE 20003
#define IDC_GARRISON_MODE 20004
#define IDC_GARRISON_PATH 20005
#define IDC_GARRISON_INFO 20006
#define IDC_GARRISON_STANCE 20007
#define IDC_GARRISON_UPDATE_SELECTION 20008
#define IDC_GARRISON_CANCEL 20009
#define IDC_GARRISON_OK 20010

#define IDD_VIM -1
#define IDC_VIM_AVAILABLEITEMSTEXT 1000
#define IDC_VIM_BACKGROUNDICON 2000
#define IDC_VIM_FILTER 2100
#define IDC_VIM_AVAILABLEITEMSLIST 2200
#define IDC_VIM_INVENTORYLIST 2300
#define IDC_VIM_ADDONE 2400
#define IDC_VIM_ADDTEN 2500
#define IDC_VIM_REMOVEONE 2600
#define IDC_VIM_REMOVETEN 2700
#define IDC_VIM_REMOVEALL 2800
#define IDC_VIM_CREATETEMPLATE 2900
#define IDC_VIM_DELETETEMPLATE 3000
#define IDC_VIM_APPLYTEMPLATE 3100
#define IDC_VIM_VIRTUAL 3200
#define IDC_VIM_FILTERSEARCH 3300
#define IDC_VIM_SEARCH 3400
#define IDC_VIM_BUTTONSEARCH 3500
#define IDC_VIM_FULLARSENAL 3600
#define IDC_VIM_VIRTUAL_TEXT 3700
#define IDC_VIM_RESET 3800
#define IDC_VIM_BUTTONOK -1

#define IDD_VIM_TEMPLATEDATA -1
#define IDC_VIM_TEMPLATEDATA_TITLE 1000
#define IDC_VIM_TEMPLATEDATA_DESCRIPTION 2000

#define IDD_MODULEINFORMATION -1
#define IDC_MODULEINFORMATION_DESCRIPTION 1400
#define IDC_MODULEINFORMATION_POSITION 1401
#define IDC_MODULEINFORMATION_DUPLICATE 1402
#define IDC_MODULEINFORMATION_DIRECTION 1403
#define IDC_MODULEINFORMATION_SYNC 1404

#define IDD_NAMEOBJECTS 80000
#define IDC_NAMEOBJECTS_VARIABLENAME 1000
#define IDC_NAMEOBJECTS_INDEXSTART 1100
#define IDC_NAMEOBJECTS_OK -1

#define IDD_PLACEMENTTOOLS -1
#define IDC_PLACEMENTTOOLS_FINECONTROL 250
#define IDC_PLACEMENTTOOLS_CURRENTVALUE 120
#define IDC_PLACEMENTTOOLS_RADIUS 10
#define IDC_PLACEMENTTOOLS_INITIALANGLE 20
#define IDC_PLACEMENTTOOLS_CENTRALANGLE 30
#define IDC_PLACEMENTTOOLS_SPACING 40
#define IDC_PLACEMENTTOOLS_NUMCOLUMNS 50
#define IDC_PLACEMENTTOOLS_SPACEX 60
#define IDC_PLACEMENTTOOLS_SPACEY 70
#define IDC_PLACEMENTTOOLS_A 80
#define IDC_PLACEMENTTOOLS_B 90

#define IDD_SAM 160000
#define IDC_SAM_TEMPLATES 1501
#define IDC_SAM_ATTRIBUTES 1500
#define IDC_SAM_SEARCH 1400

#define IDD_SAM_TEMPLATEDATA -1
#define IDC_SAM_TEMPLATEDATA_TITLE 1400
#define IDC_SAM_TEMPLATEDATA_DESCRIPTION 1401

#define IDD_TEXTUREFINDER 140000
#define IDC_TEXTUREFINDER_TEXTURELIST 1500
#define IDC_TEXTUREFINDER_PROGRESS 1800
#define IDC_TEXTUREFINDER_PREVIEW 1200
#define IDC_TEXTUREFINDER_PROGRESSTEXT 1002
#define IDC_TEXTUREFINDER_SEARCH 1600

#define IDC_RPTVIEWER_TITLE 200
#define IDC_RPTVIEWER_GROUP 201
#define IDC_RPTVIEWER_EDIT 202
#define IDC_RPTVIEWER_LINES 203

#define IDD_VARIABLEVIEWER -1
#define IDC_VARIABLEVIEWER_LIST 1000
#define IDC_VARIABLEVIEWER_NAMESPACE 4000
#define IDC_VARIABLEVIEWER_VARIABLECOUNT 3000
#define IDC_VARIABLEVIEWER_SEARCH 2000
#define IDC_VARIABLEVIEWER_SEARCHBUTTON 6000
#define IDC_VARIABLEVIEWER_HIDEFUNCTIONS 9000
#define IDC_VARIABLEVIEWER_VARIABLENAME 8000
#define IDC_VARIABLEVIEWER_VARIABLEVALUE 5000
#define IDC_VARIABLEVIEWER_SET 10000
#define IDC_VARIABLEVIEWER_FILTER 11000

#define IDC_STATUSBAR_SESSIONTIMER 668
#define IDC_STATUSBAR_NUMMARKERS 669
#define IDC_STATUSBAR_ICONMARKERS 670
#define IDC_STATUSBAR_NUMSYSTEMS 671
#define IDC_STATUSBAR_ICONSYSTEMS 672
#define IDC_STATUSBAR_NUMWAYPOINTS 673
#define IDC_STATUSBAR_ICONWAYPOINTS 674
#define IDC_STATUSBAR_NUMTRIGGERS 675
#define IDC_STATUSBAR_ICONTRIGGERS 676
#define IDC_STATUSBAR_NUMGROUPS 677
#define IDC_STATUSBAR_ICONGROUPS 678
#define IDC_STATUSBAR_NUMOBJECTS 679
#define IDC_STATUSBAR_ICONOBJECTS 680

#define IDC_ZEUSADDONS_CFGPATCHES 10
#define IDC_ZEUSADDONS_UNITS 20
#define IDC_ZEUSADDONS_EXPORT 30
#define IDC_ZEUSADDONS_INVERT 40
#define IDC_ZEUSADDONS_SEARCH 50
#define IDC_ZEUSADDONS_COLLAPSE 60
#define IDC_ZEUSADDONS_EXPAND 70