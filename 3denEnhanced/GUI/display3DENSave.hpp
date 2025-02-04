class Display3DENSave
{
  class ControlsBackground
  {
    class Background: ctrlStaticBackground
    {
      x = CENTER_X - (WINDOW_W_WIDE * 0.5) * GRID_W;
      w = WINDOW_W_WIDE * GRID_W;
    };
    class BackgroundFilter: ctrlStatic
    {
      x = CENTER_X - (WINDOW_W_WIDE * 1/4 - 1) * GRID_W;
      w = (WINDOW_W_WIDE * 3/4 - 2) * GRID_W;
    };
    class BackgroundFiles: ctrlStaticOverlay
    {
      x = CENTER_X - (WINDOW_W_WIDE * 1/4 - 1) * GRID_W;
      w = (WINDOW_W_WIDE * 3/4 - 2) * GRID_W;
    };
    class BackgroundButtons: ctrlStaticFooter
    {
      x = CENTER_X - (WINDOW_W_WIDE * 0.5) * GRID_W;
      w = WINDOW_W_WIDE * GRID_W;
    };
  };
  class Controls
  {
    class Title: ctrlStaticTitle
    {
      x = CENTER_X - (WINDOW_W_WIDE * 0.5) * GRID_W;
      w = WINDOW_W_WIDE * GRID_W;
    };
    class Search: ctrlEdit
    {
      x = CENTER_X + (WINDOW_W_WIDE * 1/4 - 5 - 1) * GRID_W;
      w = (WINDOW_W_WIDE / 4) * GRID_W;
    };
    class SearchButton: ctrlButtonSearch
    {
      x = CENTER_X + (WINDOW_W_WIDE * 1/2 - 5 - 1) * GRID_W;
    };
    class Folders: ctrlTree
    {
      x = CENTER_X - (WINDOW_W_WIDE * 0.5 - 1) * GRID_W;
      w = (WINDOW_W_WIDE * 1/4 - 1) * GRID_W;
    };
    class Files: ctrlListNBox
    {
      x = CENTER_X - (WINDOW_W_WIDE * 1/4 - 1) * GRID_W;
      w = (WINDOW_W_WIDE * 3/4 - 2) * GRID_W;
    };
    class Filter: ctrlListNBox
    {
      x = CENTER_X - (WINDOW_W_WIDE * 1/4 - 1) * GRID_W;
      w = (WINDOW_W_WIDE * 3/4 - 2) * GRID_W;
    };
    class NameText: ctrlStatic
    {
      x = CENTER_X - (WINDOW_W_WIDE * 0.5 - 1) * GRID_W;
      w = (WINDOW_W_WIDE * 1/4 - 1) * GRID_W;
    };
    class Name: ctrlEdit
    {
      x = CENTER_X - (WINDOW_W_WIDE * 1/4 - 1) * GRID_W;
      w = (WINDOW_W_WIDE * 3/4 - 2) * GRID_W;
    };
    class BinarizeText: ctrlStatic
    {
      x = CENTER_X - (WINDOW_W_WIDE * 0.5 - 1) * GRID_W;
      w = (WINDOW_W_WIDE * 1/4 - 1) * GRID_W;
    };
    class Binarize: ctrlCheckbox
    {
      x = CENTER_X - (WINDOW_W_WIDE * 1/4) * GRID_W;
    };
    class ButtonOK: ctrlButtonOK
    {
      x = CENTER_X + (WINDOW_W_WIDE * 0.5 - 50 - 2) * GRID_W;
    };
    class ButtonPurchase: ctrlShortcutButtonSteam
    {
      x = CENTER_X + (WINDOW_W_WIDE * 0.5 - 60 - 2) * GRID_W;
    };
    class ButtonCancel: ctrlButtonCancel
    {
      x = CENTER_X + (WINDOW_W_WIDE * 0.5 - 25 - 1) * GRID_W;
    };
  };
};