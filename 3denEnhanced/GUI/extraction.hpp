#include "\3denEnhanced\defineCommon.hpp"
#define DIALOG_W 110
#define DIALOG_H 70

class ENH_Extraction
{
  idd = IDD_EXTRACTION;
  movingEnable = true;
  onLoad = "_this call ENH_fnc_extraction_onLoad";
  class ControlsBackground
  {
    DISABLE_BACKGROUND
    class Background: ctrlStaticBackground
    {
      x = CENTERED_X(DIALOG_W);
      y = DIALOG_TOP + CTRL_DEFAULT_H;
      w = DIALOG_W * GRID_W;
      h = DIALOG_H * GRID_H;
    };
  };
  class Controls
  {
    class Header: ctrlStaticTitle
    {
      text = $STR_ENH_EXTRACTION_HEADER;
      x = CENTERED_X(DIALOG_W);
      y = DIALOG_TOP;
      w = DIALOG_W * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class ShowRadioChat: ctrlStatic
    {
      text = $STR_ENH_EXTRACTION_SHOWRADIOCHAT;
      x = CENTERED_X(DIALOG_W);
      y = DIALOG_TOP + 6 * GRID_H;
      w = 30 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class ShowRadioChatValue: ctrlCheckbox
    {
      idc = IDC_EXTRACTION_SHOWRADIOCHAT;
      x = CENTERED_X(DIALOG_W) + 29 * GRID_W;
      y = DIALOG_TOP + 6 * GRID_H;
      w = 30 * pixelW;
      h = 30 * pixelH;
      onCheckedChanged = "_this call ENH_fnc_extraction_onCheckedChanged";
    };
    class NameRequester: ctrlStatic
    {
      text = $STR_ENH_EXTRACTION_CALLSIGNREQUESTER;
      x = CENTERED_X(DIALOG_W);
      y = DIALOG_TOP + 12 * GRID_H;
      w = 30 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class NameRequesterValue: ctrlEdit
    {
      idc = IDC_EXTRACTION_NAMEREQUESTER;
      x = CENTERED_X(DIALOG_W) + 30 * GRID_W;
      y = DIALOG_TOP + 12 * GRID_H;
      w = 79 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class NameTransport: ctrlStatic
    {
      text = $STR_ENH_EXTRACTION_CALLSIGNTRANSPORT;
      x = CENTERED_X(DIALOG_W);
      y = DIALOG_TOP + 18 * GRID_H;
      w = 30 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class NameTransportValue: ctrlEdit
    {
      idc = IDC_EXTRACTION_NAMETRANSPORT;
      x = CENTERED_X(DIALOG_W) + 30 * GRID_W;
      y = DIALOG_TOP + 18 * GRID_H;
      w = 79 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class ConditionStart: ctrlStatic
    {
      text = $STR_ENH_EXTRACTION_CONDITIONSTART;
      tooltip = $STR_ENH_EXTRACTION_CONDITIONSTART_TOOLTIP;
      x = CENTERED_X(DIALOG_W);
      y = DIALOG_TOP + 24 * GRID_H;
      w = 30 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class ConditionStartValue: ctrlEditMulti
    {
      idc = IDC_EXTRACTION_CONDITIONSTART;
      x = CENTERED_X(DIALOG_W) + 30 * GRID_W;
      y = DIALOG_TOP + 24 * GRID_H;
      w = 79 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class GrenadeType: ctrlStatic
    {
      text = $STR_ENH_EXTRACTION_GRENADETYPE;
      tooltip = $STR_ENH_EXTRACTION_GRENADETYPE_TOOLTIP;
      x = CENTERED_X(DIALOG_W);
      y = DIALOG_TOP + 30 * GRID_H;
      w = 30 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class GrenadeTypeValue: ctrlCombo
    {
      idc = IDC_EXTRACTION_GRENADE;
      x = CENTERED_X(DIALOG_W) + 30 * GRID_W;
      y = DIALOG_TOP + 30 * GRID_H;
      w = 79 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class Condition: ctrlStatic
    {
      text = $STR_ENH_CONDITION;
      tooltip = $STR_ENH_EXTRACTION_CONDITION_TOOLTIP;
      x = CENTERED_X(DIALOG_W);
      y = DIALOG_TOP + 36 * GRID_H;
      w = 30 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class ConditionValue: ctrlEditMulti
    {
      idc = IDC_EXTRACTION_CONDITION;
      x = CENTERED_X(DIALOG_W) + 30 * GRID_W;
      y = DIALOG_TOP + 36 * GRID_H;
      w = 79 * GRID_W;
      h = 4 * CTRL_DEFAULT_H;
    };
    class GridPosition: ctrlStatic
    {
      text = $STR_ENH_EXTRACTION_GRIDPOSITION;
      x = CENTERED_X(DIALOG_W);
      y = DIALOG_TOP + 57 * GRID_H;
      w = 30 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class GridPositionValue: ctrlEdit
    {
      idc = IDC_EXTRACTION_GRID;
      x = CENTERED_X(DIALOG_W) + 30 * GRID_W;
      y = DIALOG_TOP + 57 * GRID_H;
      w = 79 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class VehicleClass: ctrlEdit
    {
      idc = IDC_EXTRACTION_VEHICLE;
      x = CENTERED_X(DIALOG_W) + 30 * GRID_W;
      y = DIALOG_TOP + 63 * GRID_H;
      w = 42 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class Position: ctrlEdit
    {
      idc = IDC_EXTRACTION_POSITION;
      x = CENTERED_X(DIALOG_W) + 73 * GRID_W;
      y = DIALOG_TOP + 63 * GRID_H;
      w = 36 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class VehicleImage: ctrlStaticPictureKeepAspect
    {
      idc = IDC_EXTRACTION_IMAGE;
      x = CENTERED_X(DIALOG_W) + 4 * GRID_W;
      y = DIALOG_TOP + 39 * GRID_H;
      w = 20 * GRID_W;
      h = 20 * GRID_H;
    };
    class Cancel: ctrlButtonCancel
    {
      x = CENTERED_X(DIALOG_W) + 86 * GRID_W;
      y = DIALOG_TOP + 69 * GRID_H;
      w = 23 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class Ok: ctrlButtonOK
    {
      idc = IDC_EXTRACTION_OK;//We don't want it to close the GUI
      action = "call ENH_fnc_extraction_setup";
      x = CENTERED_X(DIALOG_W) + 61 * GRID_W;
      y = DIALOG_TOP + 69 * GRID_H;
      w = 23 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
  };
};