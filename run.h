// generated by Fast Light User Interface Designer (fluid) version 1.0305

#ifndef run_h
#define run_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Progress.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Menu_Button.H>

class ScoobyDoo {
public:
  Fl_Double_Window* make_window();
  Fl_Double_Window *Windows1;
  Fl_Group *LocationGroup;
  Fl_Input *OldLocationInput;
  Fl_Input *NewLocationInput;
  Fl_Button *SearchOldLocation;
  Fl_Button *SearchNewLocation;
  Fl_Group *ChoiceGroup;
  Fl_Check_Button *sn1Check;
  Fl_Check_Button *sn2Check;
  Fl_Check_Button *sd2Check;
  Fl_Group *StatusGroup;
  Fl_Group *SubmittionGroup;
};
#endif
